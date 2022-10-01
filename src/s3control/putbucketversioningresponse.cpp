// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketversioningresponse.h"
#include "putbucketversioningresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutBucketVersioningResponse
 * \brief The PutBucketVersioningResponse class provides an interace for S3Control PutBucketVersioning responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putBucketVersioning
 */

/*!
 * Constructs a PutBucketVersioningResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketVersioningResponse::PutBucketVersioningResponse(
        const PutBucketVersioningRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new PutBucketVersioningResponsePrivate(this), parent)
{
    setRequest(new PutBucketVersioningRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketVersioningRequest * PutBucketVersioningResponse::request() const
{
    Q_D(const PutBucketVersioningResponse);
    return static_cast<const PutBucketVersioningRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control PutBucketVersioning \a response.
 */
void PutBucketVersioningResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketVersioningResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::PutBucketVersioningResponsePrivate
 * \brief The PutBucketVersioningResponsePrivate class provides private implementation for PutBucketVersioningResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutBucketVersioningResponsePrivate object with public implementation \a q.
 */
PutBucketVersioningResponsePrivate::PutBucketVersioningResponsePrivate(
    PutBucketVersioningResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control PutBucketVersioning response element from \a xml.
 */
void PutBucketVersioningResponsePrivate::parsePutBucketVersioningResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketVersioningResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
