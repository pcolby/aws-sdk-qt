// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lightsailresponse.h"
#include "lightsailresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::LightsailResponse
 * \brief The LightsailResponse class provides an interface for Lightsail responses.
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a LightsailResponse object with parent \a parent.
 */
LightsailResponse::LightsailResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new LightsailResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a LightsailResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LightsailResponsePrivate.
 */
LightsailResponse::LightsailResponse(LightsailResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void LightsailResponse::parseFailure(QIODevice &response)
{
    //Q_D(LightsailResponse);
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
 * \class QtAws::Lightsail::LightsailResponsePrivate
 * \brief The LightsailResponsePrivate class provides private implementation for LightsailResponse.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a LightsailResponsePrivate object with public implementation \a q.
 */
LightsailResponsePrivate::LightsailResponsePrivate(
    LightsailResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Lightsail
} // namespace QtAws
