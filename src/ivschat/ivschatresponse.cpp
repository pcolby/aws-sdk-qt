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

#include "ivschatresponse.h"
#include "ivschatresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IvsChat {

/*!
 * \class QtAws::IvsChat::IvsChatResponse
 * \brief The IvsChatResponse class provides an interface for IvsChat responses.
 *
 * \inmodule QtAwsIvsChat
 */

/*!
 * Constructs a IvsChatResponse object with parent \a parent.
 */
IvsChatResponse::IvsChatResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IvsChatResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IvsChatResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IvsChatResponsePrivate.
 */
IvsChatResponse::IvsChatResponse(IvsChatResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IvsChatResponse::parseFailure(QIODevice &response)
{
    //Q_D(IvsChatResponse);
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
 * \class QtAws::IvsChat::IvsChatResponsePrivate
 * \brief The IvsChatResponsePrivate class provides private implementation for IvsChatResponse.
 * \internal
 *
 * \inmodule QtAwsIvsChat
 */

/*!
 * Constructs a IvsChatResponsePrivate object with public implementation \a q.
 */
IvsChatResponsePrivate::IvsChatResponsePrivate(
    IvsChatResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IvsChat
} // namespace QtAws
