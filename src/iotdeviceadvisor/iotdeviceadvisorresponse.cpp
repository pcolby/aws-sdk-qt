// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iotdeviceadvisorresponse.h"
#include "iotdeviceadvisorresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IotDeviceAdvisor {

/*!
 * \class QtAws::IotDeviceAdvisor::IotDeviceAdvisorResponse
 * \brief The IotDeviceAdvisorResponse class provides an interface for IotDeviceAdvisor responses.
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a IotDeviceAdvisorResponse object with parent \a parent.
 */
IotDeviceAdvisorResponse::IotDeviceAdvisorResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IotDeviceAdvisorResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IotDeviceAdvisorResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IotDeviceAdvisorResponsePrivate.
 */
IotDeviceAdvisorResponse::IotDeviceAdvisorResponse(IotDeviceAdvisorResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IotDeviceAdvisorResponse::parseFailure(QIODevice &response)
{
    //Q_D(IotDeviceAdvisorResponse);
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
 * \class QtAws::IotDeviceAdvisor::IotDeviceAdvisorResponsePrivate
 * \brief The IotDeviceAdvisorResponsePrivate class provides private implementation for IotDeviceAdvisorResponse.
 * \internal
 *
 * \inmodule QtAwsIotDeviceAdvisor
 */

/*!
 * Constructs a IotDeviceAdvisorResponsePrivate object with public implementation \a q.
 */
IotDeviceAdvisorResponsePrivate::IotDeviceAdvisorResponsePrivate(
    IotDeviceAdvisorResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IotDeviceAdvisor
} // namespace QtAws
