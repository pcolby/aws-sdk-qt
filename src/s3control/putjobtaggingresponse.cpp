// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putjobtaggingresponse.h"
#include "putjobtaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutJobTaggingResponse
 * \brief The PutJobTaggingResponse class provides an interace for S3Control PutJobTagging responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putJobTagging
 */

/*!
 * Constructs a PutJobTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
PutJobTaggingResponse::PutJobTaggingResponse(
        const PutJobTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new PutJobTaggingResponsePrivate(this), parent)
{
    setRequest(new PutJobTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutJobTaggingRequest * PutJobTaggingResponse::request() const
{
    Q_D(const PutJobTaggingResponse);
    return static_cast<const PutJobTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control PutJobTagging \a response.
 */
void PutJobTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutJobTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::PutJobTaggingResponsePrivate
 * \brief The PutJobTaggingResponsePrivate class provides private implementation for PutJobTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutJobTaggingResponsePrivate object with public implementation \a q.
 */
PutJobTaggingResponsePrivate::PutJobTaggingResponsePrivate(
    PutJobTaggingResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control PutJobTagging response element from \a xml.
 */
void PutJobTaggingResponsePrivate::parsePutJobTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutJobTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
