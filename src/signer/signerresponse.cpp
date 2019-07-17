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

#include "signerresponse.h"
#include "signerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace signer {

/*!
 * \class QtAws::signer::signerResponse
 * \brief The signerResponse class provides an interface for signer responses.
 *
 * \inmodule QtAwssigner
 */

/*!
 * Constructs a signerResponse object with parent \a parent.
 */
signerResponse::signerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new signerResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a signerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from signerResponsePrivate.
 */
signerResponse::signerResponse(signerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void signerResponse::parseFailure(QIODevice &response)
{
    //Q_D(signerResponse);
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
 * \class QtAws::signer::signerResponsePrivate
 * \brief The signerResponsePrivate class provides private implementation for signerResponse.
 * \internal
 *
 * \inmodule QtAwssigner
 */

/*!
 * Constructs a signerResponsePrivate object with public implementation \a q.
 */
signerResponsePrivate::signerResponsePrivate(
    signerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace signer
} // namespace QtAws
