/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
