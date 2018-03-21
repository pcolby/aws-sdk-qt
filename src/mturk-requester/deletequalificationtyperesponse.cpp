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

#include "deletequalificationtyperesponse.h"
#include "deletequalificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  DeleteQualificationTypeResponse
 *
 * @brief  Handles MTurk DeleteQualificationType responses.
 *
 * @see    MTurkClient::deleteQualificationType
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteQualificationTypeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new DeleteQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new DeleteQualificationTypeRequest(request));
    setReply(reply);
}

const DeleteQualificationTypeRequest * DeleteQualificationTypeResponse::request() const
{
    Q_D(const DeleteQualificationTypeResponse);
    return static_cast<const DeleteQualificationTypeRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk DeleteQualificationType response.
 *
 * @param  response  Response to parse.
 */
void DeleteQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteQualificationTypeResponsePrivate
 *
 * @brief  Private implementation for DeleteQualificationTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteQualificationTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteQualificationTypeResponse instance.
 */
DeleteQualificationTypeResponsePrivate::DeleteQualificationTypeResponsePrivate(
    DeleteQualificationTypeQueueResponse * const q) : DeleteQualificationTypePrivate(q)
{

}

/**
 * @brief  Parse an MTurk DeleteQualificationTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteQualificationTypeResponsePrivate::DeleteQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteQualificationTypeResponse"));
    /// @todo
}
