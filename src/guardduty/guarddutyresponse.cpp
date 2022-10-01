// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "guarddutyresponse.h"
#include "guarddutyresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GuardDutyResponse
 * \brief The GuardDutyResponse class provides an interface for GuardDuty responses.
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GuardDutyResponse object with parent \a parent.
 */
GuardDutyResponse::GuardDutyResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GuardDutyResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a GuardDutyResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GuardDutyResponsePrivate.
 */
GuardDutyResponse::GuardDutyResponse(GuardDutyResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void GuardDutyResponse::parseFailure(QIODevice &response)
{
    //Q_D(GuardDutyResponse);
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
 * \class QtAws::GuardDuty::GuardDutyResponsePrivate
 * \brief The GuardDutyResponsePrivate class provides private implementation for GuardDutyResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GuardDutyResponsePrivate object with public implementation \a q.
 */
GuardDutyResponsePrivate::GuardDutyResponsePrivate(
    GuardDutyResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace GuardDuty
} // namespace QtAws
