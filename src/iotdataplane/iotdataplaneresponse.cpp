// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iotdataplaneresponse.h"
#include "iotdataplaneresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::IoTDataPlaneResponse
 * \brief The IoTDataPlaneResponse class provides an interface for IoTDataPlane responses.
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a IoTDataPlaneResponse object with parent \a parent.
 */
IoTDataPlaneResponse::IoTDataPlaneResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoTDataPlaneResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoTDataPlaneResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTDataPlaneResponsePrivate.
 */
IoTDataPlaneResponse::IoTDataPlaneResponse(IoTDataPlaneResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoTDataPlaneResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoTDataPlaneResponse);
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
 * \class QtAws::IoTDataPlane::IoTDataPlaneResponsePrivate
 * \brief The IoTDataPlaneResponsePrivate class provides private implementation for IoTDataPlaneResponse.
 * \internal
 *
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a IoTDataPlaneResponsePrivate object with public implementation \a q.
 */
IoTDataPlaneResponsePrivate::IoTDataPlaneResponsePrivate(
    IoTDataPlaneResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoTDataPlane
} // namespace QtAws
