/*
    Copyright 2013-2019 Paul Colby

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

#include "getbucketlocationresponse.h"
#include "getbucketlocationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketLocationResponse
 * \brief The GetBucketLocationResponse class provides an interace for S3 GetBucketLocation responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketLocation
 */

/*!
 * Constructs a GetBucketLocationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketLocationResponse::GetBucketLocationResponse(
        const GetBucketLocationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketLocationResponsePrivate(this), parent)
{
    setRequest(new GetBucketLocationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketLocationRequest * GetBucketLocationResponse::request() const
{
    Q_D(const GetBucketLocationResponse);
    return static_cast<const GetBucketLocationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketLocation \a response.
 */
void GetBucketLocationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketLocationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketLocationResponsePrivate
 * \brief The GetBucketLocationResponsePrivate class provides private implementation for GetBucketLocationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketLocationResponsePrivate object with public implementation \a q.
 */
GetBucketLocationResponsePrivate::GetBucketLocationResponsePrivate(
    GetBucketLocationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketLocation response element from \a xml.
 */
void GetBucketLocationResponsePrivate::parseGetBucketLocationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketLocationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
