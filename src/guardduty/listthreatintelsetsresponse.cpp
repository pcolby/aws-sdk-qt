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

#include "listthreatintelsetsresponse.h"
#include "listthreatintelsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/**
 * @class  ListThreatIntelSetsResponse
 *
 * @brief  Handles GuardDuty ListThreatIntelSets responses.
 *
 * @see    GuardDutyClient::listThreatIntelSets
 */

/**
 * @brief  Constructs a new ListThreatIntelSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListThreatIntelSetsResponse::ListThreatIntelSetsResponse(
        const ListThreatIntelSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListThreatIntelSetsResponse(new ListThreatIntelSetsResponsePrivate(this), parent)
{
    setRequest(new ListThreatIntelSetsRequest(request));
    setReply(reply);
}

const ListThreatIntelSetsRequest * ListThreatIntelSetsResponse::request() const
{
    Q_D(const ListThreatIntelSetsResponse);
    return static_cast<const ListThreatIntelSetsRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty ListThreatIntelSets response.
 *
 * @param  response  Response to parse.
 */
void ListThreatIntelSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListThreatIntelSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListThreatIntelSetsResponsePrivate
 *
 * @brief  Private implementation for ListThreatIntelSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListThreatIntelSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListThreatIntelSetsResponse instance.
 */
ListThreatIntelSetsResponsePrivate::ListThreatIntelSetsResponsePrivate(
    ListThreatIntelSetsResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty ListThreatIntelSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListThreatIntelSetsResponsePrivate::parseListThreatIntelSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThreatIntelSetsResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
