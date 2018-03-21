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

#include "createsamplefindingsresponse.h"
#include "createsamplefindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  CreateSampleFindingsResponse
 *
 * @brief  Handles GuardDuty CreateSampleFindings responses.
 *
 * @see    GuardDutyClient::createSampleFindings
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSampleFindingsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new CreateSampleFindingsResponsePrivate(this), parent)
{
    setRequest(new CreateSampleFindingsRequest(request));
    setReply(reply);
}

const CreateSampleFindingsRequest * CreateSampleFindingsResponse::request() const
{
    Q_D(const CreateSampleFindingsResponse);
    return static_cast<const CreateSampleFindingsRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty CreateSampleFindings response.
 *
 * @param  response  Response to parse.
 */
void CreateSampleFindingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSampleFindingsResponsePrivate
 *
 * @brief  Private implementation for CreateSampleFindingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSampleFindingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSampleFindingsResponse instance.
 */
CreateSampleFindingsResponsePrivate::CreateSampleFindingsResponsePrivate(
    CreateSampleFindingsQueueResponse * const q) : CreateSampleFindingsPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty CreateSampleFindingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSampleFindingsResponsePrivate::CreateSampleFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSampleFindingsResponse"));
    /// @todo
}
