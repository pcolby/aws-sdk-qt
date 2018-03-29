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

#include "deleteauthorizerresponse.h"
#include "deleteauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  DeleteAuthorizerResponse
 *
 * @brief  Handles IoT DeleteAuthorizer responses.
 *
 * @see    IoTClient::deleteAuthorizer
 */

/**
 * @brief  Constructs a new DeleteAuthorizerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAuthorizerResponse::DeleteAuthorizerResponse(
        const DeleteAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DeleteAuthorizerResponsePrivate(this), parent)
{
    setRequest(new DeleteAuthorizerRequest(request));
    setReply(reply);
}

const DeleteAuthorizerRequest * DeleteAuthorizerResponse::request() const
{
    Q_D(const DeleteAuthorizerResponse);
    return static_cast<const DeleteAuthorizerRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DeleteAuthorizer response.
 *
 * @param  response  Response to parse.
 */
void DeleteAuthorizerResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteAuthorizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteAuthorizerResponsePrivate
 *
 * @brief  Private implementation for DeleteAuthorizerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAuthorizerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAuthorizerResponse instance.
 */
DeleteAuthorizerResponsePrivate::DeleteAuthorizerResponsePrivate(
    DeleteAuthorizerResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT DeleteAuthorizerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAuthorizerResponsePrivate::parseDeleteAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAuthorizerResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
