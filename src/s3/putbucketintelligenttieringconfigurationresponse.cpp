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

#include "putbucketintelligenttieringconfigurationresponse.h"
#include "putbucketintelligenttieringconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketIntelligentTieringConfigurationResponse
 * \brief The PutBucketIntelligentTieringConfigurationResponse class provides an interace for S3 PutBucketIntelligentTieringConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketIntelligentTieringConfiguration
 */

/*!
 * Constructs a PutBucketIntelligentTieringConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketIntelligentTieringConfigurationResponse::PutBucketIntelligentTieringConfigurationResponse(
        const PutBucketIntelligentTieringConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketIntelligentTieringConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketIntelligentTieringConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketIntelligentTieringConfigurationRequest * PutBucketIntelligentTieringConfigurationResponse::request() const
{
    return static_cast<const PutBucketIntelligentTieringConfigurationRequest *>(S3Response::request());
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketIntelligentTieringConfiguration \a response.
 */
void PutBucketIntelligentTieringConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketIntelligentTieringConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketIntelligentTieringConfigurationResponsePrivate
 * \brief The PutBucketIntelligentTieringConfigurationResponsePrivate class provides private implementation for PutBucketIntelligentTieringConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketIntelligentTieringConfigurationResponsePrivate object with public implementation \a q.
 */
PutBucketIntelligentTieringConfigurationResponsePrivate::PutBucketIntelligentTieringConfigurationResponsePrivate(
    PutBucketIntelligentTieringConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketIntelligentTieringConfiguration response element from \a xml.
 */
void PutBucketIntelligentTieringConfigurationResponsePrivate::parsePutBucketIntelligentTieringConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketIntelligentTieringConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
