// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
