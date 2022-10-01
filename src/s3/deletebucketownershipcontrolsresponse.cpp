// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketownershipcontrolsresponse.h"
#include "deletebucketownershipcontrolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketOwnershipControlsResponse
 * \brief The DeleteBucketOwnershipControlsResponse class provides an interace for S3 DeleteBucketOwnershipControls responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketOwnershipControls
 */

/*!
 * Constructs a DeleteBucketOwnershipControlsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketOwnershipControlsResponse::DeleteBucketOwnershipControlsResponse(
        const DeleteBucketOwnershipControlsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketOwnershipControlsResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketOwnershipControlsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketOwnershipControlsRequest * DeleteBucketOwnershipControlsResponse::request() const
{
    Q_D(const DeleteBucketOwnershipControlsResponse);
    return static_cast<const DeleteBucketOwnershipControlsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucketOwnershipControls \a response.
 */
void DeleteBucketOwnershipControlsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketOwnershipControlsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketOwnershipControlsResponsePrivate
 * \brief The DeleteBucketOwnershipControlsResponsePrivate class provides private implementation for DeleteBucketOwnershipControlsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketOwnershipControlsResponsePrivate object with public implementation \a q.
 */
DeleteBucketOwnershipControlsResponsePrivate::DeleteBucketOwnershipControlsResponsePrivate(
    DeleteBucketOwnershipControlsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucketOwnershipControls response element from \a xml.
 */
void DeleteBucketOwnershipControlsResponsePrivate::parseDeleteBucketOwnershipControlsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketOwnershipControlsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
