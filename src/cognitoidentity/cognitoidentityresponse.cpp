/*
    Copyright 2013-2019 Paul Colby

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

#include "cognitoidentityresponse.h"
#include "cognitoidentityresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/*!
 * \class QtAws::CognitoIdentity::CognitoIdentityResponse
 * \brief The CognitoIdentityResponse class provides an interface for CognitoIdentity responses.
 *
 * \inmodule QtAwsCognitoIdentity
 */

/*!
 * Constructs a CognitoIdentityResponse object with parent \a parent.
 */
CognitoIdentityResponse::CognitoIdentityResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CognitoIdentityResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CognitoIdentityResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CognitoIdentityResponsePrivate.
 */
CognitoIdentityResponse::CognitoIdentityResponse(CognitoIdentityResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CognitoIdentityResponse::parseFailure(QIODevice &response)
{
    //Q_D(CognitoIdentityResponse);
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
 * \class QtAws::CognitoIdentity::CognitoIdentityResponsePrivate
 * \brief The CognitoIdentityResponsePrivate class provides private implementation for CognitoIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentity
 */

/*!
 * Constructs a CognitoIdentityResponsePrivate object with public implementation \a q.
 */
CognitoIdentityResponsePrivate::CognitoIdentityResponsePrivate(
    CognitoIdentityResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CognitoIdentity
} // namespace QtAws
