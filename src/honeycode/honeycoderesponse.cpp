// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "honeycoderesponse.h"
#include "honeycoderesponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::HoneycodeResponse
 * \brief The HoneycodeResponse class provides an interface for Honeycode responses.
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a HoneycodeResponse object with parent \a parent.
 */
HoneycodeResponse::HoneycodeResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new HoneycodeResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a HoneycodeResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from HoneycodeResponsePrivate.
 */
HoneycodeResponse::HoneycodeResponse(HoneycodeResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void HoneycodeResponse::parseFailure(QIODevice &response)
{
    //Q_D(HoneycodeResponse);
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
 * \class QtAws::Honeycode::HoneycodeResponsePrivate
 * \brief The HoneycodeResponsePrivate class provides private implementation for HoneycodeResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a HoneycodeResponsePrivate object with public implementation \a q.
 */
HoneycodeResponsePrivate::HoneycodeResponsePrivate(
    HoneycodeResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Honeycode
} // namespace QtAws
