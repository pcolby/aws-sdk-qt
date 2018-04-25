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

#include "putbucketencryptionresponse.h"
#include "putbucketencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketEncryptionResponse
 * \brief The PutBucketEncryptionResponse class provides an interace for S3 PutBucketEncryption responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketEncryption
 */

/*!
 * Constructs a PutBucketEncryptionResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketEncryptionResponse::PutBucketEncryptionResponse(
        const PutBucketEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketEncryptionResponsePrivate(this), parent)
{
    setRequest(new PutBucketEncryptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketEncryptionRequest * PutBucketEncryptionResponse::request() const
{
    Q_D(const PutBucketEncryptionResponse);
    return static_cast<const PutBucketEncryptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 PutBucketEncryption \a response.
 */
void PutBucketEncryptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutBucketEncryptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::PutBucketEncryptionResponsePrivate
 * \brief The PutBucketEncryptionResponsePrivate class provides private implementation for PutBucketEncryptionResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketEncryptionResponsePrivate object with public implementation \a q.
 */
PutBucketEncryptionResponsePrivate::PutBucketEncryptionResponsePrivate(
    PutBucketEncryptionResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 PutBucketEncryption response element from \a xml.
 */
void PutBucketEncryptionResponsePrivate::parsePutBucketEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketEncryptionResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
