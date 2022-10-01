// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "chimeresponse.h"
#include "chimeresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Chime {

/*!
 * \class QtAws::Chime::ChimeResponse
 * \brief The ChimeResponse class provides an interface for Chime responses.
 *
 * \inmodule QtAwsChime
 */

/*!
 * Constructs a ChimeResponse object with parent \a parent.
 */
ChimeResponse::ChimeResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ChimeResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ChimeResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ChimeResponsePrivate.
 */
ChimeResponse::ChimeResponse(ChimeResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ChimeResponse::parseFailure(QIODevice &response)
{
    //Q_D(ChimeResponse);
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
 * \class QtAws::Chime::ChimeResponsePrivate
 * \brief The ChimeResponsePrivate class provides private implementation for ChimeResponse.
 * \internal
 *
 * \inmodule QtAwsChime
 */

/*!
 * Constructs a ChimeResponsePrivate object with public implementation \a q.
 */
ChimeResponsePrivate::ChimeResponsePrivate(
    ChimeResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Chime
} // namespace QtAws
