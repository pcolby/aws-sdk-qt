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

#include "createwebhookresponse.h"
#include "createwebhookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeBuild {

/**
 * @class  CreateWebhookResponse
 *
 * @brief  Handles CodeBuild CreateWebhook responses.
 *
 * @see    CodeBuildClient::createWebhook
 */

/**
 * @brief  Constructs a new CreateWebhookResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateWebhookResponse::CreateWebhookResponse(
        const CreateWebhookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new CreateWebhookResponsePrivate(this), parent)
{
    setRequest(new CreateWebhookRequest(request));
    setReply(reply);
}

const CreateWebhookRequest * CreateWebhookResponse::request() const
{
    Q_D(const CreateWebhookResponse);
    return static_cast<const CreateWebhookRequest *>(d->request);
}

/**
 * @brief  Parse a CodeBuild CreateWebhook response.
 *
 * @param  response  Response to parse.
 */
void CreateWebhookResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateWebhookResponsePrivate
 *
 * @brief  Private implementation for CreateWebhookResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateWebhookResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateWebhookResponse instance.
 */
CreateWebhookResponsePrivate::CreateWebhookResponsePrivate(
    CreateWebhookQueueResponse * const q) : CreateWebhookPrivate(q)
{

}

/**
 * @brief  Parse an CodeBuild CreateWebhookResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateWebhookResponsePrivate::CreateWebhookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWebhookResponse"));
    /// @todo
}

} // namespace CodeBuild
} // namespace AWS
