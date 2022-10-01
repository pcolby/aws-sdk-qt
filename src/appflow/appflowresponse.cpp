// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "appflowresponse.h"
#include "appflowresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Appflow {

/*!
 * \class QtAws::Appflow::AppflowResponse
 * \brief The AppflowResponse class provides an interface for Appflow responses.
 *
 * \inmodule QtAwsAppflow
 */

/*!
 * Constructs a AppflowResponse object with parent \a parent.
 */
AppflowResponse::AppflowResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AppflowResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AppflowResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppflowResponsePrivate.
 */
AppflowResponse::AppflowResponse(AppflowResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AppflowResponse::parseFailure(QIODevice &response)
{
    //Q_D(AppflowResponse);
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
 * \class QtAws::Appflow::AppflowResponsePrivate
 * \brief The AppflowResponsePrivate class provides private implementation for AppflowResponse.
 * \internal
 *
 * \inmodule QtAwsAppflow
 */

/*!
 * Constructs a AppflowResponsePrivate object with public implementation \a q.
 */
AppflowResponsePrivate::AppflowResponsePrivate(
    AppflowResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Appflow
} // namespace QtAws
