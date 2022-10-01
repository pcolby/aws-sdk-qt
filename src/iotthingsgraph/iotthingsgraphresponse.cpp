// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iotthingsgraphresponse.h"
#include "iotthingsgraphresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTThingsGraph {

/*!
 * \class QtAws::IoTThingsGraph::IoTThingsGraphResponse
 * \brief The IoTThingsGraphResponse class provides an interface for IoTThingsGraph responses.
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a IoTThingsGraphResponse object with parent \a parent.
 */
IoTThingsGraphResponse::IoTThingsGraphResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IoTThingsGraphResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a IoTThingsGraphResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTThingsGraphResponsePrivate.
 */
IoTThingsGraphResponse::IoTThingsGraphResponse(IoTThingsGraphResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void IoTThingsGraphResponse::parseFailure(QIODevice &response)
{
    //Q_D(IoTThingsGraphResponse);
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
 * \class QtAws::IoTThingsGraph::IoTThingsGraphResponsePrivate
 * \brief The IoTThingsGraphResponsePrivate class provides private implementation for IoTThingsGraphResponse.
 * \internal
 *
 * \inmodule QtAwsIoTThingsGraph
 */

/*!
 * Constructs a IoTThingsGraphResponsePrivate object with public implementation \a q.
 */
IoTThingsGraphResponsePrivate::IoTThingsGraphResponsePrivate(
    IoTThingsGraphResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace IoTThingsGraph
} // namespace QtAws
