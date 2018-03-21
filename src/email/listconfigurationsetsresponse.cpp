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

#include "listconfigurationsetsresponse.h"
#include "listconfigurationsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  ListConfigurationSetsResponse
 *
 * @brief  Handles SES ListConfigurationSets responses.
 *
 * @see    SESClient::listConfigurationSets
 */

/**
 * @brief  Constructs a new ListConfigurationSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListConfigurationSetsResponse::ListConfigurationSetsResponse(
        const ListConfigurationSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new ListConfigurationSetsResponsePrivate(this), parent)
{
    setRequest(new ListConfigurationSetsRequest(request));
    setReply(reply);
}

const ListConfigurationSetsRequest * ListConfigurationSetsResponse::request() const
{
    Q_D(const ListConfigurationSetsResponse);
    return static_cast<const ListConfigurationSetsRequest *>(d->request);
}

/**
 * @brief  Parse a SES ListConfigurationSets response.
 *
 * @param  response  Response to parse.
 */
void ListConfigurationSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListConfigurationSetsResponsePrivate
 *
 * @brief  Private implementation for ListConfigurationSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListConfigurationSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListConfigurationSetsResponse instance.
 */
ListConfigurationSetsResponsePrivate::ListConfigurationSetsResponsePrivate(
    ListConfigurationSetsQueueResponse * const q) : ListConfigurationSetsPrivate(q)
{

}

/**
 * @brief  Parse an SES ListConfigurationSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListConfigurationSetsResponsePrivate::ListConfigurationSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConfigurationSetsResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
