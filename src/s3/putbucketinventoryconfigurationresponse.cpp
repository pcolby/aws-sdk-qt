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

#include "putbucketinventoryconfigurationresponse.h"
#include "putbucketinventoryconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketInventoryConfigurationResponse
 * \brief The PutBucketInventoryConfigurationResponse class provides an interace for S3 PutBucketInventoryConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketInventoryConfiguration
 */

/*!
 * Constructs a PutBucketInventoryConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketInventoryConfigurationResponse::PutBucketInventoryConfigurationResponse(
        const PutBucketInventoryConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketInventoryConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketInventoryConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketInventoryConfigurationRequest * PutBucketInventoryConfigurationResponse::request() const
{
    Q_D(const PutBucketInventoryConfigurationResponse);
    return static_cast<const PutBucketInventoryConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketInventoryConfiguration \a response.
 */
void PutBucketInventoryConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketInventoryConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketInventoryConfigurationResponsePrivate
 * \brief The PutBucketInventoryConfigurationResponsePrivate class provides private implementation for PutBucketInventoryConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketInventoryConfigurationResponsePrivate object with public implementation \a q.
 */
PutBucketInventoryConfigurationResponsePrivate::PutBucketInventoryConfigurationResponsePrivate(
    PutBucketInventoryConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketInventoryConfiguration response element from \a xml.
 */
void PutBucketInventoryConfigurationResponsePrivate::parsePutBucketInventoryConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketInventoryConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
