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

#include "putbucketloggingresponse.h"
#include "putbucketloggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketLoggingResponse
 * \brief The PutBucketLoggingResponse class provides an interace for S3 PutBucketLogging responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketLogging
 */

/*!
 * Constructs a PutBucketLoggingResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketLoggingResponse::PutBucketLoggingResponse(
        const PutBucketLoggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketLoggingResponsePrivate(this), parent)
{
    setRequest(new PutBucketLoggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketLoggingRequest * PutBucketLoggingResponse::request() const
{
    Q_D(const PutBucketLoggingResponse);
    return static_cast<const PutBucketLoggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketLogging \a response.
 */
void PutBucketLoggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketLoggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketLoggingResponsePrivate
 * \brief The PutBucketLoggingResponsePrivate class provides private implementation for PutBucketLoggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketLoggingResponsePrivate object with public implementation \a q.
 */
PutBucketLoggingResponsePrivate::PutBucketLoggingResponsePrivate(
    PutBucketLoggingResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketLogging response element from \a xml.
 */
void PutBucketLoggingResponsePrivate::parsePutBucketLoggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketLoggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
