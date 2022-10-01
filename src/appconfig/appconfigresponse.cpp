// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "appconfigresponse.h"
#include "appconfigresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppConfig {

/*!
 * \class QtAws::AppConfig::AppConfigResponse
 * \brief The AppConfigResponse class provides an interface for AppConfig responses.
 *
 * \inmodule QtAwsAppConfig
 */

/*!
 * Constructs a AppConfigResponse object with parent \a parent.
 */
AppConfigResponse::AppConfigResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AppConfigResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AppConfigResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppConfigResponsePrivate.
 */
AppConfigResponse::AppConfigResponse(AppConfigResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AppConfigResponse::parseFailure(QIODevice &response)
{
    //Q_D(AppConfigResponse);
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
 * \class QtAws::AppConfig::AppConfigResponsePrivate
 * \brief The AppConfigResponsePrivate class provides private implementation for AppConfigResponse.
 * \internal
 *
 * \inmodule QtAwsAppConfig
 */

/*!
 * Constructs a AppConfigResponsePrivate object with public implementation \a q.
 */
AppConfigResponsePrivate::AppConfigResponsePrivate(
    AppConfigResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AppConfig
} // namespace QtAws
