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

#include "putbucketmetricsconfigurationresponse.h"
#include "putbucketmetricsconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketMetricsConfigurationResponse
 * \brief The PutBucketMetricsConfigurationResponse class provides an interace for S3 PutBucketMetricsConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketMetricsConfiguration
 */

/*!
 * Constructs a PutBucketMetricsConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketMetricsConfigurationResponse::PutBucketMetricsConfigurationResponse(
        const PutBucketMetricsConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketMetricsConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketMetricsConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketMetricsConfigurationRequest * PutBucketMetricsConfigurationResponse::request() const
{
    Q_D(const PutBucketMetricsConfigurationResponse);
    return static_cast<const PutBucketMetricsConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketMetricsConfiguration \a response.
 */
void PutBucketMetricsConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketMetricsConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketMetricsConfigurationResponsePrivate
 * \brief The PutBucketMetricsConfigurationResponsePrivate class provides private implementation for PutBucketMetricsConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketMetricsConfigurationResponsePrivate object with public implementation \a q.
 */
PutBucketMetricsConfigurationResponsePrivate::PutBucketMetricsConfigurationResponsePrivate(
    PutBucketMetricsConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketMetricsConfiguration response element from \a xml.
 */
void PutBucketMetricsConfigurationResponsePrivate::parsePutBucketMetricsConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketMetricsConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
