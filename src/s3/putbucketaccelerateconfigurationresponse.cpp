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

#include "putbucketaccelerateconfigurationresponse.h"
#include "putbucketaccelerateconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketAccelerateConfigurationResponse
 * \brief The PutBucketAccelerateConfigurationResponse class provides an interace for S3 PutBucketAccelerateConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketAccelerateConfiguration
 */

/*!
 * Constructs a PutBucketAccelerateConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketAccelerateConfigurationResponse::PutBucketAccelerateConfigurationResponse(
        const PutBucketAccelerateConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketAccelerateConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketAccelerateConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketAccelerateConfigurationRequest * PutBucketAccelerateConfigurationResponse::request() const
{
    Q_D(const PutBucketAccelerateConfigurationResponse);
    return static_cast<const PutBucketAccelerateConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketAccelerateConfiguration \a response.
 */
void PutBucketAccelerateConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketAccelerateConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketAccelerateConfigurationResponsePrivate
 * \brief The PutBucketAccelerateConfigurationResponsePrivate class provides private implementation for PutBucketAccelerateConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketAccelerateConfigurationResponsePrivate object with public implementation \a q.
 */
PutBucketAccelerateConfigurationResponsePrivate::PutBucketAccelerateConfigurationResponsePrivate(
    PutBucketAccelerateConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketAccelerateConfiguration response element from \a xml.
 */
void PutBucketAccelerateConfigurationResponsePrivate::parsePutBucketAccelerateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketAccelerateConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
