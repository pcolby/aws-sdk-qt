// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ioteventsdataresponse.h"
#include "ioteventsdataresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEventsData {

/*!
 * \class QtAws::IoTEventsData::IoTEventsDataResponse
 * \brief The IoTEventsDataResponse class provides an interface for IoTEventsData responses.
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a IoTEventsDataResponse object with parent \a parent.
 */
IoTEventsDataResponse::IoTEventsDataResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoTEventsDataResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoTEventsDataResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTEventsDataResponsePrivate.
 */
IoTEventsDataResponse::IoTEventsDataResponse(IoTEventsDataResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoTEventsDataResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoTEventsDataResponse);
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
 * \class QtAws::IoTEventsData::IoTEventsDataResponsePrivate
 * \brief The IoTEventsDataResponsePrivate class provides private implementation for IoTEventsDataResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEventsData
 */

/*!
 * Constructs a IoTEventsDataResponsePrivate object with public implementation \a q.
 */
IoTEventsDataResponsePrivate::IoTEventsDataResponsePrivate(
    IoTEventsDataResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoTEventsData
} // namespace QtAws
