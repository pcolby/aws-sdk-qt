// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putpublicaccessblockresponse.h"
#include "putpublicaccessblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutPublicAccessBlockResponse
 * \brief The PutPublicAccessBlockResponse class provides an interace for S3Control PutPublicAccessBlock responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putPublicAccessBlock
 */

/*!
 * Constructs a PutPublicAccessBlockResponse object for \a reply to \a request, with parent \a parent.
 */
PutPublicAccessBlockResponse::PutPublicAccessBlockResponse(
        const PutPublicAccessBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new PutPublicAccessBlockResponsePrivate(this), parent)
{
    setRequest(new PutPublicAccessBlockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutPublicAccessBlockRequest * PutPublicAccessBlockResponse::request() const
{
    Q_D(const PutPublicAccessBlockResponse);
    return static_cast<const PutPublicAccessBlockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control PutPublicAccessBlock \a response.
 */
void PutPublicAccessBlockResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutPublicAccessBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::PutPublicAccessBlockResponsePrivate
 * \brief The PutPublicAccessBlockResponsePrivate class provides private implementation for PutPublicAccessBlockResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutPublicAccessBlockResponsePrivate object with public implementation \a q.
 */
PutPublicAccessBlockResponsePrivate::PutPublicAccessBlockResponsePrivate(
    PutPublicAccessBlockResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control PutPublicAccessBlock response element from \a xml.
 */
void PutPublicAccessBlockResponsePrivate::parsePutPublicAccessBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutPublicAccessBlockResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
