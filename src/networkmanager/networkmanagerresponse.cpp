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

#include "networkmanagerresponse.h"
#include "networkmanagerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::NetworkManagerResponse
 * \brief The NetworkManagerResponse class provides an interface for NetworkManager responses.
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a NetworkManagerResponse object with parent \a parent.
 */
NetworkManagerResponse::NetworkManagerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new NetworkManagerResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a NetworkManagerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from NetworkManagerResponsePrivate.
 */
NetworkManagerResponse::NetworkManagerResponse(NetworkManagerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void NetworkManagerResponse::parseFailure(QIODevice &response)
{
    //Q_D(NetworkManagerResponse);
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
 * \class QtAws::NetworkManager::NetworkManagerResponsePrivate
 * \brief The NetworkManagerResponsePrivate class provides private implementation for NetworkManagerResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a NetworkManagerResponsePrivate object with public implementation \a q.
 */
NetworkManagerResponsePrivate::NetworkManagerResponsePrivate(
    NetworkManagerResponse * const q) : q_ptr(q)
{

}

} // namespace NetworkManager
} // namespace QtAws
