// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "appsyncresponse.h"
#include "appsyncresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::AppSyncResponse
 * \brief The AppSyncResponse class provides an interface for AppSync responses.
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a AppSyncResponse object with parent \a parent.
 */
AppSyncResponse::AppSyncResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AppSyncResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AppSyncResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppSyncResponsePrivate.
 */
AppSyncResponse::AppSyncResponse(AppSyncResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AppSyncResponse::parseFailure(QIODevice &response)
{
    //Q_D(AppSyncResponse);
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
 * \class QtAws::AppSync::AppSyncResponsePrivate
 * \brief The AppSyncResponsePrivate class provides private implementation for AppSyncResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a AppSyncResponsePrivate object with public implementation \a q.
 */
AppSyncResponsePrivate::AppSyncResponsePrivate(
    AppSyncResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AppSync
} // namespace QtAws
