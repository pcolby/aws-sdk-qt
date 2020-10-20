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

#include "deletebucketencryptionresponse.h"
#include "deletebucketencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketEncryptionResponse
 * \brief The DeleteBucketEncryptionResponse class provides an interace for S3 DeleteBucketEncryption responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketEncryption
 */

/*!
 * Constructs a DeleteBucketEncryptionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketEncryptionResponse::DeleteBucketEncryptionResponse(
        const DeleteBucketEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketEncryptionResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketEncryptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketEncryptionRequest * DeleteBucketEncryptionResponse::request() const
{
    Q_D(const DeleteBucketEncryptionResponse);
    return static_cast<const DeleteBucketEncryptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 DeleteBucketEncryption \a response.
 */
void DeleteBucketEncryptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketEncryptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::DeleteBucketEncryptionResponsePrivate
 * \brief The DeleteBucketEncryptionResponsePrivate class provides private implementation for DeleteBucketEncryptionResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketEncryptionResponsePrivate object with public implementation \a q.
 */
DeleteBucketEncryptionResponsePrivate::DeleteBucketEncryptionResponsePrivate(
    DeleteBucketEncryptionResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 DeleteBucketEncryption response element from \a xml.
 */
void DeleteBucketEncryptionResponsePrivate::parseDeleteBucketEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketEncryptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
