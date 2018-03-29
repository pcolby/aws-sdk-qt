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

#include "listqueryloggingconfigsresponse.h"
#include "listqueryloggingconfigsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  ListQueryLoggingConfigsResponse
 *
 * @brief  Handles Route53 ListQueryLoggingConfigs responses.
 *
 * @see    Route53Client::listQueryLoggingConfigs
 */

/**
 * @brief  Constructs a new ListQueryLoggingConfigsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListQueryLoggingConfigsResponse::ListQueryLoggingConfigsResponse(
        const ListQueryLoggingConfigsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListQueryLoggingConfigsResponsePrivate(this), parent)
{
    setRequest(new ListQueryLoggingConfigsRequest(request));
    setReply(reply);
}

const ListQueryLoggingConfigsRequest * ListQueryLoggingConfigsResponse::request() const
{
    Q_D(const ListQueryLoggingConfigsResponse);
    return static_cast<const ListQueryLoggingConfigsRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 ListQueryLoggingConfigs response.
 *
 * @param  response  Response to parse.
 */
void ListQueryLoggingConfigsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListQueryLoggingConfigsResponsePrivate
 *
 * @brief  Private implementation for ListQueryLoggingConfigsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListQueryLoggingConfigsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListQueryLoggingConfigsResponse instance.
 */
ListQueryLoggingConfigsResponsePrivate::ListQueryLoggingConfigsResponsePrivate(
    ListQueryLoggingConfigsResponse * const q) : Route53ResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53 ListQueryLoggingConfigsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListQueryLoggingConfigsResponsePrivate::ListQueryLoggingConfigsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListQueryLoggingConfigsResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
