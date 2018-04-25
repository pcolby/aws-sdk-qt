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

#include "getbucketaccelerateconfigurationresponse.h"
#include "getbucketaccelerateconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketAccelerateConfigurationResponse
 * \brief The GetBucketAccelerateConfigurationResponse class provides an interace for S3 GetBucketAccelerateConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketAccelerateConfiguration
 */

/*!
 * Constructs a GetBucketAccelerateConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketAccelerateConfigurationResponse::GetBucketAccelerateConfigurationResponse(
        const GetBucketAccelerateConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketAccelerateConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBucketAccelerateConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketAccelerateConfigurationRequest * GetBucketAccelerateConfigurationResponse::request() const
{
    Q_D(const GetBucketAccelerateConfigurationResponse);
    return static_cast<const GetBucketAccelerateConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketAccelerateConfiguration \a response.
 */
void GetBucketAccelerateConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBucketAccelerateConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketAccelerateConfigurationResponsePrivate
 * \brief The GetBucketAccelerateConfigurationResponsePrivate class provides private implementation for GetBucketAccelerateConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketAccelerateConfigurationResponsePrivate object with public implementation \a q.
 */
GetBucketAccelerateConfigurationResponsePrivate::GetBucketAccelerateConfigurationResponsePrivate(
    GetBucketAccelerateConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketAccelerateConfiguration response element from \a xml.
 */
void GetBucketAccelerateConfigurationResponsePrivate::parseGetBucketAccelerateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketAccelerateConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
