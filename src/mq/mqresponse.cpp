// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mqresponse.h"
#include "mqresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::MqResponse
 * \brief The MqResponse class provides an interface for Mq responses.
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a MqResponse object with parent \a parent.
 */
MqResponse::MqResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MqResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MqResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MqResponsePrivate.
 */
MqResponse::MqResponse(MqResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MqResponse::parseFailure(QIODevice &response)
{
    //Q_D(MqResponse);
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
 * \class QtAws::Mq::MqResponsePrivate
 * \brief The MqResponsePrivate class provides private implementation for MqResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a MqResponsePrivate object with public implementation \a q.
 */
MqResponsePrivate::MqResponsePrivate(
    MqResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Mq
} // namespace QtAws
