// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "globalacceleratorresponse.h"
#include "globalacceleratorresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlobalAccelerator {

/*!
 * \class QtAws::GlobalAccelerator::GlobalAcceleratorResponse
 * \brief The GlobalAcceleratorResponse class provides an interface for GlobalAccelerator responses.
 *
 * \inmodule QtAwsGlobalAccelerator
 */

/*!
 * Constructs a GlobalAcceleratorResponse object with parent \a parent.
 */
GlobalAcceleratorResponse::GlobalAcceleratorResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GlobalAcceleratorResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a GlobalAcceleratorResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GlobalAcceleratorResponsePrivate.
 */
GlobalAcceleratorResponse::GlobalAcceleratorResponse(GlobalAcceleratorResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void GlobalAcceleratorResponse::parseFailure(QIODevice &response)
{
    //Q_D(GlobalAcceleratorResponse);
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
 * \class QtAws::GlobalAccelerator::GlobalAcceleratorResponsePrivate
 * \brief The GlobalAcceleratorResponsePrivate class provides private implementation for GlobalAcceleratorResponse.
 * \internal
 *
 * \inmodule QtAwsGlobalAccelerator
 */

/*!
 * Constructs a GlobalAcceleratorResponsePrivate object with public implementation \a q.
 */
GlobalAcceleratorResponsePrivate::GlobalAcceleratorResponsePrivate(
    GlobalAcceleratorResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace GlobalAccelerator
} // namespace QtAws
