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

#include "updatescalingparametersresponse.h"
#include "updatescalingparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/**
 * @class  UpdateScalingParametersResponse
 *
 * @brief  Handles CloudSearch UpdateScalingParameters responses.
 *
 * @see    CloudSearchClient::updateScalingParameters
 */

/**
 * @brief  Constructs a new UpdateScalingParametersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateScalingParametersResponse::UpdateScalingParametersResponse(
        const UpdateScalingParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new UpdateScalingParametersResponsePrivate(this), parent)
{
    setRequest(new UpdateScalingParametersRequest(request));
    setReply(reply);
}

const UpdateScalingParametersRequest * UpdateScalingParametersResponse::request() const
{
    Q_D(const UpdateScalingParametersResponse);
    return static_cast<const UpdateScalingParametersRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch UpdateScalingParameters response.
 *
 * @param  response  Response to parse.
 */
void UpdateScalingParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateScalingParametersResponsePrivate
 *
 * @brief  Private implementation for UpdateScalingParametersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateScalingParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateScalingParametersResponse instance.
 */
UpdateScalingParametersResponsePrivate::UpdateScalingParametersResponsePrivate(
    UpdateScalingParametersQueueResponse * const q) : UpdateScalingParametersPrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch UpdateScalingParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateScalingParametersResponsePrivate::UpdateScalingParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateScalingParametersResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace QtAws
