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
namespace CodeStarNotifications {

/*!
 * \class QtAws::CodeStarNotifications::CodeStarNotificationsResponse
 * \brief The CodeStarNotificationsResponse class provides an interface for CodeStarNotifications responses.
 *
 * \inmodule QtAwsCodeStarNotifications
 */

/*!
 * Constructs a CodeStarNotificationsResponse object with parent \a parent.
 */
CodeStarNotificationsResponse::CodeStarNotificationsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CodeStarNotificationsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CodeStarNotificationsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeStarNotificationsResponsePrivate.
 */
CodeStarNotificationsResponse::CodeStarNotificationsResponse(CodeStarNotificationsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CodeStarNotificationsResponse::parseFailure(QIODevice &response)
{
    //Q_D(CodeStarNotificationsResponse);
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
 * \class QtAws::CodeStarNotifications::CodeStarNotificationsResponsePrivate
 * \brief The CodeStarNotificationsResponsePrivate class provides private implementation for CodeStarNotificationsResponse.
 * \internal
 *
 * \inmodule QtAwsCodeStarNotifications
 */

/*!
 * Constructs a CodeStarNotificationsResponsePrivate object with public implementation \a q.
 */
CodeStarNotificationsResponsePrivate::CodeStarNotificationsResponsePrivate(
    CodeStarNotificationsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CodeStarNotifications
} // namespace QtAws
