// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "kafkaresponse.h"
#include "kafkaresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::KafkaResponse
 * \brief The KafkaResponse class provides an interface for Kafka responses.
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a KafkaResponse object with parent \a parent.
 */
KafkaResponse::KafkaResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new KafkaResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a KafkaResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KafkaResponsePrivate.
 */
KafkaResponse::KafkaResponse(KafkaResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void KafkaResponse::parseFailure(QIODevice &response)
{
    //Q_D(KafkaResponse);
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
 * \class QtAws::Kafka::KafkaResponsePrivate
 * \brief The KafkaResponsePrivate class provides private implementation for KafkaResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a KafkaResponsePrivate object with public implementation \a q.
 */
KafkaResponsePrivate::KafkaResponsePrivate(
    KafkaResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Kafka
} // namespace QtAws
