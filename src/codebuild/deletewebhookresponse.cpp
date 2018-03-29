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

#include "deletewebhookresponse.h"
#include "deletewebhookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/**
 * @class  DeleteWebhookResponse
 *
 * @brief  Handles CodeBuild DeleteWebhook responses.
 *
 * @see    CodeBuildClient::deleteWebhook
 */

/**
 * @brief  Constructs a new DeleteWebhookResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteWebhookResponse::DeleteWebhookResponse(
        const DeleteWebhookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new DeleteWebhookResponsePrivate(this), parent)
{
    setRequest(new DeleteWebhookRequest(request));
    setReply(reply);
}

const DeleteWebhookRequest * DeleteWebhookResponse::request() const
{
    Q_D(const DeleteWebhookResponse);
    return static_cast<const DeleteWebhookRequest *>(d->request);
}

/**
 * @brief  Parse a CodeBuild DeleteWebhook response.
 *
 * @param  response  Response to parse.
 */
void DeleteWebhookResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteWebhookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteWebhookResponsePrivate
 *
 * @brief  Private implementation for DeleteWebhookResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteWebhookResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteWebhookResponse instance.
 */
DeleteWebhookResponsePrivate::DeleteWebhookResponsePrivate(
    DeleteWebhookResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeBuild DeleteWebhookResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteWebhookResponsePrivate::parseDeleteWebhookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWebhookResponse"));
    /// @todo
}

} // namespace CodeBuild
} // namespace QtAws
