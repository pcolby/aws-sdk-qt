// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "auditmanagerresponse.h"
#include "auditmanagerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AuditManager {

/*!
 * \class QtAws::AuditManager::AuditManagerResponse
 * \brief The AuditManagerResponse class provides an interface for AuditManager responses.
 *
 * \inmodule QtAwsAuditManager
 */

/*!
 * Constructs a AuditManagerResponse object with parent \a parent.
 */
AuditManagerResponse::AuditManagerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AuditManagerResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a AuditManagerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AuditManagerResponsePrivate.
 */
AuditManagerResponse::AuditManagerResponse(AuditManagerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void AuditManagerResponse::parseFailure(QIODevice &response)
{
    //Q_D(AuditManagerResponse);
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
 * \class QtAws::AuditManager::AuditManagerResponsePrivate
 * \brief The AuditManagerResponsePrivate class provides private implementation for AuditManagerResponse.
 * \internal
 *
 * \inmodule QtAwsAuditManager
 */

/*!
 * Constructs a AuditManagerResponsePrivate object with public implementation \a q.
 */
AuditManagerResponsePrivate::AuditManagerResponsePrivate(
    AuditManagerResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace AuditManager
} // namespace QtAws
