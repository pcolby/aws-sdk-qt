// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "pollyresponse.h"
#include "pollyresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::PollyResponse
 * \brief The PollyResponse class provides an interface for Polly responses.
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a PollyResponse object with parent \a parent.
 */
PollyResponse::PollyResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new PollyResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a PollyResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PollyResponsePrivate.
 */
PollyResponse::PollyResponse(PollyResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void PollyResponse::parseFailure(QIODevice &response)
{
    //Q_D(PollyResponse);
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
 * \class QtAws::Polly::PollyResponsePrivate
 * \brief The PollyResponsePrivate class provides private implementation for PollyResponse.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a PollyResponsePrivate object with public implementation \a q.
 */
PollyResponsePrivate::PollyResponsePrivate(
    PollyResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Polly
} // namespace QtAws
