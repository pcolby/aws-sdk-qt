// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rolesanywhereresponse.h"
#include "rolesanywhereresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace RolesAnywhere {

/*!
 * \class QtAws::RolesAnywhere::RolesAnywhereResponse
 * \brief The RolesAnywhereResponse class provides an interface for RolesAnywhere responses.
 *
 * \inmodule QtAwsRolesAnywhere
 */

/*!
 * Constructs a RolesAnywhereResponse object with parent \a parent.
 */
RolesAnywhereResponse::RolesAnywhereResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RolesAnywhereResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RolesAnywhereResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RolesAnywhereResponsePrivate.
 */
RolesAnywhereResponse::RolesAnywhereResponse(RolesAnywhereResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RolesAnywhereResponse::parseFailure(QIODevice &response)
{
    //Q_D(RolesAnywhereResponse);
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
 * \class QtAws::RolesAnywhere::RolesAnywhereResponsePrivate
 * \brief The RolesAnywhereResponsePrivate class provides private implementation for RolesAnywhereResponse.
 * \internal
 *
 * \inmodule QtAwsRolesAnywhere
 */

/*!
 * Constructs a RolesAnywhereResponsePrivate object with public implementation \a q.
 */
RolesAnywhereResponsePrivate::RolesAnywhereResponsePrivate(
    RolesAnywhereResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace RolesAnywhere
} // namespace QtAws
