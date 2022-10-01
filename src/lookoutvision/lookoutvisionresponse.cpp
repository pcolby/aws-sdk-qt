// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lookoutvisionresponse.h"
#include "lookoutvisionresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::LookoutVisionResponse
 * \brief The LookoutVisionResponse class provides an interface for LookoutVision responses.
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a LookoutVisionResponse object with parent \a parent.
 */
LookoutVisionResponse::LookoutVisionResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new LookoutVisionResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a LookoutVisionResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LookoutVisionResponsePrivate.
 */
LookoutVisionResponse::LookoutVisionResponse(LookoutVisionResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void LookoutVisionResponse::parseFailure(QIODevice &response)
{
    //Q_D(LookoutVisionResponse);
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
 * \class QtAws::LookoutVision::LookoutVisionResponsePrivate
 * \brief The LookoutVisionResponsePrivate class provides private implementation for LookoutVisionResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a LookoutVisionResponsePrivate object with public implementation \a q.
 */
LookoutVisionResponsePrivate::LookoutVisionResponsePrivate(
    LookoutVisionResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace LookoutVision
} // namespace QtAws
