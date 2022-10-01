// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "configserviceresponse.h"
#include "configserviceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::ConfigServiceResponse
 * \brief The ConfigServiceResponse class provides an interface for ConfigService responses.
 *
 * \inmodule QtAwsConfigService
 */

/*!
 * Constructs a ConfigServiceResponse object with parent \a parent.
 */
ConfigServiceResponse::ConfigServiceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ConfigServiceResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ConfigServiceResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ConfigServiceResponsePrivate.
 */
ConfigServiceResponse::ConfigServiceResponse(ConfigServiceResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ConfigServiceResponse::parseFailure(QIODevice &response)
{
    //Q_D(ConfigServiceResponse);
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
 * \class QtAws::ConfigService::ConfigServiceResponsePrivate
 * \brief The ConfigServiceResponsePrivate class provides private implementation for ConfigServiceResponse.
 * \internal
 *
 * \inmodule QtAwsConfigService
 */

/*!
 * Constructs a ConfigServiceResponsePrivate object with public implementation \a q.
 */
ConfigServiceResponsePrivate::ConfigServiceResponsePrivate(
    ConfigServiceResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ConfigService
} // namespace QtAws
