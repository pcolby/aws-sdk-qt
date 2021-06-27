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

#include "getbucketintelligenttieringconfigurationresponse.h"
#include "getbucketintelligenttieringconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketIntelligentTieringConfigurationResponse
 * \brief The GetBucketIntelligentTieringConfigurationResponse class provides an interace for S3 GetBucketIntelligentTieringConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketIntelligentTieringConfiguration
 */

/*!
 * Constructs a GetBucketIntelligentTieringConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketIntelligentTieringConfigurationResponse::GetBucketIntelligentTieringConfigurationResponse(
        const GetBucketIntelligentTieringConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketIntelligentTieringConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBucketIntelligentTieringConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketIntelligentTieringConfigurationRequest * GetBucketIntelligentTieringConfigurationResponse::request() const
{
    return static_cast<const GetBucketIntelligentTieringConfigurationRequest *>(S3Response::request());
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketIntelligentTieringConfiguration \a response.
 */
void GetBucketIntelligentTieringConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketIntelligentTieringConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketIntelligentTieringConfigurationResponsePrivate
 * \brief The GetBucketIntelligentTieringConfigurationResponsePrivate class provides private implementation for GetBucketIntelligentTieringConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketIntelligentTieringConfigurationResponsePrivate object with public implementation \a q.
 */
GetBucketIntelligentTieringConfigurationResponsePrivate::GetBucketIntelligentTieringConfigurationResponsePrivate(
    GetBucketIntelligentTieringConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketIntelligentTieringConfiguration response element from \a xml.
 */
void GetBucketIntelligentTieringConfigurationResponsePrivate::parseGetBucketIntelligentTieringConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketIntelligentTieringConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
