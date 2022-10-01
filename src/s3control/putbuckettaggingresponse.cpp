// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbuckettaggingresponse.h"
#include "putbuckettaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutBucketTaggingResponse
 * \brief The PutBucketTaggingResponse class provides an interace for S3Control PutBucketTagging responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putBucketTagging
 */

/*!
 * Constructs a PutBucketTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketTaggingResponse::PutBucketTaggingResponse(
        const PutBucketTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new PutBucketTaggingResponsePrivate(this), parent)
{
    setRequest(new PutBucketTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketTaggingRequest * PutBucketTaggingResponse::request() const
{
    Q_D(const PutBucketTaggingResponse);
    return static_cast<const PutBucketTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control PutBucketTagging \a response.
 */
void PutBucketTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::PutBucketTaggingResponsePrivate
 * \brief The PutBucketTaggingResponsePrivate class provides private implementation for PutBucketTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutBucketTaggingResponsePrivate object with public implementation \a q.
 */
PutBucketTaggingResponsePrivate::PutBucketTaggingResponsePrivate(
    PutBucketTaggingResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control PutBucketTagging response element from \a xml.
 */
void PutBucketTaggingResponsePrivate::parsePutBucketTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
