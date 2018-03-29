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

#include "describetrainingjobresponse.h"
#include "describetrainingjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/**
 * @class  DescribeTrainingJobResponse
 *
 * @brief  Handles SageMaker DescribeTrainingJob responses.
 *
 * @see    SageMakerClient::describeTrainingJob
 */

/**
 * @brief  Constructs a new DescribeTrainingJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTrainingJobResponse::DescribeTrainingJobResponse(
        const DescribeTrainingJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeTrainingJobResponsePrivate(this), parent)
{
    setRequest(new DescribeTrainingJobRequest(request));
    setReply(reply);
}

const DescribeTrainingJobRequest * DescribeTrainingJobResponse::request() const
{
    Q_D(const DescribeTrainingJobResponse);
    return static_cast<const DescribeTrainingJobRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker DescribeTrainingJob response.
 *
 * @param  response  Response to parse.
 */
void DescribeTrainingJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTrainingJobResponsePrivate
 *
 * @brief  Private implementation for DescribeTrainingJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrainingJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTrainingJobResponse instance.
 */
DescribeTrainingJobResponsePrivate::DescribeTrainingJobResponsePrivate(
    DescribeTrainingJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SageMaker DescribeTrainingJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTrainingJobResponsePrivate::DescribeTrainingJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTrainingJobResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
