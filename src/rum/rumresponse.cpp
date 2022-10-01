// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rumresponse.h"
#include "rumresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rum {

/*!
 * \class QtAws::Rum::RumResponse
 * \brief The RumResponse class provides an interface for Rum responses.
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a RumResponse object with parent \a parent.
 */
RumResponse::RumResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RumResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RumResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RumResponsePrivate.
 */
RumResponse::RumResponse(RumResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RumResponse::parseFailure(QIODevice &response)
{
    //Q_D(RumResponse);
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
 * \class QtAws::Rum::RumResponsePrivate
 * \brief The RumResponsePrivate class provides private implementation for RumResponse.
 * \internal
 *
 * \inmodule QtAwsRum
 */

/*!
 * Constructs a RumResponsePrivate object with public implementation \a q.
 */
RumResponsePrivate::RumResponsePrivate(
    RumResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Rum
} // namespace QtAws
