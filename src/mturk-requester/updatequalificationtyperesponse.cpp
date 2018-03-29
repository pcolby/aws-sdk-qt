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

#include "updatequalificationtyperesponse.h"
#include "updatequalificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  UpdateQualificationTypeResponse
 *
 * @brief  Handles MTurk UpdateQualificationType responses.
 *
 * @see    MTurkClient::updateQualificationType
 */

/**
 * @brief  Constructs a new UpdateQualificationTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateQualificationTypeResponse::UpdateQualificationTypeResponse(
        const UpdateQualificationTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new UpdateQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new UpdateQualificationTypeRequest(request));
    setReply(reply);
}

const UpdateQualificationTypeRequest * UpdateQualificationTypeResponse::request() const
{
    Q_D(const UpdateQualificationTypeResponse);
    return static_cast<const UpdateQualificationTypeRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk UpdateQualificationType response.
 *
 * @param  response  Response to parse.
 */
void UpdateQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateQualificationTypeResponsePrivate
 *
 * @brief  Private implementation for UpdateQualificationTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateQualificationTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateQualificationTypeResponse instance.
 */
UpdateQualificationTypeResponsePrivate::UpdateQualificationTypeResponsePrivate(
    UpdateQualificationTypeQueueResponse * const q) : UpdateQualificationTypePrivate(q)
{

}

/**
 * @brief  Parse an MTurk UpdateQualificationTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateQualificationTypeResponsePrivate::UpdateQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateQualificationTypeResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
