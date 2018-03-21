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

#include "listassignmentsforhitresponse.h"
#include "listassignmentsforhitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  ListAssignmentsForHITResponse
 *
 * @brief  Handles MTurk ListAssignmentsForHIT responses.
 *
 * @see    MTurkClient::listAssignmentsForHIT
 */

/**
 * @brief  Constructs a new ListAssignmentsForHITResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAssignmentsForHITResponse::ListAssignmentsForHITResponse(
        const ListAssignmentsForHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListAssignmentsForHITResponsePrivate(this), parent)
{
    setRequest(new ListAssignmentsForHITRequest(request));
    setReply(reply);
}

const ListAssignmentsForHITRequest * ListAssignmentsForHITResponse::request() const
{
    Q_D(const ListAssignmentsForHITResponse);
    return static_cast<const ListAssignmentsForHITRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk ListAssignmentsForHIT response.
 *
 * @param  response  Response to parse.
 */
void ListAssignmentsForHITResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAssignmentsForHITResponsePrivate
 *
 * @brief  Private implementation for ListAssignmentsForHITResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAssignmentsForHITResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAssignmentsForHITResponse instance.
 */
ListAssignmentsForHITResponsePrivate::ListAssignmentsForHITResponsePrivate(
    ListAssignmentsForHITQueueResponse * const q) : ListAssignmentsForHITPrivate(q)
{

}

/**
 * @brief  Parse an MTurk ListAssignmentsForHITResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAssignmentsForHITResponsePrivate::ListAssignmentsForHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssignmentsForHITResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
