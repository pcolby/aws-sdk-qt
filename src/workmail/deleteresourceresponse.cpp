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

#include "deleteresourceresponse.h"
#include "deleteresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkMail {

/**
 * @class  DeleteResourceResponse
 *
 * @brief  Handles WorkMail DeleteResource responses.
 *
 * @see    WorkMailClient::deleteResource
 */

/**
 * @brief  Constructs a new DeleteResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteResourceResponse::DeleteResourceResponse(
        const DeleteResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailResponse(new DeleteResourceResponsePrivate(this), parent)
{
    setRequest(new DeleteResourceRequest(request));
    setReply(reply);
}

const DeleteResourceRequest * DeleteResourceResponse::request() const
{
    Q_D(const DeleteResourceResponse);
    return static_cast<const DeleteResourceRequest *>(d->request);
}

/**
 * @brief  Parse a WorkMail DeleteResource response.
 *
 * @param  response  Response to parse.
 */
void DeleteResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteResourceResponsePrivate
 *
 * @brief  Private implementation for DeleteResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteResourceResponse instance.
 */
DeleteResourceResponsePrivate::DeleteResourceResponsePrivate(
    DeleteResourceQueueResponse * const q) : DeleteResourcePrivate(q)
{

}

/**
 * @brief  Parse an WorkMail DeleteResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteResourceResponsePrivate::DeleteResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourceResponse"));
    /// @todo
}

} // namespace WorkMail
} // namespace AWS
