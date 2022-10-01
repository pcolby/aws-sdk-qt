// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "groundstationresponse.h"
#include "groundstationresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::GroundStationResponse
 * \brief The GroundStationResponse class provides an interface for GroundStation responses.
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GroundStationResponse object with parent \a parent.
 */
GroundStationResponse::GroundStationResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GroundStationResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a GroundStationResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GroundStationResponsePrivate.
 */
GroundStationResponse::GroundStationResponse(GroundStationResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void GroundStationResponse::parseFailure(QIODevice &response)
{
    //Q_D(GroundStationResponse);
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
 * \class QtAws::GroundStation::GroundStationResponsePrivate
 * \brief The GroundStationResponsePrivate class provides private implementation for GroundStationResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GroundStationResponsePrivate object with public implementation \a q.
 */
GroundStationResponsePrivate::GroundStationResponsePrivate(
    GroundStationResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace GroundStation
} // namespace QtAws
