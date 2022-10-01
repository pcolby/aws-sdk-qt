// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "controltowerresponse.h"
#include "controltowerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ControlTower {

/*!
 * \class QtAws::ControlTower::ControlTowerResponse
 * \brief The ControlTowerResponse class provides an interface for ControlTower responses.
 *
 * \inmodule QtAwsControlTower
 */

/*!
 * Constructs a ControlTowerResponse object with parent \a parent.
 */
ControlTowerResponse::ControlTowerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ControlTowerResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ControlTowerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ControlTowerResponsePrivate.
 */
ControlTowerResponse::ControlTowerResponse(ControlTowerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ControlTowerResponse::parseFailure(QIODevice &response)
{
    //Q_D(ControlTowerResponse);
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
 * \class QtAws::ControlTower::ControlTowerResponsePrivate
 * \brief The ControlTowerResponsePrivate class provides private implementation for ControlTowerResponse.
 * \internal
 *
 * \inmodule QtAwsControlTower
 */

/*!
 * Constructs a ControlTowerResponsePrivate object with public implementation \a q.
 */
ControlTowerResponsePrivate::ControlTowerResponsePrivate(
    ControlTowerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ControlTower
} // namespace QtAws
