// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mediatailorresponse.h"
#include "mediatailorresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::MediaTailorResponse
 * \brief The MediaTailorResponse class provides an interface for MediaTailor responses.
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a MediaTailorResponse object with parent \a parent.
 */
MediaTailorResponse::MediaTailorResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MediaTailorResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MediaTailorResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaTailorResponsePrivate.
 */
MediaTailorResponse::MediaTailorResponse(MediaTailorResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MediaTailorResponse::parseFailure(QIODevice &response)
{
    //Q_D(MediaTailorResponse);
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
 * \class QtAws::MediaTailor::MediaTailorResponsePrivate
 * \brief The MediaTailorResponsePrivate class provides private implementation for MediaTailorResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a MediaTailorResponsePrivate object with public implementation \a q.
 */
MediaTailorResponsePrivate::MediaTailorResponsePrivate(
    MediaTailorResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MediaTailor
} // namespace QtAws
