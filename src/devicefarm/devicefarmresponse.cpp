// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "devicefarmresponse.h"
#include "devicefarmresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeviceFarmResponse
 * \brief The DeviceFarmResponse class provides an interface for DeviceFarm responses.
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeviceFarmResponse object with parent \a parent.
 */
DeviceFarmResponse::DeviceFarmResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DeviceFarmResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a DeviceFarmResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DeviceFarmResponsePrivate.
 */
DeviceFarmResponse::DeviceFarmResponse(DeviceFarmResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void DeviceFarmResponse::parseFailure(QIODevice &response)
{
    //Q_D(DeviceFarmResponse);
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
 * \class QtAws::DeviceFarm::DeviceFarmResponsePrivate
 * \brief The DeviceFarmResponsePrivate class provides private implementation for DeviceFarmResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeviceFarmResponsePrivate object with public implementation \a q.
 */
DeviceFarmResponsePrivate::DeviceFarmResponsePrivate(
    DeviceFarmResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
