// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "locationresponse.h"
#include "locationresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::LocationResponse
 * \brief The LocationResponse class provides an interface for Location responses.
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a LocationResponse object with parent \a parent.
 */
LocationResponse::LocationResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new LocationResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a LocationResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LocationResponsePrivate.
 */
LocationResponse::LocationResponse(LocationResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void LocationResponse::parseFailure(QIODevice &response)
{
    //Q_D(LocationResponse);
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
 * \class QtAws::Location::LocationResponsePrivate
 * \brief The LocationResponsePrivate class provides private implementation for LocationResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a LocationResponsePrivate object with public implementation \a q.
 */
LocationResponsePrivate::LocationResponsePrivate(
    LocationResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Location
} // namespace QtAws
