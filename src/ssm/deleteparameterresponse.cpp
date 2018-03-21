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

#include "deleteparameterresponse.h"
#include "deleteparameterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  DeleteParameterResponse
 *
 * @brief  Handles SSM DeleteParameter responses.
 *
 * @see    SSMClient::deleteParameter
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteParameterResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DeleteParameterResponsePrivate(this), parent)
{
    setRequest(new DeleteParameterRequest(request));
    setReply(reply);
}

const DeleteParameterRequest * DeleteParameterResponse::request() const
{
    Q_D(const DeleteParameterResponse);
    return static_cast<const DeleteParameterRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DeleteParameter response.
 *
 * @param  response  Response to parse.
 */
void DeleteParameterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteParameterResponsePrivate
 *
 * @brief  Private implementation for DeleteParameterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteParameterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteParameterResponse instance.
 */
DeleteParameterResponsePrivate::DeleteParameterResponsePrivate(
    DeleteParameterQueueResponse * const q) : DeleteParameterPrivate(q)
{

}

/**
 * @brief  Parse an SSM DeleteParameterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteParameterResponsePrivate::DeleteParameterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteParameterResponse"));
    /// @todo
}
