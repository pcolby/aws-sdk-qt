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

#include "listworkerswithqualificationtyperesponse.h"
#include "listworkerswithqualificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  ListWorkersWithQualificationTypeResponse
 *
 * @brief  Handles MTurk ListWorkersWithQualificationType responses.
 *
 * @see    MTurkClient::listWorkersWithQualificationType
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListWorkersWithQualificationTypeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListWorkersWithQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new ListWorkersWithQualificationTypeRequest(request));
    setReply(reply);
}

const ListWorkersWithQualificationTypeRequest * ListWorkersWithQualificationTypeResponse::request() const
{
    Q_D(const ListWorkersWithQualificationTypeResponse);
    return static_cast<const ListWorkersWithQualificationTypeRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk ListWorkersWithQualificationType response.
 *
 * @param  response  Response to parse.
 */
void ListWorkersWithQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListWorkersWithQualificationTypeResponsePrivate
 *
 * @brief  Private implementation for ListWorkersWithQualificationTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListWorkersWithQualificationTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListWorkersWithQualificationTypeResponse instance.
 */
ListWorkersWithQualificationTypeResponsePrivate::ListWorkersWithQualificationTypeResponsePrivate(
    ListWorkersWithQualificationTypeQueueResponse * const q) : ListWorkersWithQualificationTypePrivate(q)
{

}

/**
 * @brief  Parse an MTurk ListWorkersWithQualificationTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListWorkersWithQualificationTypeResponsePrivate::ListWorkersWithQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkersWithQualificationTypeResponse"));
    /// @todo
}
