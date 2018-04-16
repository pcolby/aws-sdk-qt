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

#include "batchchecklayeravailabilityresponse.h"
#include "batchchecklayeravailabilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::BatchCheckLayerAvailabilityResponse
 *
 * \brief The BatchCheckLayerAvailabilityResponse class encapsulates ECR BatchCheckLayerAvailability responses.
 *
 * \ingroup ECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa ECRClient::batchCheckLayerAvailability
 */

/*!
 * @brief  Constructs a new BatchCheckLayerAvailabilityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchCheckLayerAvailabilityResponse::BatchCheckLayerAvailabilityResponse(
        const BatchCheckLayerAvailabilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new BatchCheckLayerAvailabilityResponsePrivate(this), parent)
{
    setRequest(new BatchCheckLayerAvailabilityRequest(request));
    setReply(reply);
}

const BatchCheckLayerAvailabilityRequest * BatchCheckLayerAvailabilityResponse::request() const
{
    Q_D(const BatchCheckLayerAvailabilityResponse);
    return static_cast<const BatchCheckLayerAvailabilityRequest *>(d->request);
}

/*!
 * @brief  Parse a ECR BatchCheckLayerAvailability response.
 *
 * @param  response  Response to parse.
 */
void BatchCheckLayerAvailabilityResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchCheckLayerAvailabilityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class BatchCheckLayerAvailabilityResponsePrivate
 *
 * \brief Private implementation for BatchCheckLayerAvailabilityResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new BatchCheckLayerAvailabilityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchCheckLayerAvailabilityResponse instance.
 */
BatchCheckLayerAvailabilityResponsePrivate::BatchCheckLayerAvailabilityResponsePrivate(
    BatchCheckLayerAvailabilityResponse * const q) : ECRResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ECR BatchCheckLayerAvailabilityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchCheckLayerAvailabilityResponsePrivate::parseBatchCheckLayerAvailabilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchCheckLayerAvailabilityResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
