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

#include "putbucketversioningresponse.h"
#include "putbucketversioningresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketVersioningResponse
 * \brief The PutBucketVersioningResponse class provides an interace for S3 PutBucketVersioning responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketVersioning
 */

/*!
 * Constructs a PutBucketVersioningResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketVersioningResponse::PutBucketVersioningResponse(
        const PutBucketVersioningRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketVersioningResponsePrivate(this), parent)
{
    setRequest(new PutBucketVersioningRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketVersioningRequest * PutBucketVersioningResponse::request() const
{
    Q_D(const PutBucketVersioningResponse);
    return static_cast<const PutBucketVersioningRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketVersioning \a response.
 */
void PutBucketVersioningResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketVersioningResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketVersioningResponsePrivate
 * \brief The PutBucketVersioningResponsePrivate class provides private implementation for PutBucketVersioningResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketVersioningResponsePrivate object with public implementation \a q.
 */
PutBucketVersioningResponsePrivate::PutBucketVersioningResponsePrivate(
    PutBucketVersioningResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketVersioning response element from \a xml.
 */
void PutBucketVersioningResponsePrivate::parsePutBucketVersioningResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketVersioningResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
