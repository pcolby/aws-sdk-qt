// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mediaconvertresponse.h"
#include "mediaconvertresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::MediaConvertResponse
 * \brief The MediaConvertResponse class provides an interface for MediaConvert responses.
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a MediaConvertResponse object with parent \a parent.
 */
MediaConvertResponse::MediaConvertResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MediaConvertResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MediaConvertResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaConvertResponsePrivate.
 */
MediaConvertResponse::MediaConvertResponse(MediaConvertResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MediaConvertResponse::parseFailure(QIODevice &response)
{
    //Q_D(MediaConvertResponse);
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
 * \class QtAws::MediaConvert::MediaConvertResponsePrivate
 * \brief The MediaConvertResponsePrivate class provides private implementation for MediaConvertResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a MediaConvertResponsePrivate object with public implementation \a q.
 */
MediaConvertResponsePrivate::MediaConvertResponsePrivate(
    MediaConvertResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MediaConvert
} // namespace QtAws
