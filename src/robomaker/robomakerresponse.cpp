// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "robomakerresponse.h"
#include "robomakerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::RoboMakerResponse
 * \brief The RoboMakerResponse class provides an interface for RoboMaker responses.
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a RoboMakerResponse object with parent \a parent.
 */
RoboMakerResponse::RoboMakerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new RoboMakerResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a RoboMakerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from RoboMakerResponsePrivate.
 */
RoboMakerResponse::RoboMakerResponse(RoboMakerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void RoboMakerResponse::parseFailure(QIODevice &response)
{
    //Q_D(RoboMakerResponse);
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
 * \class QtAws::RoboMaker::RoboMakerResponsePrivate
 * \brief The RoboMakerResponsePrivate class provides private implementation for RoboMakerResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a RoboMakerResponsePrivate object with public implementation \a q.
 */
RoboMakerResponsePrivate::RoboMakerResponsePrivate(
    RoboMakerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace RoboMaker
} // namespace QtAws
