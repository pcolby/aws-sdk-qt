// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iotjobsdataplaneresponse.h"
#include "iotjobsdataplaneresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTJobsDataPlane {

/*!
 * \class QtAws::IoTJobsDataPlane::IoTJobsDataPlaneResponse
 * \brief The IoTJobsDataPlaneResponse class provides an interface for IoTJobsDataPlane responses.
 *
 * \inmodule QtAwsIoTJobsDataPlane
 */

/*!
 * Constructs a IoTJobsDataPlaneResponse object with parent \a parent.
 */
IoTJobsDataPlaneResponse::IoTJobsDataPlaneResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoTJobsDataPlaneResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoTJobsDataPlaneResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTJobsDataPlaneResponsePrivate.
 */
IoTJobsDataPlaneResponse::IoTJobsDataPlaneResponse(IoTJobsDataPlaneResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoTJobsDataPlaneResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoTJobsDataPlaneResponse);
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
 * \class QtAws::IoTJobsDataPlane::IoTJobsDataPlaneResponsePrivate
 * \brief The IoTJobsDataPlaneResponsePrivate class provides private implementation for IoTJobsDataPlaneResponse.
 * \internal
 *
 * \inmodule QtAwsIoTJobsDataPlane
 */

/*!
 * Constructs a IoTJobsDataPlaneResponsePrivate object with public implementation \a q.
 */
IoTJobsDataPlaneResponsePrivate::IoTJobsDataPlaneResponsePrivate(
    IoTJobsDataPlaneResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoTJobsDataPlane
} // namespace QtAws
