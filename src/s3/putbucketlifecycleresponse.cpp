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

#include "putbucketlifecycleresponse.h"
#include "putbucketlifecycleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketLifecycleResponse
 * \brief The PutBucketLifecycleResponse class provides an interace for S3 PutBucketLifecycle responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketLifecycle
 */

/*!
 * Constructs a PutBucketLifecycleResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketLifecycleResponse::PutBucketLifecycleResponse(
        const PutBucketLifecycleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketLifecycleResponsePrivate(this), parent)
{
    setRequest(new PutBucketLifecycleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketLifecycleRequest * PutBucketLifecycleResponse::request() const
{
    Q_D(const PutBucketLifecycleResponse);
    return static_cast<const PutBucketLifecycleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketLifecycle \a response.
 */
void PutBucketLifecycleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketLifecycleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketLifecycleResponsePrivate
 * \brief The PutBucketLifecycleResponsePrivate class provides private implementation for PutBucketLifecycleResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketLifecycleResponsePrivate object with public implementation \a q.
 */
PutBucketLifecycleResponsePrivate::PutBucketLifecycleResponsePrivate(
    PutBucketLifecycleResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketLifecycle response element from \a xml.
 */
void PutBucketLifecycleResponsePrivate::parsePutBucketLifecycleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketLifecycleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
