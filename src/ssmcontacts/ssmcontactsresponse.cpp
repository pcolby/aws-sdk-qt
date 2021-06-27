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

#include "ssmcontactsresponse.h"
#include "ssmcontactsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::SSMContactsResponse
 * \brief The SSMContactsResponse class provides an interface for SSMContacts responses.
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a SSMContactsResponse object with parent \a parent.
 */
SSMContactsResponse::SSMContactsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new SSMContactsResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a SSMContactsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SSMContactsResponsePrivate.
 */
SSMContactsResponse::SSMContactsResponse(SSMContactsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void SSMContactsResponse::parseFailure(QIODevice &response)
{
    //Q_D(SSMContactsResponse);
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
 * \class QtAws::SSMContacts::SSMContactsResponsePrivate
 * \brief The SSMContactsResponsePrivate class provides private implementation for SSMContactsResponse.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a SSMContactsResponsePrivate object with public implementation \a q.
 */
SSMContactsResponsePrivate::SSMContactsResponsePrivate(
    SSMContactsResponse * const q) : q_ptr(q)
{

}

} // namespace SSMContacts
} // namespace QtAws
