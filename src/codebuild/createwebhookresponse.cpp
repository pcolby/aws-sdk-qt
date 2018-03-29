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

#include "createwebhookresponse.h"
#include "createwebhookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
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
    Q_D(CreateWebhookResponse);
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
    CreateWebhookResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeBuild CreateWebhookResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateWebhookResponsePrivate::parseCreateWebhookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWebhookResponse"));
    /// @todo
}

} // namespace CodeBuild
} // namespace QtAws
