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

#include "putbucketlifecycleconfigurationresponse.h"
#include "putbucketlifecycleconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketLifecycleConfigurationResponse
 * \brief The PutBucketLifecycleConfigurationResponse class provides an interace for S3 PutBucketLifecycleConfiguration responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketLifecycleConfiguration
 */

/*!
 * Constructs a PutBucketLifecycleConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketLifecycleConfigurationResponse::PutBucketLifecycleConfigurationResponse(
        const PutBucketLifecycleConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketLifecycleConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketLifecycleConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketLifecycleConfigurationRequest * PutBucketLifecycleConfigurationResponse::request() const
{
    Q_D(const PutBucketLifecycleConfigurationResponse);
    return static_cast<const PutBucketLifecycleConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketLifecycleConfiguration \a response.
 */
void PutBucketLifecycleConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutBucketLifecycleConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketLifecycleConfigurationResponsePrivate
 * \brief The PutBucketLifecycleConfigurationResponsePrivate class provides private implementation for PutBucketLifecycleConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketLifecycleConfigurationResponsePrivate object with public implementation \a q.
 */
PutBucketLifecycleConfigurationResponsePrivate::PutBucketLifecycleConfigurationResponsePrivate(
    PutBucketLifecycleConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketLifecycleConfiguration response element from \a xml.
 */
void PutBucketLifecycleConfigurationResponsePrivate::parsePutBucketLifecycleConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketLifecycleConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
