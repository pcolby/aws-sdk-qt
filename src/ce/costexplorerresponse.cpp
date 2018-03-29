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

#include "costexplorerresponse.h"
#include "costexplorerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/**
 * @class  CostExplorerResponse
 *
 * @brief  Handles CostExplorer CostExplorer responses.
 *
 * @see    CostExplorerClient::costExplorer
 */

/**
 * @brief  Constructs a new CostExplorerResponse object.
 *
 * @param  parent   This object's parent.
 */
CostExplorerResponse::CostExplorerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CostExplorerResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void CostExplorerResponse::parseFailure(QIODevice &response)
{
    Q_D(SqsResponse);
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

/**
 * @internal
 *
 * @class  CostExplorerResponsePrivate
 *
 * @brief  Private implementation for CostExplorerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CostExplorerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CostExplorerResponse instance.
 */
CostExplorerResponsePrivate::CostExplorerResponsePrivate(
    CostExplorerQueueResponse * const q) : CostExplorerPrivate(q)
{

}

} // namespace CostExplorer
} // namespace QtAws
