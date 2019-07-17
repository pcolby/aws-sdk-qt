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

#include "storagegatewayresponse.h"
#include "storagegatewayresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/*!
 * \class QtAws::StorageGateway::StorageGatewayResponse
 * \brief The StorageGatewayResponse class provides an interface for StorageGateway responses.
 *
 * \inmodule QtAwsStorageGateway
 */

/*!
 * Constructs a StorageGatewayResponse object with parent \a parent.
 */
StorageGatewayResponse::StorageGatewayResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new StorageGatewayResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a StorageGatewayResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from StorageGatewayResponsePrivate.
 */
StorageGatewayResponse::StorageGatewayResponse(StorageGatewayResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void StorageGatewayResponse::parseFailure(QIODevice &response)
{
    //Q_D(StorageGatewayResponse);
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
 * \class QtAws::StorageGateway::StorageGatewayResponsePrivate
 * \brief The StorageGatewayResponsePrivate class provides private implementation for StorageGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsStorageGateway
 */

/*!
 * Constructs a StorageGatewayResponsePrivate object with public implementation \a q.
 */
StorageGatewayResponsePrivate::StorageGatewayResponsePrivate(
    StorageGatewayResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace StorageGateway
} // namespace QtAws
