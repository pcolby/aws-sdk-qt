// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mediapackageresponse.h"
#include "mediapackageresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::MediaPackageResponse
 * \brief The MediaPackageResponse class provides an interface for MediaPackage responses.
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a MediaPackageResponse object with parent \a parent.
 */
MediaPackageResponse::MediaPackageResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MediaPackageResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MediaPackageResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaPackageResponsePrivate.
 */
MediaPackageResponse::MediaPackageResponse(MediaPackageResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MediaPackageResponse::parseFailure(QIODevice &response)
{
    //Q_D(MediaPackageResponse);
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
 * \class QtAws::MediaPackage::MediaPackageResponsePrivate
 * \brief The MediaPackageResponsePrivate class provides private implementation for MediaPackageResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a MediaPackageResponsePrivate object with public implementation \a q.
 */
MediaPackageResponsePrivate::MediaPackageResponsePrivate(
    MediaPackageResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MediaPackage
} // namespace QtAws
