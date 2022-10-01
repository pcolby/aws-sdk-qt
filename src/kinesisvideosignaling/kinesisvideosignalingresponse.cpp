// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "kinesisvideosignalingresponse.h"
#include "kinesisvideosignalingresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoSignaling {

/*!
 * \class QtAws::KinesisVideoSignaling::KinesisVideoSignalingResponse
 * \brief The KinesisVideoSignalingResponse class provides an interface for KinesisVideoSignaling responses.
 *
 * \inmodule QtAwsKinesisVideoSignaling
 */

/*!
 * Constructs a KinesisVideoSignalingResponse object with parent \a parent.
 */
KinesisVideoSignalingResponse::KinesisVideoSignalingResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new KinesisVideoSignalingResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a KinesisVideoSignalingResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisVideoSignalingResponsePrivate.
 */
KinesisVideoSignalingResponse::KinesisVideoSignalingResponse(KinesisVideoSignalingResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void KinesisVideoSignalingResponse::parseFailure(QIODevice &response)
{
    //Q_D(KinesisVideoSignalingResponse);
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
 * \class QtAws::KinesisVideoSignaling::KinesisVideoSignalingResponsePrivate
 * \brief The KinesisVideoSignalingResponsePrivate class provides private implementation for KinesisVideoSignalingResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideoSignaling
 */

/*!
 * Constructs a KinesisVideoSignalingResponsePrivate object with public implementation \a q.
 */
KinesisVideoSignalingResponsePrivate::KinesisVideoSignalingResponsePrivate(
    KinesisVideoSignalingResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace KinesisVideoSignaling
} // namespace QtAws
