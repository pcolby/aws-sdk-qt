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

#include "customerprofilesresponse.h"
#include "customerprofilesresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::CustomerProfilesResponse
 * \brief The CustomerProfilesResponse class provides an interface for CustomerProfiles responses.
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a CustomerProfilesResponse object with parent \a parent.
 */
CustomerProfilesResponse::CustomerProfilesResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CustomerProfilesResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CustomerProfilesResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CustomerProfilesResponsePrivate.
 */
CustomerProfilesResponse::CustomerProfilesResponse(CustomerProfilesResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CustomerProfilesResponse::parseFailure(QIODevice &response)
{
    //Q_D(CustomerProfilesResponse);
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
 * \class QtAws::CustomerProfiles::CustomerProfilesResponsePrivate
 * \brief The CustomerProfilesResponsePrivate class provides private implementation for CustomerProfilesResponse.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a CustomerProfilesResponsePrivate object with public implementation \a q.
 */
CustomerProfilesResponsePrivate::CustomerProfilesResponsePrivate(
    CustomerProfilesResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
