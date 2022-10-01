// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "healthlakeresponse.h"
#include "healthlakeresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::HealthLakeResponse
 * \brief The HealthLakeResponse class provides an interface for HealthLake responses.
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a HealthLakeResponse object with parent \a parent.
 */
HealthLakeResponse::HealthLakeResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new HealthLakeResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a HealthLakeResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from HealthLakeResponsePrivate.
 */
HealthLakeResponse::HealthLakeResponse(HealthLakeResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void HealthLakeResponse::parseFailure(QIODevice &response)
{
    //Q_D(HealthLakeResponse);
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
 * \class QtAws::HealthLake::HealthLakeResponsePrivate
 * \brief The HealthLakeResponsePrivate class provides private implementation for HealthLakeResponse.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a HealthLakeResponsePrivate object with public implementation \a q.
 */
HealthLakeResponsePrivate::HealthLakeResponsePrivate(
    HealthLakeResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace HealthLake
} // namespace QtAws
