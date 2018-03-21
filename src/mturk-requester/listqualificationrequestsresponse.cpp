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

#include "listqualificationrequestsresponse.h"
#include "listqualificationrequestsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  ListQualificationRequestsResponse
 *
 * @brief  Handles MTurk ListQualificationRequests responses.
 *
 * @see    MTurkClient::listQualificationRequests
 */

/**
 * @brief  Constructs a new ListQualificationRequestsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListQualificationRequestsResponse::ListQualificationRequestsResponse(
        const ListQualificationRequestsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListQualificationRequestsResponsePrivate(this), parent)
{
    setRequest(new ListQualificationRequestsRequest(request));
    setReply(reply);
}

const ListQualificationRequestsRequest * ListQualificationRequestsResponse::request() const
{
    Q_D(const ListQualificationRequestsResponse);
    return static_cast<const ListQualificationRequestsRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk ListQualificationRequests response.
 *
 * @param  response  Response to parse.
 */
void ListQualificationRequestsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListQualificationRequestsResponsePrivate
 *
 * @brief  Private implementation for ListQualificationRequestsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListQualificationRequestsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListQualificationRequestsResponse instance.
 */
ListQualificationRequestsResponsePrivate::ListQualificationRequestsResponsePrivate(
    ListQualificationRequestsQueueResponse * const q) : ListQualificationRequestsPrivate(q)
{

}

/**
 * @brief  Parse an MTurk ListQualificationRequestsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListQualificationRequestsResponsePrivate::ListQualificationRequestsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListQualificationRequestsResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
