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

#include "describemodelresponse.h"
#include "describemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeModelResponse
 *
 * \brief The DescribeModelResponse class provides an interace for SageMaker DescribeModel responses.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::describeModel
 */

/*!
 * @brief  Constructs a new DescribeModelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeModelResponse::DescribeModelResponse(
        const DescribeModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeModelResponsePrivate(this), parent)
{
    setRequest(new DescribeModelRequest(request));
    setReply(reply);
}

const DescribeModelRequest * DescribeModelResponse::request() const
{
    Q_D(const DescribeModelResponse);
    return static_cast<const DescribeModelRequest *>(d->request);
}

/*!
 * @brief  Parse a SageMaker DescribeModel response.
 *
 * @param  response  Response to parse.
 */
void DescribeModelResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeModelResponsePrivate
 *
 * \brief Private implementation for DescribeModelResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeModelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeModelResponse instance.
 */
DescribeModelResponsePrivate::DescribeModelResponsePrivate(
    DescribeModelResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SageMaker DescribeModelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeModelResponsePrivate::parseDescribeModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeModelResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
