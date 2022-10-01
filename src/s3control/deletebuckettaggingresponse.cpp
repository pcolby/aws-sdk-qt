// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebuckettaggingresponse.h"
#include "deletebuckettaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteBucketTaggingResponse
 * \brief The DeleteBucketTaggingResponse class provides an interace for S3Control DeleteBucketTagging responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteBucketTagging
 */

/*!
 * Constructs a DeleteBucketTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketTaggingResponse::DeleteBucketTaggingResponse(
        const DeleteBucketTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DeleteBucketTaggingResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketTaggingRequest * DeleteBucketTaggingResponse::request() const
{
    Q_D(const DeleteBucketTaggingResponse);
    return static_cast<const DeleteBucketTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control DeleteBucketTagging \a response.
 */
void DeleteBucketTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DeleteBucketTaggingResponsePrivate
 * \brief The DeleteBucketTaggingResponsePrivate class provides private implementation for DeleteBucketTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteBucketTaggingResponsePrivate object with public implementation \a q.
 */
DeleteBucketTaggingResponsePrivate::DeleteBucketTaggingResponsePrivate(
    DeleteBucketTaggingResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DeleteBucketTagging response element from \a xml.
 */
void DeleteBucketTaggingResponsePrivate::parseDeleteBucketTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
