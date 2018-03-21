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

#include "createqualificationtyperesponse.h"
#include "createqualificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  CreateQualificationTypeResponse
 *
 * @brief  Handles MTurk CreateQualificationType responses.
 *
 * @see    MTurkClient::createQualificationType
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateQualificationTypeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new CreateQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new CreateQualificationTypeRequest(request));
    setReply(reply);
}

const CreateQualificationTypeRequest * CreateQualificationTypeResponse::request() const
{
    Q_D(const CreateQualificationTypeResponse);
    return static_cast<const CreateQualificationTypeRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk CreateQualificationType response.
 *
 * @param  response  Response to parse.
 */
void CreateQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateQualificationTypeResponsePrivate
 *
 * @brief  Private implementation for CreateQualificationTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateQualificationTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateQualificationTypeResponse instance.
 */
CreateQualificationTypeResponsePrivate::CreateQualificationTypeResponsePrivate(
    CreateQualificationTypeQueueResponse * const q) : CreateQualificationTypePrivate(q)
{

}

/**
 * @brief  Parse an MTurk CreateQualificationTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateQualificationTypeResponsePrivate::CreateQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateQualificationTypeResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
