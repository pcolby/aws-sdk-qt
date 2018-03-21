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

#include "startreplicationtaskassessmentresponse.h"
#include "startreplicationtaskassessmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  StartReplicationTaskAssessmentResponse
 *
 * @brief  Handles DatabaseMigrationService StartReplicationTaskAssessment responses.
 *
 * @see    DatabaseMigrationServiceClient::startReplicationTaskAssessment
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartReplicationTaskAssessmentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new StartReplicationTaskAssessmentResponsePrivate(this), parent)
{
    setRequest(new StartReplicationTaskAssessmentRequest(request));
    setReply(reply);
}

const StartReplicationTaskAssessmentRequest * StartReplicationTaskAssessmentResponse::request() const
{
    Q_D(const StartReplicationTaskAssessmentResponse);
    return static_cast<const StartReplicationTaskAssessmentRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService StartReplicationTaskAssessment response.
 *
 * @param  response  Response to parse.
 */
void StartReplicationTaskAssessmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartReplicationTaskAssessmentResponsePrivate
 *
 * @brief  Private implementation for StartReplicationTaskAssessmentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartReplicationTaskAssessmentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartReplicationTaskAssessmentResponse instance.
 */
StartReplicationTaskAssessmentResponsePrivate::StartReplicationTaskAssessmentResponsePrivate(
    StartReplicationTaskAssessmentQueueResponse * const q) : StartReplicationTaskAssessmentPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService StartReplicationTaskAssessmentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartReplicationTaskAssessmentResponsePrivate::StartReplicationTaskAssessmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartReplicationTaskAssessmentResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace AWS
