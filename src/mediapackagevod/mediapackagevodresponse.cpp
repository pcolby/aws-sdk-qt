// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mediapackagevodresponse.h"
#include "mediapackagevodresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::MediaPackageVodResponse
 * \brief The MediaPackageVodResponse class provides an interface for MediaPackageVod responses.
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a MediaPackageVodResponse object with parent \a parent.
 */
MediaPackageVodResponse::MediaPackageVodResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MediaPackageVodResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MediaPackageVodResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaPackageVodResponsePrivate.
 */
MediaPackageVodResponse::MediaPackageVodResponse(MediaPackageVodResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MediaPackageVodResponse::parseFailure(QIODevice &response)
{
    //Q_D(MediaPackageVodResponse);
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
 * \class QtAws::MediaPackageVod::MediaPackageVodResponsePrivate
 * \brief The MediaPackageVodResponsePrivate class provides private implementation for MediaPackageVodResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a MediaPackageVodResponsePrivate object with public implementation \a q.
 */
MediaPackageVodResponsePrivate::MediaPackageVodResponsePrivate(
    MediaPackageVodResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MediaPackageVod
} // namespace QtAws
