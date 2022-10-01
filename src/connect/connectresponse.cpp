// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "connectresponse.h"
#include "connectresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::ConnectResponse
 * \brief The ConnectResponse class provides an interface for Connect responses.
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a ConnectResponse object with parent \a parent.
 */
ConnectResponse::ConnectResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ConnectResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ConnectResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ConnectResponsePrivate.
 */
ConnectResponse::ConnectResponse(ConnectResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ConnectResponse::parseFailure(QIODevice &response)
{
    //Q_D(ConnectResponse);
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
 * \class QtAws::Connect::ConnectResponsePrivate
 * \brief The ConnectResponsePrivate class provides private implementation for ConnectResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a ConnectResponsePrivate object with public implementation \a q.
 */
ConnectResponsePrivate::ConnectResponsePrivate(
    ConnectResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Connect
} // namespace QtAws
