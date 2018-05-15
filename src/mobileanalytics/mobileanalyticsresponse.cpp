/*
    Copyright 2013-2018 Paul Colby

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

#include "mobileanalyticsresponse.h"
#include "mobileanalyticsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MobileAnalytics {

/*!
 * \class QtAws::MobileAnalytics::MobileAnalyticsResponse
 * \brief The MobileAnalyticsResponse class provides an interface for MobileAnalytics responses.
 *
 * \inmodule QtAwsMobileAnalytics
 */

/*!
 * Constructs a MobileAnalyticsResponse object with parent \a parent.
 */
MobileAnalyticsResponse::MobileAnalyticsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MobileAnalyticsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MobileAnalyticsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MobileAnalyticsResponsePrivate.
 */
MobileAnalyticsResponse::MobileAnalyticsResponse(MobileAnalyticsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MobileAnalyticsResponse::parseFailure(QIODevice &response)
{
    //Q_D(MobileAnalyticsResponse);
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
 * \class QtAws::MobileAnalytics::MobileAnalyticsResponsePrivate
 * \brief The MobileAnalyticsResponsePrivate class provides private implementation for MobileAnalyticsResponse.
 * \internal
 *
 * \inmodule QtAwsMobileAnalytics
 */

/*!
 * Constructs a MobileAnalyticsResponsePrivate object with public implementation \a q.
 */
MobileAnalyticsResponsePrivate::MobileAnalyticsResponsePrivate(
    MobileAnalyticsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MobileAnalytics
} // namespace QtAws
