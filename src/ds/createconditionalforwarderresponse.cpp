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

#include "createconditionalforwarderresponse.h"
#include "createconditionalforwarderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  CreateConditionalForwarderResponse
 *
 * @brief  Handles DirectoryService CreateConditionalForwarder responses.
 *
 * @see    DirectoryServiceClient::createConditionalForwarder
 */

/**
 * @brief  Constructs a new CreateConditionalForwarderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateConditionalForwarderResponse::CreateConditionalForwarderResponse(
        const CreateConditionalForwarderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new CreateConditionalForwarderResponsePrivate(this), parent)
{
    setRequest(new CreateConditionalForwarderRequest(request));
    setReply(reply);
}

const CreateConditionalForwarderRequest * CreateConditionalForwarderResponse::request() const
{
    Q_D(const CreateConditionalForwarderResponse);
    return static_cast<const CreateConditionalForwarderRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService CreateConditionalForwarder response.
 *
 * @param  response  Response to parse.
 */
void CreateConditionalForwarderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateConditionalForwarderResponsePrivate
 *
 * @brief  Private implementation for CreateConditionalForwarderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateConditionalForwarderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateConditionalForwarderResponse instance.
 */
CreateConditionalForwarderResponsePrivate::CreateConditionalForwarderResponsePrivate(
    CreateConditionalForwarderQueueResponse * const q) : CreateConditionalForwarderPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService CreateConditionalForwarderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateConditionalForwarderResponsePrivate::CreateConditionalForwarderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConditionalForwarderResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace AWS
