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

#include "describemlmodelsresponse.h"
#include "describemlmodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/**
 * @class  DescribeMLModelsResponse
 *
 * @brief  Handles MachineLearning DescribeMLModels responses.
 *
 * @see    MachineLearningClient::describeMLModels
 */

/**
 * @brief  Constructs a new DescribeMLModelsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMLModelsResponse::DescribeMLModelsResponse(
        const DescribeMLModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DescribeMLModelsResponsePrivate(this), parent)
{
    setRequest(new DescribeMLModelsRequest(request));
    setReply(reply);
}

const DescribeMLModelsRequest * DescribeMLModelsResponse::request() const
{
    Q_D(const DescribeMLModelsResponse);
    return static_cast<const DescribeMLModelsRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning DescribeMLModels response.
 *
 * @param  response  Response to parse.
 */
void DescribeMLModelsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeMLModelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMLModelsResponsePrivate
 *
 * @brief  Private implementation for DescribeMLModelsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMLModelsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMLModelsResponse instance.
 */
DescribeMLModelsResponsePrivate::DescribeMLModelsResponsePrivate(
    DescribeMLModelsResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning DescribeMLModelsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMLModelsResponsePrivate::parseDescribeMLModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMLModelsResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
