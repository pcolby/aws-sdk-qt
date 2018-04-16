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

#include "translateresponse.h"
#include "translateresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::TranslateResponse
 *
 * \brief The TranslateResponse class is the base class for all Translate responses.
 *
 * \ingroup Translate
 */

/*!
 * @brief  Constructs a new TranslateResponse object.
 *
 * @param  parent   This object's parent.
 */
TranslateResponse::TranslateResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new TranslateResponsePrivate(this), parent)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new TranslateResponse object.
 *
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TranslateResponsePrivate.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 * @param  parent  This object's parent.
 */
TranslateResponse::TranslateResponse(TranslateResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void TranslateResponse::parseFailure(QIODevice &response)
{
    Q_D(TranslateResponse);
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
 * @class  TranslateResponsePrivate
 *
 * @brief  Private implementation for TranslateResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new TranslateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TranslateResponse instance.
 */
TranslateResponsePrivate::TranslateResponsePrivate(
    TranslateResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Translate
} // namespace QtAws
