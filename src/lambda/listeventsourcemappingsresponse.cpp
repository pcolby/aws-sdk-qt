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

#include "listeventsourcemappingsresponse.h"
#include "listeventsourcemappingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/**
 * @class  ListEventSourceMappingsResponse
 *
 * @brief  Handles Lambda ListEventSourceMappings responses.
 *
 * @see    LambdaClient::listEventSourceMappings
 */

/**
 * @brief  Constructs a new ListEventSourceMappingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListEventSourceMappingsResponse::ListEventSourceMappingsResponse(
        const ListEventSourceMappingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new ListEventSourceMappingsResponsePrivate(this), parent)
{
    setRequest(new ListEventSourceMappingsRequest(request));
    setReply(reply);
}

const ListEventSourceMappingsRequest * ListEventSourceMappingsResponse::request() const
{
    Q_D(const ListEventSourceMappingsResponse);
    return static_cast<const ListEventSourceMappingsRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda ListEventSourceMappings response.
 *
 * @param  response  Response to parse.
 */
void ListEventSourceMappingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListEventSourceMappingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListEventSourceMappingsResponsePrivate
 *
 * @brief  Private implementation for ListEventSourceMappingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListEventSourceMappingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListEventSourceMappingsResponse instance.
 */
ListEventSourceMappingsResponsePrivate::ListEventSourceMappingsResponsePrivate(
    ListEventSourceMappingsResponse * const q) : LambdaResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lambda ListEventSourceMappingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListEventSourceMappingsResponsePrivate::parseListEventSourceMappingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEventSourceMappingsResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
