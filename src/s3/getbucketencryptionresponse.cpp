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

#include "getbucketencryptionresponse.h"
#include "getbucketencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketEncryptionResponse
 * \brief The GetBucketEncryptionResponse class provides an interace for S3 GetBucketEncryption responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketEncryption
 */

/*!
 * Constructs a GetBucketEncryptionResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketEncryptionResponse::GetBucketEncryptionResponse(
        const GetBucketEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketEncryptionResponsePrivate(this), parent)
{
    setRequest(new GetBucketEncryptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketEncryptionRequest * GetBucketEncryptionResponse::request() const
{
    Q_D(const GetBucketEncryptionResponse);
    return static_cast<const GetBucketEncryptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 GetBucketEncryption \a response.
 */
void GetBucketEncryptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBucketEncryptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::GetBucketEncryptionResponsePrivate
 * \brief The GetBucketEncryptionResponsePrivate class provides private implementation for GetBucketEncryptionResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketEncryptionResponsePrivate object with public implementation \a q.
 */
GetBucketEncryptionResponsePrivate::GetBucketEncryptionResponsePrivate(
    GetBucketEncryptionResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 GetBucketEncryption response element from \a xml.
 */
void GetBucketEncryptionResponsePrivate::parseGetBucketEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketEncryptionResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
