// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "kinesisvideoresponse.h"
#include "kinesisvideoresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::KinesisVideoResponse
 * \brief The KinesisVideoResponse class provides an interface for KinesisVideo responses.
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a KinesisVideoResponse object with parent \a parent.
 */
KinesisVideoResponse::KinesisVideoResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new KinesisVideoResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a KinesisVideoResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisVideoResponsePrivate.
 */
KinesisVideoResponse::KinesisVideoResponse(KinesisVideoResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void KinesisVideoResponse::parseFailure(QIODevice &response)
{
    //Q_D(KinesisVideoResponse);
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
 * \class QtAws::KinesisVideo::KinesisVideoResponsePrivate
 * \brief The KinesisVideoResponsePrivate class provides private implementation for KinesisVideoResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a KinesisVideoResponsePrivate object with public implementation \a q.
 */
KinesisVideoResponsePrivate::KinesisVideoResponsePrivate(
    KinesisVideoResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
