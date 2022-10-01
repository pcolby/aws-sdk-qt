// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "kinesisresponse.h"
#include "kinesisresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::KinesisResponse
 * \brief The KinesisResponse class provides an interface for Kinesis responses.
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a KinesisResponse object with parent \a parent.
 */
KinesisResponse::KinesisResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new KinesisResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a KinesisResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisResponsePrivate.
 */
KinesisResponse::KinesisResponse(KinesisResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void KinesisResponse::parseFailure(QIODevice &response)
{
    //Q_D(KinesisResponse);
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
 * \class QtAws::Kinesis::KinesisResponsePrivate
 * \brief The KinesisResponsePrivate class provides private implementation for KinesisResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a KinesisResponsePrivate object with public implementation \a q.
 */
KinesisResponsePrivate::KinesisResponsePrivate(
    KinesisResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Kinesis
} // namespace QtAws
