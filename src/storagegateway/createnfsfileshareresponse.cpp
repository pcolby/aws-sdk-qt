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

#include "createnfsfileshareresponse.h"
#include "createnfsfileshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  CreateNFSFileShareResponse
 *
 * @brief  Handles StorageGateway CreateNFSFileShare responses.
 *
 * @see    StorageGatewayClient::createNFSFileShare
 */

/**
 * @brief  Constructs a new CreateNFSFileShareResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateNFSFileShareResponse::CreateNFSFileShareResponse(
        const CreateNFSFileShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateNFSFileShareResponse(new CreateNFSFileShareResponsePrivate(this), parent)
{
    setRequest(new CreateNFSFileShareRequest(request));
    setReply(reply);
}

const CreateNFSFileShareRequest * CreateNFSFileShareResponse::request() const
{
    Q_D(const CreateNFSFileShareResponse);
    return static_cast<const CreateNFSFileShareRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway CreateNFSFileShare response.
 *
 * @param  response  Response to parse.
 */
void CreateNFSFileShareResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateNFSFileShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateNFSFileShareResponsePrivate
 *
 * @brief  Private implementation for CreateNFSFileShareResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNFSFileShareResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateNFSFileShareResponse instance.
 */
CreateNFSFileShareResponsePrivate::CreateNFSFileShareResponsePrivate(
    CreateNFSFileShareResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway CreateNFSFileShareResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateNFSFileShareResponsePrivate::parseCreateNFSFileShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNFSFileShareResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
