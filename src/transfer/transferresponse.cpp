// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
