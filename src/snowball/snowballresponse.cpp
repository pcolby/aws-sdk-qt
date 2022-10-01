// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "snowballresponse.h"
#include "snowballresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::SnowballResponse
 * \brief The SnowballResponse class provides an interface for Snowball responses.
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a SnowballResponse object with parent \a parent.
 */
SnowballResponse::SnowballResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SnowballResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SnowballResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SnowballResponsePrivate.
 */
SnowballResponse::SnowballResponse(SnowballResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SnowballResponse::parseFailure(QIODevice &response)
{
    //Q_D(SnowballResponse);
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
 * \class QtAws::Snowball::SnowballResponsePrivate
 * \brief The SnowballResponsePrivate class provides private implementation for SnowballResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a SnowballResponsePrivate object with public implementation \a q.
 */
SnowballResponsePrivate::SnowballResponsePrivate(
    SnowballResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Snowball
} // namespace QtAws
