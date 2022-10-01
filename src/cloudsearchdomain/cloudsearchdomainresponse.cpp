// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudsearchdomainresponse.h"
#include "cloudsearchdomainresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearchDomain {

/*!
 * \class QtAws::CloudSearchDomain::CloudSearchDomainResponse
 * \brief The CloudSearchDomainResponse class provides an interface for CloudSearchDomain responses.
 *
 * \inmodule QtAwsCloudSearchDomain
 */

/*!
 * Constructs a CloudSearchDomainResponse object with parent \a parent.
 */
CloudSearchDomainResponse::CloudSearchDomainResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudSearchDomainResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CloudSearchDomainResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudSearchDomainResponsePrivate.
 */
CloudSearchDomainResponse::CloudSearchDomainResponse(CloudSearchDomainResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CloudSearchDomainResponse::parseFailure(QIODevice &response)
{
    //Q_D(CloudSearchDomainResponse);
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
 * \class QtAws::CloudSearchDomain::CloudSearchDomainResponsePrivate
 * \brief The CloudSearchDomainResponsePrivate class provides private implementation for CloudSearchDomainResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearchDomain
 */

/*!
 * Constructs a CloudSearchDomainResponsePrivate object with public implementation \a q.
 */
CloudSearchDomainResponsePrivate::CloudSearchDomainResponsePrivate(
    CloudSearchDomainResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CloudSearchDomain
} // namespace QtAws
