// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "healthresponse.h"
#include "healthresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Health {

/*!
 * \class QtAws::Health::HealthResponse
 * \brief The HealthResponse class provides an interface for Health responses.
 *
 * \inmodule QtAwsHealth
 */

/*!
 * Constructs a HealthResponse object with parent \a parent.
 */
HealthResponse::HealthResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new HealthResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a HealthResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from HealthResponsePrivate.
 */
HealthResponse::HealthResponse(HealthResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void HealthResponse::parseFailure(QIODevice &response)
{
    //Q_D(HealthResponse);
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
 * \class QtAws::Health::HealthResponsePrivate
 * \brief The HealthResponsePrivate class provides private implementation for HealthResponse.
 * \internal
 *
 * \inmodule QtAwsHealth
 */

/*!
 * Constructs a HealthResponsePrivate object with public implementation \a q.
 */
HealthResponsePrivate::HealthResponsePrivate(
    HealthResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Health
} // namespace QtAws
