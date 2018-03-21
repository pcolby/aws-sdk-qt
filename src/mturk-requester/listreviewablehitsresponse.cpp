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

#include "listreviewablehitsresponse.h"
#include "listreviewablehitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  ListReviewableHITsResponse
 *
 * @brief  Handles MTurk ListReviewableHITs responses.
 *
 * @see    MTurkClient::listReviewableHITs
 */

/**
 * @brief  Constructs a new ListReviewableHITsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListReviewableHITsResponse::ListReviewableHITsResponse(
        const ListReviewableHITsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListReviewableHITsResponsePrivate(this), parent)
{
    setRequest(new ListReviewableHITsRequest(request));
    setReply(reply);
}

const ListReviewableHITsRequest * ListReviewableHITsResponse::request() const
{
    Q_D(const ListReviewableHITsResponse);
    return static_cast<const ListReviewableHITsRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk ListReviewableHITs response.
 *
 * @param  response  Response to parse.
 */
void ListReviewableHITsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListReviewableHITsResponsePrivate
 *
 * @brief  Private implementation for ListReviewableHITsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListReviewableHITsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListReviewableHITsResponse instance.
 */
ListReviewableHITsResponsePrivate::ListReviewableHITsResponsePrivate(
    ListReviewableHITsQueueResponse * const q) : ListReviewableHITsPrivate(q)
{

}

/**
 * @brief  Parse an MTurk ListReviewableHITsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListReviewableHITsResponsePrivate::ListReviewableHITsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReviewableHITsResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
