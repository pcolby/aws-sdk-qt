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

#include "createlagresponse.h"
#include "createlagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  CreateLagResponse
 *
 * @brief  Handles DirectConnect CreateLag responses.
 *
 * @see    DirectConnectClient::createLag
 */

/**
 * @brief  Constructs a new CreateLagResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLagResponse::CreateLagResponse(
        const CreateLagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new CreateLagResponsePrivate(this), parent)
{
    setRequest(new CreateLagRequest(request));
    setReply(reply);
}

const CreateLagRequest * CreateLagResponse::request() const
{
    Q_D(const CreateLagResponse);
    return static_cast<const CreateLagRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect CreateLag response.
 *
 * @param  response  Response to parse.
 */
void CreateLagResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateLagResponsePrivate
 *
 * @brief  Private implementation for CreateLagResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLagResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateLagResponse instance.
 */
CreateLagResponsePrivate::CreateLagResponsePrivate(
    CreateLagQueueResponse * const q) : CreateLagPrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect CreateLagResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateLagResponsePrivate::CreateLagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLagResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace AWS
