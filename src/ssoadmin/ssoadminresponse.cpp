// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ssoadminresponse.h"
#include "ssoadminresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsoAdmin {

/*!
 * \class QtAws::SsoAdmin::SsoAdminResponse
 * \brief The SsoAdminResponse class provides an interface for SsoAdmin responses.
 *
 * \inmodule QtAwsSsoAdmin
 */

/*!
 * Constructs a SsoAdminResponse object with parent \a parent.
 */
SsoAdminResponse::SsoAdminResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SsoAdminResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a SsoAdminResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SsoAdminResponsePrivate.
 */
SsoAdminResponse::SsoAdminResponse(SsoAdminResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void SsoAdminResponse::parseFailure(QIODevice &response)
{
    //Q_D(SsoAdminResponse);
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
 * \class QtAws::SsoAdmin::SsoAdminResponsePrivate
 * \brief The SsoAdminResponsePrivate class provides private implementation for SsoAdminResponse.
 * \internal
 *
 * \inmodule QtAwsSsoAdmin
 */

/*!
 * Constructs a SsoAdminResponsePrivate object with public implementation \a q.
 */
SsoAdminResponsePrivate::SsoAdminResponsePrivate(
    SsoAdminResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SsoAdmin
} // namespace QtAws
