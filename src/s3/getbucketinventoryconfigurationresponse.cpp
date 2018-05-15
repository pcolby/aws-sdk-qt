/*
    Copyright 2013-2018 Paul Colby

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

#include "getbucketinventoryconfigurationresponse.h"
#include "getbucketinventoryconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketInventoryConfigurationResponse
 * \brief The GetBucketInventoryConfigurationResponse class provides an interace for S3 GetBucketInventoryConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketInventoryConfiguration
 */

/*!
 * Constructs a GetBucketInventoryConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketInventoryConfigurationResponse::GetBucketInventoryConfigurationResponse(
        const GetBucketInventoryConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketInventoryConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBucketInventoryConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketInventoryConfigurationRequest * GetBucketInventoryConfigurationResponse::request() const
{
    Q_D(const GetBucketInventoryConfigurationResponse);
    return static_cast<const GetBucketInventoryConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketInventoryConfiguration \a response.
 */
void GetBucketInventoryConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketInventoryConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketInventoryConfigurationResponsePrivate
 * \brief The GetBucketInventoryConfigurationResponsePrivate class provides private implementation for GetBucketInventoryConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketInventoryConfigurationResponsePrivate object with public implementation \a q.
 */
GetBucketInventoryConfigurationResponsePrivate::GetBucketInventoryConfigurationResponsePrivate(
    GetBucketInventoryConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketInventoryConfiguration response element from \a xml.
 */
void GetBucketInventoryConfigurationResponsePrivate::parseGetBucketInventoryConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketInventoryConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
