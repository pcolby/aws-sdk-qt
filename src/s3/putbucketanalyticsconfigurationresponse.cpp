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

#include "putbucketanalyticsconfigurationresponse.h"
#include "putbucketanalyticsconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketAnalyticsConfigurationResponse
 * \brief The PutBucketAnalyticsConfigurationResponse class provides an interace for S3 PutBucketAnalyticsConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketAnalyticsConfiguration
 */

/*!
 * Constructs a PutBucketAnalyticsConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketAnalyticsConfigurationResponse::PutBucketAnalyticsConfigurationResponse(
        const PutBucketAnalyticsConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketAnalyticsConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketAnalyticsConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketAnalyticsConfigurationRequest * PutBucketAnalyticsConfigurationResponse::request() const
{
    Q_D(const PutBucketAnalyticsConfigurationResponse);
    return static_cast<const PutBucketAnalyticsConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketAnalyticsConfiguration \a response.
 */
void PutBucketAnalyticsConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketAnalyticsConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketAnalyticsConfigurationResponsePrivate
 * \brief The PutBucketAnalyticsConfigurationResponsePrivate class provides private implementation for PutBucketAnalyticsConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketAnalyticsConfigurationResponsePrivate object with public implementation \a q.
 */
PutBucketAnalyticsConfigurationResponsePrivate::PutBucketAnalyticsConfigurationResponsePrivate(
    PutBucketAnalyticsConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketAnalyticsConfiguration response element from \a xml.
 */
void PutBucketAnalyticsConfigurationResponsePrivate::parsePutBucketAnalyticsConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketAnalyticsConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
