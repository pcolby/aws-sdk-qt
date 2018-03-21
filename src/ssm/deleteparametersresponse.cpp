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

#include "deleteparametersresponse.h"
#include "deleteparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  DeleteParametersResponse
 *
 * @brief  Handles SSM DeleteParameters responses.
 *
 * @see    SSMClient::deleteParameters
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteParametersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DeleteParametersResponsePrivate(this), parent)
{
    setRequest(new DeleteParametersRequest(request));
    setReply(reply);
}

const DeleteParametersRequest * DeleteParametersResponse::request() const
{
    Q_D(const DeleteParametersResponse);
    return static_cast<const DeleteParametersRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DeleteParameters response.
 *
 * @param  response  Response to parse.
 */
void DeleteParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteParametersResponsePrivate
 *
 * @brief  Private implementation for DeleteParametersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteParametersResponse instance.
 */
DeleteParametersResponsePrivate::DeleteParametersResponsePrivate(
    DeleteParametersQueueResponse * const q) : DeleteParametersPrivate(q)
{

}

/**
 * @brief  Parse an SSM DeleteParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteParametersResponsePrivate::DeleteParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteParametersResponse"));
    /// @todo
}
