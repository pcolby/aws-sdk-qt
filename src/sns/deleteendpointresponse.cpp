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

#include "deleteendpointresponse.h"
#include "deleteendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/**
 * @class  DeleteEndpointResponse
 *
 * @brief  Handles SNS DeleteEndpoint responses.
 *
 * @see    SNSClient::deleteEndpoint
 */

/**
 * @brief  Constructs a new DeleteEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEndpointResponse::DeleteEndpointResponse(
        const DeleteEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteEndpointResponse(new DeleteEndpointResponsePrivate(this), parent)
{
    setRequest(new DeleteEndpointRequest(request));
    setReply(reply);
}

const DeleteEndpointRequest * DeleteEndpointResponse::request() const
{
    Q_D(const DeleteEndpointResponse);
    return static_cast<const DeleteEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a SNS DeleteEndpoint response.
 *
 * @param  response  Response to parse.
 */
void DeleteEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteEndpointResponsePrivate
 *
 * @brief  Private implementation for DeleteEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteEndpointResponse instance.
 */
DeleteEndpointResponsePrivate::DeleteEndpointResponsePrivate(
    DeleteEndpointResponse * const q) : SNSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SNS DeleteEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteEndpointResponsePrivate::parseDeleteEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEndpointResponse"));
    /// @todo
}

} // namespace SNS
} // namespace QtAws
