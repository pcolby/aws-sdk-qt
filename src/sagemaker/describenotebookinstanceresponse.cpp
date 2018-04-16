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

#include "describenotebookinstanceresponse.h"
#include "describenotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceResponse
 *
 * \brief The DescribeNotebookInstanceResponse class encapsulates SageMaker DescribeNotebookInstance responses.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::describeNotebookInstance
 */

/*!
 * @brief  Constructs a new DescribeNotebookInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeNotebookInstanceResponse::DescribeNotebookInstanceResponse(
        const DescribeNotebookInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new DescribeNotebookInstanceRequest(request));
    setReply(reply);
}

const DescribeNotebookInstanceRequest * DescribeNotebookInstanceResponse::request() const
{
    Q_D(const DescribeNotebookInstanceResponse);
    return static_cast<const DescribeNotebookInstanceRequest *>(d->request);
}

/*!
 * @brief  Parse a SageMaker DescribeNotebookInstance response.
 *
 * @param  response  Response to parse.
 */
void DescribeNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeNotebookInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeNotebookInstanceResponsePrivate
 *
 * \brief Private implementation for DescribeNotebookInstanceResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeNotebookInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeNotebookInstanceResponse instance.
 */
DescribeNotebookInstanceResponsePrivate::DescribeNotebookInstanceResponsePrivate(
    DescribeNotebookInstanceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SageMaker DescribeNotebookInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeNotebookInstanceResponsePrivate::parseDescribeNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNotebookInstanceResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
