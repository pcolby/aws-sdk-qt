// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    : QtAws::Core::AwsAbstractResponse(new NetworkManagerResponsePrivate(this), parent)
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
    : QtAws::Core::AwsAbstractResponse(d, parent)
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
    NetworkManagerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace NetworkManager
} // namespace QtAws
