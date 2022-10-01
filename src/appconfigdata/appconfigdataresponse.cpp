// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "appconfigdataresponse.h"
#include "appconfigdataresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppConfigData {

/*!
 * \class QtAws::AppConfigData::AppConfigDataResponse
 * \brief The AppConfigDataResponse class provides an interface for AppConfigData responses.
 *
 * \inmodule QtAwsAppConfigData
 */

/*!
 * Constructs a AppConfigDataResponse object with parent \a parent.
 */
AppConfigDataResponse::AppConfigDataResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AppConfigDataResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AppConfigDataResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppConfigDataResponsePrivate.
 */
AppConfigDataResponse::AppConfigDataResponse(AppConfigDataResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AppConfigDataResponse::parseFailure(QIODevice &response)
{
    //Q_D(AppConfigDataResponse);
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
 * \class QtAws::AppConfigData::AppConfigDataResponsePrivate
 * \brief The AppConfigDataResponsePrivate class provides private implementation for AppConfigDataResponse.
 * \internal
 *
 * \inmodule QtAwsAppConfigData
 */

/*!
 * Constructs a AppConfigDataResponsePrivate object with public implementation \a q.
 */
AppConfigDataResponsePrivate::AppConfigDataResponsePrivate(
    AppConfigDataResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AppConfigData
} // namespace QtAws
