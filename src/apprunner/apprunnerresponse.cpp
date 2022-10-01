// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "apprunnerresponse.h"
#include "apprunnerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppRunner {

/*!
 * \class QtAws::AppRunner::AppRunnerResponse
 * \brief The AppRunnerResponse class provides an interface for AppRunner responses.
 *
 * \inmodule QtAwsAppRunner
 */

/*!
 * Constructs a AppRunnerResponse object with parent \a parent.
 */
AppRunnerResponse::AppRunnerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AppRunnerResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AppRunnerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppRunnerResponsePrivate.
 */
AppRunnerResponse::AppRunnerResponse(AppRunnerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AppRunnerResponse::parseFailure(QIODevice &response)
{
    //Q_D(AppRunnerResponse);
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
 * \class QtAws::AppRunner::AppRunnerResponsePrivate
 * \brief The AppRunnerResponsePrivate class provides private implementation for AppRunnerResponse.
 * \internal
 *
 * \inmodule QtAwsAppRunner
 */

/*!
 * Constructs a AppRunnerResponsePrivate object with public implementation \a q.
 */
AppRunnerResponsePrivate::AppRunnerResponsePrivate(
    AppRunnerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AppRunner
} // namespace QtAws
