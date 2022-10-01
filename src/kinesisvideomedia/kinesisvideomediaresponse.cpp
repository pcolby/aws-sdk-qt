// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "kinesisvideomediaresponse.h"
#include "kinesisvideomediaresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoMedia {

/*!
 * \class QtAws::KinesisVideoMedia::KinesisVideoMediaResponse
 * \brief The KinesisVideoMediaResponse class provides an interface for KinesisVideoMedia responses.
 *
 * \inmodule QtAwsKinesisVideoMedia
 */

/*!
 * Constructs a KinesisVideoMediaResponse object with parent \a parent.
 */
KinesisVideoMediaResponse::KinesisVideoMediaResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new KinesisVideoMediaResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a KinesisVideoMediaResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisVideoMediaResponsePrivate.
 */
KinesisVideoMediaResponse::KinesisVideoMediaResponse(KinesisVideoMediaResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void KinesisVideoMediaResponse::parseFailure(QIODevice &response)
{
    //Q_D(KinesisVideoMediaResponse);
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
 * \class QtAws::KinesisVideoMedia::KinesisVideoMediaResponsePrivate
 * \brief The KinesisVideoMediaResponsePrivate class provides private implementation for KinesisVideoMediaResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoMedia
 */

/*!
 * Constructs a KinesisVideoMediaResponsePrivate object with public implementation \a q.
 */
KinesisVideoMediaResponsePrivate::KinesisVideoMediaResponsePrivate(
    KinesisVideoMediaResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace KinesisVideoMedia
} // namespace QtAws
