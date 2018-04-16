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

#include "greengrassresponse.h"
#include "greengrassresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GreengrassResponse
 *
 * \brief The GreengrassResponse class provides an interface for Greengrass responses.
 *
 * \ingroup Greengrass
 */

/*!
 * @brief  Constructs a new GreengrassResponse object.
 *
 * @param  parent   This object's parent.
 */
GreengrassResponse::GreengrassResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GreengrassResponsePrivate(this), parent)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GreengrassResponse object.
 *
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GreengrassResponsePrivate.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 * @param  parent  This object's parent.
 */
GreengrassResponse::GreengrassResponse(GreengrassResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void GreengrassResponse::parseFailure(QIODevice &response)
{
    Q_D(GreengrassResponse);
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
 * @class  GreengrassResponsePrivate
 *
 * @brief  Private implementation for GreengrassResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GreengrassResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GreengrassResponse instance.
 */
GreengrassResponsePrivate::GreengrassResponsePrivate(
    GreengrassResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Greengrass
} // namespace QtAws
