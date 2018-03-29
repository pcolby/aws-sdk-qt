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

#include "stoptrainingjobresponse.h"
#include "stoptrainingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/**
 * @class  StopTrainingJobResponse
 *
 * @brief  Handles SageMaker StopTrainingJob responses.
 *
 * @see    SageMakerClient::stopTrainingJob
 */

/**
 * @brief  Constructs a new StopTrainingJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopTrainingJobResponse::StopTrainingJobResponse(
        const StopTrainingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StopTrainingJobResponse(new StopTrainingJobResponsePrivate(this), parent)
{
    setRequest(new StopTrainingJobRequest(request));
    setReply(reply);
}

const StopTrainingJobRequest * StopTrainingJobResponse::request() const
{
    Q_D(const StopTrainingJobResponse);
    return static_cast<const StopTrainingJobRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker StopTrainingJob response.
 *
 * @param  response  Response to parse.
 */
void StopTrainingJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(StopTrainingJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopTrainingJobResponsePrivate
 *
 * @brief  Private implementation for StopTrainingJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopTrainingJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopTrainingJobResponse instance.
 */
StopTrainingJobResponsePrivate::StopTrainingJobResponsePrivate(
    StopTrainingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SageMaker StopTrainingJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopTrainingJobResponsePrivate::parseStopTrainingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopTrainingJobResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
