// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "kafkaconnectresponse.h"
#include "kafkaconnectresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::KafkaConnectResponse
 * \brief The KafkaConnectResponse class provides an interface for KafkaConnect responses.
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a KafkaConnectResponse object with parent \a parent.
 */
KafkaConnectResponse::KafkaConnectResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new KafkaConnectResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a KafkaConnectResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KafkaConnectResponsePrivate.
 */
KafkaConnectResponse::KafkaConnectResponse(KafkaConnectResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void KafkaConnectResponse::parseFailure(QIODevice &response)
{
    //Q_D(KafkaConnectResponse);
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
 * \class QtAws::KafkaConnect::KafkaConnectResponsePrivate
 * \brief The KafkaConnectResponsePrivate class provides private implementation for KafkaConnectResponse.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a KafkaConnectResponsePrivate object with public implementation \a q.
 */
KafkaConnectResponsePrivate::KafkaConnectResponsePrivate(
    KafkaConnectResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace KafkaConnect
} // namespace QtAws
