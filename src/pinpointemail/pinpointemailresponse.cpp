// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "pinpointemailresponse.h"
#include "pinpointemailresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::PinpointEmailResponse
 * \brief The PinpointEmailResponse class provides an interface for PinpointEmail responses.
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a PinpointEmailResponse object with parent \a parent.
 */
PinpointEmailResponse::PinpointEmailResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new PinpointEmailResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a PinpointEmailResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PinpointEmailResponsePrivate.
 */
PinpointEmailResponse::PinpointEmailResponse(PinpointEmailResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void PinpointEmailResponse::parseFailure(QIODevice &response)
{
    //Q_D(PinpointEmailResponse);
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
 * \class QtAws::PinpointEmail::PinpointEmailResponsePrivate
 * \brief The PinpointEmailResponsePrivate class provides private implementation for PinpointEmailResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a PinpointEmailResponsePrivate object with public implementation \a q.
 */
PinpointEmailResponsePrivate::PinpointEmailResponsePrivate(
    PinpointEmailResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace PinpointEmail
} // namespace QtAws
