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

#include "listqueryexecutionsresponse.h"
#include "listqueryexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Athena {

/**
 * @class  ListQueryExecutionsResponse
 *
 * @brief  Handles Athena ListQueryExecutions responses.
 *
 * @see    AthenaClient::listQueryExecutions
 */

/**
 * @brief  Constructs a new ListQueryExecutionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListQueryExecutionsResponse::ListQueryExecutionsResponse(
        const ListQueryExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AthenaResponse(new ListQueryExecutionsResponsePrivate(this), parent)
{
    setRequest(new ListQueryExecutionsRequest(request));
    setReply(reply);
}

const ListQueryExecutionsRequest * ListQueryExecutionsResponse::request() const
{
    Q_D(const ListQueryExecutionsResponse);
    return static_cast<const ListQueryExecutionsRequest *>(d->request);
}

/**
 * @brief  Parse a Athena ListQueryExecutions response.
 *
 * @param  response  Response to parse.
 */
void ListQueryExecutionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListQueryExecutionsResponsePrivate
 *
 * @brief  Private implementation for ListQueryExecutionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListQueryExecutionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListQueryExecutionsResponse instance.
 */
ListQueryExecutionsResponsePrivate::ListQueryExecutionsResponsePrivate(
    ListQueryExecutionsQueueResponse * const q) : ListQueryExecutionsPrivate(q)
{

}

/**
 * @brief  Parse an Athena ListQueryExecutionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListQueryExecutionsResponsePrivate::ListQueryExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListQueryExecutionsResponse"));
    /// @todo
}

} // namespace Athena
} // namespace AWS
