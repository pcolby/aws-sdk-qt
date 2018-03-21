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

#include "createsoftwareupdatejobresponse.h"
#include "createsoftwareupdatejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateSoftwareUpdateJobResponse
 *
 * @brief  Handles Greengrass CreateSoftwareUpdateJob responses.
 *
 * @see    GreengrassClient::createSoftwareUpdateJob
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSoftwareUpdateJobResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateSoftwareUpdateJobResponsePrivate(this), parent)
{
    setRequest(new CreateSoftwareUpdateJobRequest(request));
    setReply(reply);
}

const CreateSoftwareUpdateJobRequest * CreateSoftwareUpdateJobResponse::request() const
{
    Q_D(const CreateSoftwareUpdateJobResponse);
    return static_cast<const CreateSoftwareUpdateJobRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass CreateSoftwareUpdateJob response.
 *
 * @param  response  Response to parse.
 */
void CreateSoftwareUpdateJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSoftwareUpdateJobResponsePrivate
 *
 * @brief  Private implementation for CreateSoftwareUpdateJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSoftwareUpdateJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSoftwareUpdateJobResponse instance.
 */
CreateSoftwareUpdateJobResponsePrivate::CreateSoftwareUpdateJobResponsePrivate(
    CreateSoftwareUpdateJobQueueResponse * const q) : CreateSoftwareUpdateJobPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass CreateSoftwareUpdateJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSoftwareUpdateJobResponsePrivate::CreateSoftwareUpdateJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSoftwareUpdateJobResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
