// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "directconnectresponse.h"
#include "directconnectresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DirectConnectResponse
 * \brief The DirectConnectResponse class provides an interface for DirectConnect responses.
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DirectConnectResponse object with parent \a parent.
 */
DirectConnectResponse::DirectConnectResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DirectConnectResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DirectConnectResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DirectConnectResponsePrivate.
 */
DirectConnectResponse::DirectConnectResponse(DirectConnectResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DirectConnectResponse::parseFailure(QIODevice &response)
{
    //Q_D(DirectConnectResponse);
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
 * \class QtAws::DirectConnect::DirectConnectResponsePrivate
 * \brief The DirectConnectResponsePrivate class provides private implementation for DirectConnectResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DirectConnectResponsePrivate object with public implementation \a q.
 */
DirectConnectResponsePrivate::DirectConnectResponsePrivate(
    DirectConnectResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace DirectConnect
} // namespace QtAws
