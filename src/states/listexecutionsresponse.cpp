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

#include "listexecutionsresponse.h"
#include "listexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SFN {

/**
 * @class  ListExecutionsResponse
 *
 * @brief  Handles SFN ListExecutions responses.
 *
 * @see    SFNClient::listExecutions
 */

/**
 * @brief  Constructs a new ListExecutionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListExecutionsResponse::ListExecutionsResponse(
        const ListExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new ListExecutionsResponsePrivate(this), parent)
{
    setRequest(new ListExecutionsRequest(request));
    setReply(reply);
}

const ListExecutionsRequest * ListExecutionsResponse::request() const
{
    Q_D(const ListExecutionsResponse);
    return static_cast<const ListExecutionsRequest *>(d->request);
}

/**
 * @brief  Parse a SFN ListExecutions response.
 *
 * @param  response  Response to parse.
 */
void ListExecutionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListExecutionsResponsePrivate
 *
 * @brief  Private implementation for ListExecutionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListExecutionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListExecutionsResponse instance.
 */
ListExecutionsResponsePrivate::ListExecutionsResponsePrivate(
    ListExecutionsQueueResponse * const q) : ListExecutionsPrivate(q)
{

}

/**
 * @brief  Parse an SFN ListExecutionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListExecutionsResponsePrivate::ListExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExecutionsResponse"));
    /// @todo
}

} // namespace SFN
} // namespace AWS
