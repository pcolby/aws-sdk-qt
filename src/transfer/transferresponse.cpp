/*
    Copyright 2013-2020 Paul Colby

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

#include "transferresponse.h"
#include "transferresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::TransferResponse
 * \brief The TransferResponse class provides an interface for Transfer responses.
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a TransferResponse object with parent \a parent.
 */
TransferResponse::TransferResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new TransferResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a TransferResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TransferResponsePrivate.
 */
TransferResponse::TransferResponse(TransferResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void TransferResponse::parseFailure(QIODevice &response)
{
    //Q_D(TransferResponse);
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
 * \class QtAws::Transfer::TransferResponsePrivate
 * \brief The TransferResponsePrivate class provides private implementation for TransferResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a TransferResponsePrivate object with public implementation \a q.
 */
TransferResponsePrivate::TransferResponsePrivate(
    TransferResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Transfer
} // namespace QtAws
