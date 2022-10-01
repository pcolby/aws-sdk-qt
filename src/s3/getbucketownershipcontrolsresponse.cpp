// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketownershipcontrolsresponse.h"
#include "getbucketownershipcontrolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketOwnershipControlsResponse
 * \brief The GetBucketOwnershipControlsResponse class provides an interace for S3 GetBucketOwnershipControls responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketOwnershipControls
 */

/*!
 * Constructs a GetBucketOwnershipControlsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketOwnershipControlsResponse::GetBucketOwnershipControlsResponse(
        const GetBucketOwnershipControlsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketOwnershipControlsResponsePrivate(this), parent)
{
    setRequest(new GetBucketOwnershipControlsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketOwnershipControlsRequest * GetBucketOwnershipControlsResponse::request() const
{
    Q_D(const GetBucketOwnershipControlsResponse);
    return static_cast<const GetBucketOwnershipControlsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketOwnershipControls \a response.
 */
void GetBucketOwnershipControlsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketOwnershipControlsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketOwnershipControlsResponsePrivate
 * \brief The GetBucketOwnershipControlsResponsePrivate class provides private implementation for GetBucketOwnershipControlsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketOwnershipControlsResponsePrivate object with public implementation \a q.
 */
GetBucketOwnershipControlsResponsePrivate::GetBucketOwnershipControlsResponsePrivate(
    GetBucketOwnershipControlsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketOwnershipControls response element from \a xml.
 */
void GetBucketOwnershipControlsResponsePrivate::parseGetBucketOwnershipControlsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketOwnershipControlsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
