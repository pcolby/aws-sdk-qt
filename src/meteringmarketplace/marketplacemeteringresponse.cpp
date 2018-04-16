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

#include "marketplacemeteringresponse.h"
#include "marketplacemeteringresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceMetering {

/*!
 * \class QtAws::MarketplaceMetering::MarketplaceMeteringResponse
 *
 * \brief The MarketplaceMeteringResponse class provides an interface for MarketplaceMetering responses.
 *
 * \ingroup MarketplaceMetering
 */

/*!
 * @brief  Constructs a new MarketplaceMeteringResponse object.
 *
 * @param  parent   This object's parent.
 */
MarketplaceMeteringResponse::MarketplaceMeteringResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MarketplaceMeteringResponsePrivate(this), parent)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new MarketplaceMeteringResponse object.
 *
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MarketplaceMeteringResponsePrivate.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 * @param  parent  This object's parent.
 */
MarketplaceMeteringResponse::MarketplaceMeteringResponse(MarketplaceMeteringResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void MarketplaceMeteringResponse::parseFailure(QIODevice &response)
{
    Q_D(MarketplaceMeteringResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * @internal
 *
 * @class  MarketplaceMeteringResponsePrivate
 *
 * @brief  Private implementation for MarketplaceMeteringResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new MarketplaceMeteringResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MarketplaceMeteringResponse instance.
 */
MarketplaceMeteringResponsePrivate::MarketplaceMeteringResponsePrivate(
    MarketplaceMeteringResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MarketplaceMetering
} // namespace QtAws
