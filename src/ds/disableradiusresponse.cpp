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

#include "disableradiusresponse.h"
#include "disableradiusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/**
 * @class  DisableRadiusResponse
 *
 * @brief  Handles DirectoryService DisableRadius responses.
 *
 * @see    DirectoryServiceClient::disableRadius
 */

/**
 * @brief  Constructs a new DisableRadiusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableRadiusResponse::DisableRadiusResponse(
        const DisableRadiusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DisableRadiusResponsePrivate(this), parent)
{
    setRequest(new DisableRadiusRequest(request));
    setReply(reply);
}

const DisableRadiusRequest * DisableRadiusResponse::request() const
{
    Q_D(const DisableRadiusResponse);
    return static_cast<const DisableRadiusRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService DisableRadius response.
 *
 * @param  response  Response to parse.
 */
void DisableRadiusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableRadiusResponsePrivate
 *
 * @brief  Private implementation for DisableRadiusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableRadiusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableRadiusResponse instance.
 */
DisableRadiusResponsePrivate::DisableRadiusResponsePrivate(
    DisableRadiusResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService DisableRadiusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableRadiusResponsePrivate::DisableRadiusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableRadiusResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace QtAws
