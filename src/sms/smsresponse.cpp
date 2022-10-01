// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "smsresponse.h"
#include "smsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::SmsResponse
 * \brief The SmsResponse class provides an interface for Sms responses.
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a SmsResponse object with parent \a parent.
 */
SmsResponse::SmsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SmsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SmsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SmsResponsePrivate.
 */
SmsResponse::SmsResponse(SmsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SmsResponse::parseFailure(QIODevice &response)
{
    //Q_D(SmsResponse);
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
 * \class QtAws::Sms::SmsResponsePrivate
 * \brief The SmsResponsePrivate class provides private implementation for SmsResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a SmsResponsePrivate object with public implementation \a q.
 */
SmsResponsePrivate::SmsResponsePrivate(
    SmsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Sms
} // namespace QtAws
