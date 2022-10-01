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

#include "codestarnotificationsresponse.h"
#include "codestarnotificationsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodestarNotifications {

/*!
 * \class QtAws::CodestarNotifications::CodestarNotificationsResponse
 * \brief The CodestarNotificationsResponse class provides an interface for CodestarNotifications responses.
 *
 * \inmodule QtAwsCodestarNotifications
 */

/*!
 * Constructs a CodestarNotificationsResponse object with parent \a parent.
 */
CodestarNotificationsResponse::CodestarNotificationsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CodestarNotificationsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CodestarNotificationsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodestarNotificationsResponsePrivate.
 */
CodestarNotificationsResponse::CodestarNotificationsResponse(CodestarNotificationsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CodestarNotificationsResponse::parseFailure(QIODevice &response)
{
    //Q_D(CodestarNotificationsResponse);
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
 * \class QtAws::CodestarNotifications::CodestarNotificationsResponsePrivate
 * \brief The CodestarNotificationsResponsePrivate class provides private implementation for CodestarNotificationsResponse.
 * \internal
 *
 * \inmodule QtAwsCodestarNotifications
 */

/*!
 * Constructs a CodestarNotificationsResponsePrivate object with public implementation \a q.
 */
CodestarNotificationsResponsePrivate::CodestarNotificationsResponsePrivate(
    CodestarNotificationsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CodestarNotifications
} // namespace QtAws
