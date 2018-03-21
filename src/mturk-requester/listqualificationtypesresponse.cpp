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

#include "listqualificationtypesresponse.h"
#include "listqualificationtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  ListQualificationTypesResponse
 *
 * @brief  Handles MTurk ListQualificationTypes responses.
 *
 * @see    MTurkClient::listQualificationTypes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListQualificationTypesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListQualificationTypesResponsePrivate(this), parent)
{
    setRequest(new ListQualificationTypesRequest(request));
    setReply(reply);
}

const ListQualificationTypesRequest * ListQualificationTypesResponse::request() const
{
    Q_D(const ListQualificationTypesResponse);
    return static_cast<const ListQualificationTypesRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk ListQualificationTypes response.
 *
 * @param  response  Response to parse.
 */
void ListQualificationTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListQualificationTypesResponsePrivate
 *
 * @brief  Private implementation for ListQualificationTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListQualificationTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListQualificationTypesResponse instance.
 */
ListQualificationTypesResponsePrivate::ListQualificationTypesResponsePrivate(
    ListQualificationTypesQueueResponse * const q) : ListQualificationTypesPrivate(q)
{

}

/**
 * @brief  Parse an MTurk ListQualificationTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListQualificationTypesResponsePrivate::ListQualificationTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListQualificationTypesResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
