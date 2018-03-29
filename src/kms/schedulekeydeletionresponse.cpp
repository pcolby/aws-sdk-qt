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

#include "schedulekeydeletionresponse.h"
#include "schedulekeydeletionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  ScheduleKeyDeletionResponse
 *
 * @brief  Handles KMS ScheduleKeyDeletion responses.
 *
 * @see    KMSClient::scheduleKeyDeletion
 */

/**
 * @brief  Constructs a new ScheduleKeyDeletionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ScheduleKeyDeletionResponse::ScheduleKeyDeletionResponse(
        const ScheduleKeyDeletionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new ScheduleKeyDeletionResponsePrivate(this), parent)
{
    setRequest(new ScheduleKeyDeletionRequest(request));
    setReply(reply);
}

const ScheduleKeyDeletionRequest * ScheduleKeyDeletionResponse::request() const
{
    Q_D(const ScheduleKeyDeletionResponse);
    return static_cast<const ScheduleKeyDeletionRequest *>(d->request);
}

/**
 * @brief  Parse a KMS ScheduleKeyDeletion response.
 *
 * @param  response  Response to parse.
 */
void ScheduleKeyDeletionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ScheduleKeyDeletionResponsePrivate
 *
 * @brief  Private implementation for ScheduleKeyDeletionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ScheduleKeyDeletionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ScheduleKeyDeletionResponse instance.
 */
ScheduleKeyDeletionResponsePrivate::ScheduleKeyDeletionResponsePrivate(
    ScheduleKeyDeletionResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS ScheduleKeyDeletionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ScheduleKeyDeletionResponsePrivate::ScheduleKeyDeletionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ScheduleKeyDeletionResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
