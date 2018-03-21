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

#include "listuniqueproblemsresponse.h"
#include "listuniqueproblemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  ListUniqueProblemsResponse
 *
 * @brief  Handles DeviceFarm ListUniqueProblems responses.
 *
 * @see    DeviceFarmClient::listUniqueProblems
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListUniqueProblemsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListUniqueProblemsResponsePrivate(this), parent)
{
    setRequest(new ListUniqueProblemsRequest(request));
    setReply(reply);
}

const ListUniqueProblemsRequest * ListUniqueProblemsResponse::request() const
{
    Q_D(const ListUniqueProblemsResponse);
    return static_cast<const ListUniqueProblemsRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm ListUniqueProblems response.
 *
 * @param  response  Response to parse.
 */
void ListUniqueProblemsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListUniqueProblemsResponsePrivate
 *
 * @brief  Private implementation for ListUniqueProblemsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListUniqueProblemsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListUniqueProblemsResponse instance.
 */
ListUniqueProblemsResponsePrivate::ListUniqueProblemsResponsePrivate(
    ListUniqueProblemsQueueResponse * const q) : ListUniqueProblemsPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm ListUniqueProblemsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListUniqueProblemsResponsePrivate::ListUniqueProblemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUniqueProblemsResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace AWS
