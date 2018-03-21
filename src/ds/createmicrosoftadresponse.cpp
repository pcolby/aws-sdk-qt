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

#include "createmicrosoftadresponse.h"
#include "createmicrosoftadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  CreateMicrosoftADResponse
 *
 * @brief  Handles DirectoryService CreateMicrosoftAD responses.
 *
 * @see    DirectoryServiceClient::createMicrosoftAD
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateMicrosoftADResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new CreateMicrosoftADResponsePrivate(this), parent)
{
    setRequest(new CreateMicrosoftADRequest(request));
    setReply(reply);
}

const CreateMicrosoftADRequest * CreateMicrosoftADResponse::request() const
{
    Q_D(const CreateMicrosoftADResponse);
    return static_cast<const CreateMicrosoftADRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService CreateMicrosoftAD response.
 *
 * @param  response  Response to parse.
 */
void CreateMicrosoftADResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateMicrosoftADResponsePrivate
 *
 * @brief  Private implementation for CreateMicrosoftADResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateMicrosoftADResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateMicrosoftADResponse instance.
 */
CreateMicrosoftADResponsePrivate::CreateMicrosoftADResponsePrivate(
    CreateMicrosoftADQueueResponse * const q) : CreateMicrosoftADPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService CreateMicrosoftADResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateMicrosoftADResponsePrivate::CreateMicrosoftADResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMicrosoftADResponse"));
    /// @todo
}
