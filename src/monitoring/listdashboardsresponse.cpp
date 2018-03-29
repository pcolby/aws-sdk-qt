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

#include "listdashboardsresponse.h"
#include "listdashboardsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/**
 * @class  ListDashboardsResponse
 *
 * @brief  Handles CloudWatch ListDashboards responses.
 *
 * @see    CloudWatchClient::listDashboards
 */

/**
 * @brief  Constructs a new ListDashboardsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDashboardsResponse::ListDashboardsResponse(
        const ListDashboardsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new ListDashboardsResponsePrivate(this), parent)
{
    setRequest(new ListDashboardsRequest(request));
    setReply(reply);
}

const ListDashboardsRequest * ListDashboardsResponse::request() const
{
    Q_D(const ListDashboardsResponse);
    return static_cast<const ListDashboardsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatch ListDashboards response.
 *
 * @param  response  Response to parse.
 */
void ListDashboardsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListDashboardsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDashboardsResponsePrivate
 *
 * @brief  Private implementation for ListDashboardsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDashboardsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDashboardsResponse instance.
 */
ListDashboardsResponsePrivate::ListDashboardsResponsePrivate(
    ListDashboardsResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatch ListDashboardsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDashboardsResponsePrivate::parseListDashboardsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDashboardsResponse"));
    /// @todo
}

} // namespace CloudWatch
} // namespace QtAws
