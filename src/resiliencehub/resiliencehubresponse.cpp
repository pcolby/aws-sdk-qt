// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resiliencehubresponse.h"
#include "resiliencehubresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ResilienceHubResponse
 * \brief The ResilienceHubResponse class provides an interface for ResilienceHub responses.
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ResilienceHubResponse object with parent \a parent.
 */
ResilienceHubResponse::ResilienceHubResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ResilienceHubResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ResilienceHubResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ResilienceHubResponsePrivate.
 */
ResilienceHubResponse::ResilienceHubResponse(ResilienceHubResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ResilienceHubResponse::parseFailure(QIODevice &response)
{
    //Q_D(ResilienceHubResponse);
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
 * \class QtAws::ResilienceHub::ResilienceHubResponsePrivate
 * \brief The ResilienceHubResponsePrivate class provides private implementation for ResilienceHubResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ResilienceHubResponsePrivate object with public implementation \a q.
 */
ResilienceHubResponsePrivate::ResilienceHubResponsePrivate(
    ResilienceHubResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
