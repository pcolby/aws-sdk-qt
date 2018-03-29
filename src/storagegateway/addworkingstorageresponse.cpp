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

#include "addworkingstorageresponse.h"
#include "addworkingstorageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  AddWorkingStorageResponse
 *
 * @brief  Handles StorageGateway AddWorkingStorage responses.
 *
 * @see    StorageGatewayClient::addWorkingStorage
 */

/**
 * @brief  Constructs a new AddWorkingStorageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddWorkingStorageResponse::AddWorkingStorageResponse(
        const AddWorkingStorageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new AddWorkingStorageResponsePrivate(this), parent)
{
    setRequest(new AddWorkingStorageRequest(request));
    setReply(reply);
}

const AddWorkingStorageRequest * AddWorkingStorageResponse::request() const
{
    Q_D(const AddWorkingStorageResponse);
    return static_cast<const AddWorkingStorageRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway AddWorkingStorage response.
 *
 * @param  response  Response to parse.
 */
void AddWorkingStorageResponse::parseSuccess(QIODevice &response)
{
    Q_D(AddWorkingStorageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddWorkingStorageResponsePrivate
 *
 * @brief  Private implementation for AddWorkingStorageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddWorkingStorageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddWorkingStorageResponse instance.
 */
AddWorkingStorageResponsePrivate::AddWorkingStorageResponsePrivate(
    AddWorkingStorageResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway AddWorkingStorageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddWorkingStorageResponsePrivate::AddWorkingStorageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddWorkingStorageResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
