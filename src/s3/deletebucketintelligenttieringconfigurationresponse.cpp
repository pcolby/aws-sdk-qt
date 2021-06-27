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

#include "deletebucketintelligenttieringconfigurationresponse.h"
#include "deletebucketintelligenttieringconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketIntelligentTieringConfigurationResponse
 * \brief The DeleteBucketIntelligentTieringConfigurationResponse class provides an interace for S3 DeleteBucketIntelligentTieringConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketIntelligentTieringConfiguration
 */

/*!
 * Constructs a DeleteBucketIntelligentTieringConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketIntelligentTieringConfigurationResponse::DeleteBucketIntelligentTieringConfigurationResponse(
        const DeleteBucketIntelligentTieringConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketIntelligentTieringConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketIntelligentTieringConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketIntelligentTieringConfigurationRequest * DeleteBucketIntelligentTieringConfigurationResponse::request() const
{
    return static_cast<const DeleteBucketIntelligentTieringConfigurationRequest *>(S3Response::request());
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucketIntelligentTieringConfiguration \a response.
 */
void DeleteBucketIntelligentTieringConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketIntelligentTieringConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketIntelligentTieringConfigurationResponsePrivate
 * \brief The DeleteBucketIntelligentTieringConfigurationResponsePrivate class provides private implementation for DeleteBucketIntelligentTieringConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketIntelligentTieringConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteBucketIntelligentTieringConfigurationResponsePrivate::DeleteBucketIntelligentTieringConfigurationResponsePrivate(
    DeleteBucketIntelligentTieringConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucketIntelligentTieringConfiguration response element from \a xml.
 */
void DeleteBucketIntelligentTieringConfigurationResponsePrivate::parseDeleteBucketIntelligentTieringConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketIntelligentTieringConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
