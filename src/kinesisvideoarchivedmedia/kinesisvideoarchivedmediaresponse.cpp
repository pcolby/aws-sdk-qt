// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "kinesisvideoarchivedmediaresponse.h"
#include "kinesisvideoarchivedmediaresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoArchivedMedia {

/*!
 * \class QtAws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaResponse
 * \brief The KinesisVideoArchivedMediaResponse class provides an interface for KinesisVideoArchivedMedia responses.
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a KinesisVideoArchivedMediaResponse object with parent \a parent.
 */
KinesisVideoArchivedMediaResponse::KinesisVideoArchivedMediaResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new KinesisVideoArchivedMediaResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a KinesisVideoArchivedMediaResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisVideoArchivedMediaResponsePrivate.
 */
KinesisVideoArchivedMediaResponse::KinesisVideoArchivedMediaResponse(KinesisVideoArchivedMediaResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void KinesisVideoArchivedMediaResponse::parseFailure(QIODevice &response)
{
    //Q_D(KinesisVideoArchivedMediaResponse);
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
 * \class QtAws::KinesisVideoArchivedMedia::KinesisVideoArchivedMediaResponsePrivate
 * \brief The KinesisVideoArchivedMediaResponsePrivate class provides private implementation for KinesisVideoArchivedMediaResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoArchivedMedia
 */

/*!
 * Constructs a KinesisVideoArchivedMediaResponsePrivate object with public implementation \a q.
 */
KinesisVideoArchivedMediaResponsePrivate::KinesisVideoArchivedMediaResponsePrivate(
    KinesisVideoArchivedMediaResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws
