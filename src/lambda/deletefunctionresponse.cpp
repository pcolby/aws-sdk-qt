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

#include "deletefunctionresponse.h"
#include "deletefunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/**
 * @class  DeleteFunctionResponse
 *
 * @brief  Handles Lambda DeleteFunction responses.
 *
 * @see    LambdaClient::deleteFunction
 */

/**
 * @brief  Constructs a new DeleteFunctionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteFunctionResponse::DeleteFunctionResponse(
        const DeleteFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new DeleteFunctionResponsePrivate(this), parent)
{
    setRequest(new DeleteFunctionRequest(request));
    setReply(reply);
}

const DeleteFunctionRequest * DeleteFunctionResponse::request() const
{
    Q_D(const DeleteFunctionResponse);
    return static_cast<const DeleteFunctionRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda DeleteFunction response.
 *
 * @param  response  Response to parse.
 */
void DeleteFunctionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteFunctionResponsePrivate
 *
 * @brief  Private implementation for DeleteFunctionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFunctionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteFunctionResponse instance.
 */
DeleteFunctionResponsePrivate::DeleteFunctionResponsePrivate(
    DeleteFunctionResponse * const q) : LambdaResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lambda DeleteFunctionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteFunctionResponsePrivate::DeleteFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFunctionResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
