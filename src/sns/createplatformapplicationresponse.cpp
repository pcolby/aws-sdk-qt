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

#include "createplatformapplicationresponse.h"
#include "createplatformapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/**
 * @class  CreatePlatformApplicationResponse
 *
 * @brief  Handles SNS CreatePlatformApplication responses.
 *
 * @see    SNSClient::createPlatformApplication
 */

/**
 * @brief  Constructs a new CreatePlatformApplicationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePlatformApplicationResponse::CreatePlatformApplicationResponse(
        const CreatePlatformApplicationRequest &request,
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
    Q_D(CreatePlatformApplicationResponse);
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
    CreatePlatformApplicationResponse * const q) : SNSResponsePrivate(q)
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

} // namespace SNS
} // namespace QtAws
