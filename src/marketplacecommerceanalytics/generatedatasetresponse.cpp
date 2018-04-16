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

#include "generatedatasetresponse.h"
#include "generatedatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

/*!
 * \class QtAws::MarketplaceCommerceAnalytics::GenerateDataSetResponse
 *
 * \brief The GenerateDataSetResponse class encapsulates MarketplaceCommerceAnalytics GenerateDataSet responses.
 *
 * \ingroup MarketplaceCommerceAnalytics
 *
 *
 * \sa MarketplaceCommerceAnalyticsClient::generateDataSet
 */

/*!
 * @brief  Constructs a new GenerateDataSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GenerateDataSetResponse::GenerateDataSetResponse(
        const GenerateDataSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MarketplaceCommerceAnalyticsResponse(new GenerateDataSetResponsePrivate(this), parent)
{
    setRequest(new GenerateDataSetRequest(request));
    setReply(reply);
}

const GenerateDataSetRequest * GenerateDataSetResponse::request() const
{
    Q_D(const GenerateDataSetResponse);
    return static_cast<const GenerateDataSetRequest *>(d->request);
}

/*!
 * @brief  Parse a MarketplaceCommerceAnalytics GenerateDataSet response.
 *
 * @param  response  Response to parse.
 */
void GenerateDataSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(GenerateDataSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GenerateDataSetResponsePrivate
 *
 * \brief Private implementation for GenerateDataSetResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GenerateDataSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GenerateDataSetResponse instance.
 */
GenerateDataSetResponsePrivate::GenerateDataSetResponsePrivate(
    GenerateDataSetResponse * const q) : MarketplaceCommerceAnalyticsResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MarketplaceCommerceAnalytics GenerateDataSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GenerateDataSetResponsePrivate::parseGenerateDataSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateDataSetResponse"));
    /// @todo
}

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws
