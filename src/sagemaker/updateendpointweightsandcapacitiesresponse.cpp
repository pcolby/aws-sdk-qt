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

#include "updateendpointweightsandcapacitiesresponse.h"
#include "updateendpointweightsandcapacitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateEndpointWeightsAndCapacitiesResponse
 *
 * \brief The UpdateEndpointWeightsAndCapacitiesResponse class provides an interace for SageMaker UpdateEndpointWeightsAndCapacities responses.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::updateEndpointWeightsAndCapacities
 */

/*!
 * @brief  Constructs a new UpdateEndpointWeightsAndCapacitiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateEndpointWeightsAndCapacitiesResponse::UpdateEndpointWeightsAndCapacitiesResponse(
        const UpdateEndpointWeightsAndCapacitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateEndpointWeightsAndCapacitiesResponsePrivate(this), parent)
{
    setRequest(new UpdateEndpointWeightsAndCapacitiesRequest(request));
    setReply(reply);
}

const UpdateEndpointWeightsAndCapacitiesRequest * UpdateEndpointWeightsAndCapacitiesResponse::request() const
{
    Q_D(const UpdateEndpointWeightsAndCapacitiesResponse);
    return static_cast<const UpdateEndpointWeightsAndCapacitiesRequest *>(d->request);
}

/*!
 * @brief  Parse a SageMaker UpdateEndpointWeightsAndCapacities response.
 *
 * @param  response  Response to parse.
 */
void UpdateEndpointWeightsAndCapacitiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateEndpointWeightsAndCapacitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateEndpointWeightsAndCapacitiesResponsePrivate
 *
 * \brief Private implementation for UpdateEndpointWeightsAndCapacitiesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateEndpointWeightsAndCapacitiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateEndpointWeightsAndCapacitiesResponse instance.
 */
UpdateEndpointWeightsAndCapacitiesResponsePrivate::UpdateEndpointWeightsAndCapacitiesResponsePrivate(
    UpdateEndpointWeightsAndCapacitiesResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SageMaker UpdateEndpointWeightsAndCapacitiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateEndpointWeightsAndCapacitiesResponsePrivate::parseUpdateEndpointWeightsAndCapacitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEndpointWeightsAndCapacitiesResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
