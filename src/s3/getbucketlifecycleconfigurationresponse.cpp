/*
    Copyright 2013-2020 Paul Colby

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

#include "getbucketlifecycleconfigurationresponse.h"
#include "getbucketlifecycleconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketLifecycleConfigurationResponse
 * \brief The GetBucketLifecycleConfigurationResponse class provides an interace for S3 GetBucketLifecycleConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketLifecycleConfiguration
 */

/*!
 * Constructs a GetBucketLifecycleConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketLifecycleConfigurationResponse::GetBucketLifecycleConfigurationResponse(
        const GetBucketLifecycleConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketLifecycleConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBucketLifecycleConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketLifecycleConfigurationRequest * GetBucketLifecycleConfigurationResponse::request() const
{
    Q_D(const GetBucketLifecycleConfigurationResponse);
    return static_cast<const GetBucketLifecycleConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketLifecycleConfiguration \a response.
 */
void GetBucketLifecycleConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketLifecycleConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketLifecycleConfigurationResponsePrivate
 * \brief The GetBucketLifecycleConfigurationResponsePrivate class provides private implementation for GetBucketLifecycleConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketLifecycleConfigurationResponsePrivate object with public implementation \a q.
 */
GetBucketLifecycleConfigurationResponsePrivate::GetBucketLifecycleConfigurationResponsePrivate(
    GetBucketLifecycleConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketLifecycleConfiguration response element from \a xml.
 */
void GetBucketLifecycleConfigurationResponsePrivate::parseGetBucketLifecycleConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketLifecycleConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
