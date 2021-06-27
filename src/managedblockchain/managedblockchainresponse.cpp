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

#include "managedblockchainresponse.h"
#include "managedblockchainresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ManagedBlockchain {

/*!
 * \class QtAws::ManagedBlockchain::ManagedBlockchainResponse
 * \brief The ManagedBlockchainResponse class provides an interface for ManagedBlockchain responses.
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ManagedBlockchainResponse object with parent \a parent.
 */
ManagedBlockchainResponse::ManagedBlockchainResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new ManagedBlockchainResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a ManagedBlockchainResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ManagedBlockchainResponsePrivate.
 */
ManagedBlockchainResponse::ManagedBlockchainResponse(ManagedBlockchainResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void ManagedBlockchainResponse::parseFailure(QIODevice &response)
{
    //Q_D(ManagedBlockchainResponse);
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
 * \class QtAws::ManagedBlockchain::ManagedBlockchainResponsePrivate
 * \brief The ManagedBlockchainResponsePrivate class provides private implementation for ManagedBlockchainResponse.
 * \internal
 *
 * \inmodule QtAwsManagedBlockchain
 */

/*!
 * Constructs a ManagedBlockchainResponsePrivate object with public implementation \a q.
 */
ManagedBlockchainResponsePrivate::ManagedBlockchainResponsePrivate(
    ManagedBlockchainResponse * const q) : q_ptr(q)
{

}

} // namespace ManagedBlockchain
} // namespace QtAws
