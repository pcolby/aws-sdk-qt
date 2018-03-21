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

#include "createplatformapplicationresponse.h"
#include "createplatformapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SNS {

/**
 * @class  CreatePlatformApplicationResponse
 *
 * @brief  Handles SNS CreatePlatformApplication responses.
 *
 * @see    SNSClient::createPlatformApplication
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePlatformApplicationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new CreatePlatformApplicationResponsePrivate(this), parent)
{
    setRequest(new CreatePlatformApplicationRequest(request));
    setReply(reply);
}

const CreatePlatformApplicationRequest * CreatePlatformApplicationResponse::request() const
{
    Q_D(const CreatePlatformApplicationResponse);
    return static_cast<const CreatePlatformApplicationRequest *>(d->request);
}

/**
 * @brief  Parse a SNS CreatePlatformApplication response.
 *
 * @param  response  Response to parse.
 */
void CreatePlatformApplicationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePlatformApplicationResponsePrivate
 *
 * @brief  Private implementation for CreatePlatformApplicationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlatformApplicationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePlatformApplicationResponse instance.
 */
CreatePlatformApplicationResponsePrivate::CreatePlatformApplicationResponsePrivate(
    CreatePlatformApplicationQueueResponse * const q) : CreatePlatformApplicationPrivate(q)
{

}

/**
 * @brief  Parse an SNS CreatePlatformApplicationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePlatformApplicationResponsePrivate::CreatePlatformApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePlatformApplicationResponse"));
    /// @todo
}
