/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "textractresponse.h"
#include "textractresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Textract {

/*!
 * \class QtAws::Textract::TextractResponse
 * \brief The TextractResponse class provides an interface for Textract responses.
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a TextractResponse object with parent \a parent.
 */
TextractResponse::TextractResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new TextractResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a TextractResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TextractResponsePrivate.
 */
TextractResponse::TextractResponse(TextractResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void TextractResponse::parseFailure(QIODevice &response)
{
    //Q_D(TextractResponse);
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
 * \class QtAws::Textract::TextractResponsePrivate
 * \brief The TextractResponsePrivate class provides private implementation for TextractResponse.
 * \internal
 *
 * \inmodule QtAwsTextract
 */

/*!
 * Constructs a TextractResponsePrivate object with public implementation \a q.
 */
TextractResponsePrivate::TextractResponsePrivate(
    TextractResponse * const q) : q_ptr(q)
{

}

} // namespace Textract
} // namespace QtAws
