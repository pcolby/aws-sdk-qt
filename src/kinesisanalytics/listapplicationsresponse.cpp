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

#include "listapplicationsresponse.h"
#include "listapplicationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/**
 * @class  ListApplicationsResponse
 *
 * @brief  Handles KinesisAnalytics ListApplications responses.
 *
 * @see    KinesisAnalyticsClient::listApplications
 */

/**
 * @brief  Constructs a new ListApplicationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListApplicationsResponse::ListApplicationsResponse(
        const ListApplicationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new ListApplicationsResponsePrivate(this), parent)
{
    setRequest(new ListApplicationsRequest(request));
    setReply(reply);
}

const ListApplicationsRequest * ListApplicationsResponse::request() const
{
    Q_D(const ListApplicationsResponse);
    return static_cast<const ListApplicationsRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisAnalytics ListApplications response.
 *
 * @param  response  Response to parse.
 */
void ListApplicationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListApplicationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListApplicationsResponsePrivate
 *
 * @brief  Private implementation for ListApplicationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListApplicationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListApplicationsResponse instance.
 */
ListApplicationsResponsePrivate::ListApplicationsResponsePrivate(
    ListApplicationsResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/**
 * @brief  Parse an KinesisAnalytics ListApplicationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListApplicationsResponsePrivate::parseListApplicationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApplicationsResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
