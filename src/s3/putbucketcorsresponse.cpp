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

#include "putbucketcorsresponse.h"
#include "putbucketcorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketCorsResponse
 * \brief The PutBucketCorsResponse class provides an interace for S3 PutBucketCors responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketCors
 */

/*!
 * Constructs a PutBucketCorsResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketCorsResponse::PutBucketCorsResponse(
        const PutBucketCorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketCorsResponsePrivate(this), parent)
{
    setRequest(new PutBucketCorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketCorsRequest * PutBucketCorsResponse::request() const
{
    Q_D(const PutBucketCorsResponse);
    return static_cast<const PutBucketCorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketCors \a response.
 */
void PutBucketCorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketCorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketCorsResponsePrivate
 * \brief The PutBucketCorsResponsePrivate class provides private implementation for PutBucketCorsResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketCorsResponsePrivate object with public implementation \a q.
 */
PutBucketCorsResponsePrivate::PutBucketCorsResponsePrivate(
    PutBucketCorsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketCors response element from \a xml.
 */
void PutBucketCorsResponsePrivate::parsePutBucketCorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketCorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
