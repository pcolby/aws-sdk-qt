// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "xrayresponse.h"
#include "xrayresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::XRayResponse
 * \brief The XRayResponse class provides an interface for XRay responses.
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a XRayResponse object with parent \a parent.
 */
XRayResponse::XRayResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new XRayResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a XRayResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from XRayResponsePrivate.
 */
XRayResponse::XRayResponse(XRayResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void XRayResponse::parseFailure(QIODevice &response)
{
    //Q_D(XRayResponse);
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
 * \class QtAws::XRay::XRayResponsePrivate
 * \brief The XRayResponsePrivate class provides private implementation for XRayResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a XRayResponsePrivate object with public implementation \a q.
 */
XRayResponsePrivate::XRayResponsePrivate(
    XRayResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace XRay
} // namespace QtAws
