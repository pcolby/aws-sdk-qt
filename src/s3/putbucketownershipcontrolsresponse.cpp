// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketownershipcontrolsresponse.h"
#include "putbucketownershipcontrolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketOwnershipControlsResponse
 * \brief The PutBucketOwnershipControlsResponse class provides an interace for S3 PutBucketOwnershipControls responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketOwnershipControls
 */

/*!
 * Constructs a PutBucketOwnershipControlsResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketOwnershipControlsResponse::PutBucketOwnershipControlsResponse(
        const PutBucketOwnershipControlsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketOwnershipControlsResponsePrivate(this), parent)
{
    setRequest(new PutBucketOwnershipControlsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketOwnershipControlsRequest * PutBucketOwnershipControlsResponse::request() const
{
    Q_D(const PutBucketOwnershipControlsResponse);
    return static_cast<const PutBucketOwnershipControlsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketOwnershipControls \a response.
 */
void PutBucketOwnershipControlsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketOwnershipControlsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketOwnershipControlsResponsePrivate
 * \brief The PutBucketOwnershipControlsResponsePrivate class provides private implementation for PutBucketOwnershipControlsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketOwnershipControlsResponsePrivate object with public implementation \a q.
 */
PutBucketOwnershipControlsResponsePrivate::PutBucketOwnershipControlsResponsePrivate(
    PutBucketOwnershipControlsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketOwnershipControls response element from \a xml.
 */
void PutBucketOwnershipControlsResponsePrivate::parsePutBucketOwnershipControlsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketOwnershipControlsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
