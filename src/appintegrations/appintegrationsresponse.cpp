// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "appintegrationsresponse.h"
#include "appintegrationsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::AppIntegrationsResponse
 * \brief The AppIntegrationsResponse class provides an interface for AppIntegrations responses.
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a AppIntegrationsResponse object with parent \a parent.
 */
AppIntegrationsResponse::AppIntegrationsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AppIntegrationsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AppIntegrationsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppIntegrationsResponsePrivate.
 */
AppIntegrationsResponse::AppIntegrationsResponse(AppIntegrationsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AppIntegrationsResponse::parseFailure(QIODevice &response)
{
    //Q_D(AppIntegrationsResponse);
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
 * \class QtAws::AppIntegrations::AppIntegrationsResponsePrivate
 * \brief The AppIntegrationsResponsePrivate class provides private implementation for AppIntegrationsResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a AppIntegrationsResponsePrivate object with public implementation \a q.
 */
AppIntegrationsResponsePrivate::AppIntegrationsResponsePrivate(
    AppIntegrationsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AppIntegrations
} // namespace QtAws
