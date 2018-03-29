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

#include "restoreserverresponse.h"
#include "restoreserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorksCM {

/**
 * @class  RestoreServerResponse
 *
 * @brief  Handles OpsWorksCM RestoreServer responses.
 *
 * @see    OpsWorksCMClient::restoreServer
 */

/**
 * @brief  Constructs a new RestoreServerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreServerResponse::RestoreServerResponse(
        const RestoreServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksCMResponse(new RestoreServerResponsePrivate(this), parent)
{
    setRequest(new RestoreServerRequest(request));
    setReply(reply);
}

const RestoreServerRequest * RestoreServerResponse::request() const
{
    Q_D(const RestoreServerResponse);
    return static_cast<const RestoreServerRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorksCM RestoreServer response.
 *
 * @param  response  Response to parse.
 */
void RestoreServerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RestoreServerResponsePrivate
 *
 * @brief  Private implementation for RestoreServerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreServerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RestoreServerResponse instance.
 */
RestoreServerResponsePrivate::RestoreServerResponsePrivate(
    RestoreServerResponse * const q) : OpsWorksCMResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorksCM RestoreServerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RestoreServerResponsePrivate::RestoreServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreServerResponse"));
    /// @todo
}

} // namespace OpsWorksCM
} // namespace QtAws
