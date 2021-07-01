/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
