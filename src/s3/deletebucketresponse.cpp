/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletebucketresponse.h"
#include "deletebucketresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketResponse
 *
 * \brief The DeleteBucketResponse class provides an interace for S3 DeleteBucket responses.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::deleteBucket
 */

/*!
 * @brief  Constructs a new DeleteBucketResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBucketResponse::DeleteBucketResponse(
        const DeleteBucketRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketRequest(request));
    setReply(reply);
}

const DeleteBucketRequest * DeleteBucketResponse::request() const
{
    Q_D(const DeleteBucketResponse);
    return static_cast<const DeleteBucketRequest *>(d->request);
}

/*!
 * @brief  Parse a S3 DeleteBucket response.
 *
 * @param  response  Response to parse.
 */
void DeleteBucketResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteBucketResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteBucketResponsePrivate
 *
 * \brief Private implementation for DeleteBucketResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteBucketResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBucketResponse instance.
 */
DeleteBucketResponsePrivate::DeleteBucketResponsePrivate(
    DeleteBucketResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an S3 DeleteBucketResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBucketResponsePrivate::parseDeleteBucketResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
