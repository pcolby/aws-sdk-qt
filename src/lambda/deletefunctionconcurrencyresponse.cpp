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

#include "deletefunctionconcurrencyresponse.h"
#include "deletefunctionconcurrencyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lambda {

/**
 * @class  DeleteFunctionConcurrencyResponse
 *
 * @brief  Handles Lambda DeleteFunctionConcurrency responses.
 *
 * @see    LambdaClient::deleteFunctionConcurrency
 */

/**
 * @brief  Constructs a new DeleteFunctionConcurrencyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteFunctionConcurrencyResponse::DeleteFunctionConcurrencyResponse(
        const DeleteFunctionConcurrencyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new DeleteFunctionConcurrencyResponsePrivate(this), parent)
{
    setRequest(new DeleteFunctionConcurrencyRequest(request));
    setReply(reply);
}

const DeleteFunctionConcurrencyRequest * DeleteFunctionConcurrencyResponse::request() const
{
    Q_D(const DeleteFunctionConcurrencyResponse);
    return static_cast<const DeleteFunctionConcurrencyRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda DeleteFunctionConcurrency response.
 *
 * @param  response  Response to parse.
 */
void DeleteFunctionConcurrencyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteFunctionConcurrencyResponsePrivate
 *
 * @brief  Private implementation for DeleteFunctionConcurrencyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFunctionConcurrencyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteFunctionConcurrencyResponse instance.
 */
DeleteFunctionConcurrencyResponsePrivate::DeleteFunctionConcurrencyResponsePrivate(
    DeleteFunctionConcurrencyQueueResponse * const q) : DeleteFunctionConcurrencyPrivate(q)
{

}

/**
 * @brief  Parse an Lambda DeleteFunctionConcurrencyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteFunctionConcurrencyResponsePrivate::DeleteFunctionConcurrencyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFunctionConcurrencyResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace AWS
