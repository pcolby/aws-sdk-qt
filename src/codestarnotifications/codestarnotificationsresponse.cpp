// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "codestarnotificationsresponse.h"
#include "codestarnotificationsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodestarNotifications {

/*!
 * \class QtAws::CodestarNotifications::CodestarNotificationsResponse
 * \brief The CodestarNotificationsResponse class provides an interface for CodestarNotifications responses.
 *
 * \inmodule QtAwsCodestarNotifications
 */

/*!
 * Constructs a CodestarNotificationsResponse object with parent \a parent.
 */
CodestarNotificationsResponse::CodestarNotificationsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CodestarNotificationsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CodestarNotificationsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodestarNotificationsResponsePrivate.
 */
CodestarNotificationsResponse::CodestarNotificationsResponse(CodestarNotificationsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CodestarNotificationsResponse::parseFailure(QIODevice &response)
{
    //Q_D(CodestarNotificationsResponse);
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
 * \class QtAws::CodestarNotifications::CodestarNotificationsResponsePrivate
 * \brief The CodestarNotificationsResponsePrivate class provides private implementation for CodestarNotificationsResponse.
 * \internal
 *
 * \inmodule QtAwsCodestarNotifications
 */

/*!
 * Constructs a CodestarNotificationsResponsePrivate object with public implementation \a q.
 */
CodestarNotificationsResponsePrivate::CodestarNotificationsResponsePrivate(
    CodestarNotificationsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CodestarNotifications
} // namespace QtAws
