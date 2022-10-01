// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "servicequotasresponse.h"
#include "servicequotasresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceQuotas {

/*!
 * \class QtAws::ServiceQuotas::ServiceQuotasResponse
 * \brief The ServiceQuotasResponse class provides an interface for ServiceQuotas responses.
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a ServiceQuotasResponse object with parent \a parent.
 */
ServiceQuotasResponse::ServiceQuotasResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ServiceQuotasResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ServiceQuotasResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ServiceQuotasResponsePrivate.
 */
ServiceQuotasResponse::ServiceQuotasResponse(ServiceQuotasResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ServiceQuotasResponse::parseFailure(QIODevice &response)
{
    //Q_D(ServiceQuotasResponse);
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
 * \class QtAws::ServiceQuotas::ServiceQuotasResponsePrivate
 * \brief The ServiceQuotasResponsePrivate class provides private implementation for ServiceQuotasResponse.
 * \internal
 *
 * \inmodule QtAwsServiceQuotas
 */

/*!
 * Constructs a ServiceQuotasResponsePrivate object with public implementation \a q.
 */
ServiceQuotasResponsePrivate::ServiceQuotasResponsePrivate(
    ServiceQuotasResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ServiceQuotas
} // namespace QtAws
