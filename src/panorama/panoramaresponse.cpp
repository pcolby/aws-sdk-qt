// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "panoramaresponse.h"
#include "panoramaresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::PanoramaResponse
 * \brief The PanoramaResponse class provides an interface for Panorama responses.
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a PanoramaResponse object with parent \a parent.
 */
PanoramaResponse::PanoramaResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new PanoramaResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a PanoramaResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PanoramaResponsePrivate.
 */
PanoramaResponse::PanoramaResponse(PanoramaResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void PanoramaResponse::parseFailure(QIODevice &response)
{
    //Q_D(PanoramaResponse);
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
 * \class QtAws::Panorama::PanoramaResponsePrivate
 * \brief The PanoramaResponsePrivate class provides private implementation for PanoramaResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a PanoramaResponsePrivate object with public implementation \a q.
 */
PanoramaResponsePrivate::PanoramaResponsePrivate(
    PanoramaResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Panorama
} // namespace QtAws
