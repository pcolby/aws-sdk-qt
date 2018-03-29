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

#include "deletechapcredentialsresponse.h"
#include "deletechapcredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DeleteChapCredentialsResponse
 *
 * @brief  Handles StorageGateway DeleteChapCredentials responses.
 *
 * @see    StorageGatewayClient::deleteChapCredentials
 */

/**
 * @brief  Constructs a new DeleteChapCredentialsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteChapCredentialsResponse::DeleteChapCredentialsResponse(
        const DeleteChapCredentialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteChapCredentialsResponse(new DeleteChapCredentialsResponsePrivate(this), parent)
{
    setRequest(new DeleteChapCredentialsRequest(request));
    setReply(reply);
}

const DeleteChapCredentialsRequest * DeleteChapCredentialsResponse::request() const
{
    Q_D(const DeleteChapCredentialsResponse);
    return static_cast<const DeleteChapCredentialsRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DeleteChapCredentials response.
 *
 * @param  response  Response to parse.
 */
void DeleteChapCredentialsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteChapCredentialsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteChapCredentialsResponsePrivate
 *
 * @brief  Private implementation for DeleteChapCredentialsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteChapCredentialsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteChapCredentialsResponse instance.
 */
DeleteChapCredentialsResponsePrivate::DeleteChapCredentialsResponsePrivate(
    DeleteChapCredentialsResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DeleteChapCredentialsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteChapCredentialsResponsePrivate::parseDeleteChapCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteChapCredentialsResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
