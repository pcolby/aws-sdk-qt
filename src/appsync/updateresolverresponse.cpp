/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateresolverresponse.h"
#include "updateresolverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppSync {

/**
 * @class  UpdateResolverResponse
 *
 * @brief  Handles AppSync UpdateResolver responses.
 *
 * @see    AppSyncClient::updateResolver
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateResolverResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new UpdateResolverResponsePrivate(this), parent)
{
    setRequest(new UpdateResolverRequest(request));
    setReply(reply);
}

const UpdateResolverRequest * UpdateResolverResponse::request() const
{
    Q_D(const UpdateResolverResponse);
    return static_cast<const UpdateResolverRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync UpdateResolver response.
 *
 * @param  response  Response to parse.
 */
void UpdateResolverResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateResolverResponsePrivate
 *
 * @brief  Private implementation for UpdateResolverResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateResolverResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateResolverResponse instance.
 */
UpdateResolverResponsePrivate::UpdateResolverResponsePrivate(
    UpdateResolverQueueResponse * const q) : UpdateResolverPrivate(q)
{

}

/**
 * @brief  Parse an AppSync UpdateResolverResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateResolverResponsePrivate::UpdateResolverResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResolverResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace AWS
