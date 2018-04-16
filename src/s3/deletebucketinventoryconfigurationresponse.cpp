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

#include "deletebucketinventoryconfigurationresponse.h"
#include "deletebucketinventoryconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketInventoryConfigurationResponse
 *
 * \brief The DeleteBucketInventoryConfigurationResponse class provides an interace for S3 DeleteBucketInventoryConfiguration responses.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::deleteBucketInventoryConfiguration
 */

/*!
 * @brief  Constructs a new DeleteBucketInventoryConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBucketInventoryConfigurationResponse::DeleteBucketInventoryConfigurationResponse(
        const DeleteBucketInventoryConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketInventoryConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketInventoryConfigurationRequest(request));
    setReply(reply);
}

const DeleteBucketInventoryConfigurationRequest * DeleteBucketInventoryConfigurationResponse::request() const
{
    Q_D(const DeleteBucketInventoryConfigurationResponse);
    return static_cast<const DeleteBucketInventoryConfigurationRequest *>(d->request);
}

/*!
 * @brief  Parse a S3 DeleteBucketInventoryConfiguration response.
 *
 * @param  response  Response to parse.
 */
void DeleteBucketInventoryConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteBucketInventoryConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteBucketInventoryConfigurationResponsePrivate
 *
 * \brief Private implementation for DeleteBucketInventoryConfigurationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteBucketInventoryConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBucketInventoryConfigurationResponse instance.
 */
DeleteBucketInventoryConfigurationResponsePrivate::DeleteBucketInventoryConfigurationResponsePrivate(
    DeleteBucketInventoryConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an S3 DeleteBucketInventoryConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBucketInventoryConfigurationResponsePrivate::parseDeleteBucketInventoryConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketInventoryConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
