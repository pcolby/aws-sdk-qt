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

#include "createserverresponse.h"
#include "createserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorksCM {

/**
 * @class  CreateServerResponse
 *
 * @brief  Handles OpsWorksCM CreateServer responses.
 *
 * @see    OpsWorksCMClient::createServer
 */

/**
 * @brief  Constructs a new CreateServerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateServerResponse::CreateServerResponse(
        const CreateServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksCMResponse(new CreateServerResponsePrivate(this), parent)
{
    setRequest(new CreateServerRequest(request));
    setReply(reply);
}

const CreateServerRequest * CreateServerResponse::request() const
{
    Q_D(const CreateServerResponse);
    return static_cast<const CreateServerRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorksCM CreateServer response.
 *
 * @param  response  Response to parse.
 */
void CreateServerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateServerResponsePrivate
 *
 * @brief  Private implementation for CreateServerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateServerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateServerResponse instance.
 */
CreateServerResponsePrivate::CreateServerResponsePrivate(
    CreateServerQueueResponse * const q) : CreateServerPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorksCM CreateServerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateServerResponsePrivate::CreateServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateServerResponse"));
    /// @todo
}

} // namespace OpsWorksCM
} // namespace QtAws
