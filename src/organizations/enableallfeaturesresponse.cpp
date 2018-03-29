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

#include "enableallfeaturesresponse.h"
#include "enableallfeaturesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/**
 * @class  EnableAllFeaturesResponse
 *
 * @brief  Handles Organizations EnableAllFeatures responses.
 *
 * @see    OrganizationsClient::enableAllFeatures
 */

/**
 * @brief  Constructs a new EnableAllFeaturesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableAllFeaturesResponse::EnableAllFeaturesResponse(
        const EnableAllFeaturesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EnableAllFeaturesResponse(new EnableAllFeaturesResponsePrivate(this), parent)
{
    setRequest(new EnableAllFeaturesRequest(request));
    setReply(reply);
}

const EnableAllFeaturesRequest * EnableAllFeaturesResponse::request() const
{
    Q_D(const EnableAllFeaturesResponse);
    return static_cast<const EnableAllFeaturesRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations EnableAllFeatures response.
 *
 * @param  response  Response to parse.
 */
void EnableAllFeaturesResponse::parseSuccess(QIODevice &response)
{
    Q_D(EnableAllFeaturesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableAllFeaturesResponsePrivate
 *
 * @brief  Private implementation for EnableAllFeaturesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableAllFeaturesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableAllFeaturesResponse instance.
 */
EnableAllFeaturesResponsePrivate::EnableAllFeaturesResponsePrivate(
    EnableAllFeaturesResponse * const q) : OrganizationsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Organizations EnableAllFeaturesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableAllFeaturesResponsePrivate::parseEnableAllFeaturesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableAllFeaturesResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace QtAws
