// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "privatenetworksresponse.h"
#include "privatenetworksresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::PrivateNetworksResponse
 * \brief The PrivateNetworksResponse class provides an interface for PrivateNetworks responses.
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a PrivateNetworksResponse object with parent \a parent.
 */
PrivateNetworksResponse::PrivateNetworksResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new PrivateNetworksResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a PrivateNetworksResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PrivateNetworksResponsePrivate.
 */
PrivateNetworksResponse::PrivateNetworksResponse(PrivateNetworksResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void PrivateNetworksResponse::parseFailure(QIODevice &response)
{
    //Q_D(PrivateNetworksResponse);
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
 * \class QtAws::PrivateNetworks::PrivateNetworksResponsePrivate
 * \brief The PrivateNetworksResponsePrivate class provides private implementation for PrivateNetworksResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a PrivateNetworksResponsePrivate object with public implementation \a q.
 */
PrivateNetworksResponsePrivate::PrivateNetworksResponsePrivate(
    PrivateNetworksResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
