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

#include "listconfigurationrevisionsresponse.h"
#include "listconfigurationrevisionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/**
 * @class  ListConfigurationRevisionsResponse
 *
 * @brief  Handles MQ ListConfigurationRevisions responses.
 *
 * @see    MQClient::listConfigurationRevisions
 */

/**
 * @brief  Constructs a new ListConfigurationRevisionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListConfigurationRevisionsResponse::ListConfigurationRevisionsResponse(
        const ListConfigurationRevisionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MQResponse(new ListConfigurationRevisionsResponsePrivate(this), parent)
{
    setRequest(new ListConfigurationRevisionsRequest(request));
    setReply(reply);
}

const ListConfigurationRevisionsRequest * ListConfigurationRevisionsResponse::request() const
{
    Q_D(const ListConfigurationRevisionsResponse);
    return static_cast<const ListConfigurationRevisionsRequest *>(d->request);
}

/**
 * @brief  Parse a MQ ListConfigurationRevisions response.
 *
 * @param  response  Response to parse.
 */
void ListConfigurationRevisionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListConfigurationRevisionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListConfigurationRevisionsResponsePrivate
 *
 * @brief  Private implementation for ListConfigurationRevisionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListConfigurationRevisionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListConfigurationRevisionsResponse instance.
 */
ListConfigurationRevisionsResponsePrivate::ListConfigurationRevisionsResponsePrivate(
    ListConfigurationRevisionsResponse * const q) : MQResponsePrivate(q)
{

}

/**
 * @brief  Parse an MQ ListConfigurationRevisionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListConfigurationRevisionsResponsePrivate::parseListConfigurationRevisionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConfigurationRevisionsResponse"));
    /// @todo
}

} // namespace MQ
} // namespace QtAws
