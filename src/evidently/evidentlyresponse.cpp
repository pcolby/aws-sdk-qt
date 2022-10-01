// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "evidentlyresponse.h"
#include "evidentlyresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::EvidentlyResponse
 * \brief The EvidentlyResponse class provides an interface for Evidently responses.
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a EvidentlyResponse object with parent \a parent.
 */
EvidentlyResponse::EvidentlyResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new EvidentlyResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a EvidentlyResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EvidentlyResponsePrivate.
 */
EvidentlyResponse::EvidentlyResponse(EvidentlyResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void EvidentlyResponse::parseFailure(QIODevice &response)
{
    //Q_D(EvidentlyResponse);
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
 * \class QtAws::Evidently::EvidentlyResponsePrivate
 * \brief The EvidentlyResponsePrivate class provides private implementation for EvidentlyResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a EvidentlyResponsePrivate object with public implementation \a q.
 */
EvidentlyResponsePrivate::EvidentlyResponsePrivate(
    EvidentlyResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Evidently
} // namespace QtAws
