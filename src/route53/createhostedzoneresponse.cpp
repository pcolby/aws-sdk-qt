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

#include "createhostedzoneresponse.h"
#include "createhostedzoneresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  CreateHostedZoneResponse
 *
 * @brief  Handles Route53 CreateHostedZone responses.
 *
 * @see    Route53Client::createHostedZone
 */

/**
 * @brief  Constructs a new CreateHostedZoneResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateHostedZoneResponse::CreateHostedZoneResponse(
        const CreateHostedZoneRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateHostedZoneResponse(new CreateHostedZoneResponsePrivate(this), parent)
{
    setRequest(new CreateHostedZoneRequest(request));
    setReply(reply);
}

const CreateHostedZoneRequest * CreateHostedZoneResponse::request() const
{
    Q_D(const CreateHostedZoneResponse);
    return static_cast<const CreateHostedZoneRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 CreateHostedZone response.
 *
 * @param  response  Response to parse.
 */
void CreateHostedZoneResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateHostedZoneResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateHostedZoneResponsePrivate
 *
 * @brief  Private implementation for CreateHostedZoneResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateHostedZoneResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateHostedZoneResponse instance.
 */
CreateHostedZoneResponsePrivate::CreateHostedZoneResponsePrivate(
    CreateHostedZoneResponse * const q) : Route53ResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53 CreateHostedZoneResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateHostedZoneResponsePrivate::parseCreateHostedZoneResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHostedZoneResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
