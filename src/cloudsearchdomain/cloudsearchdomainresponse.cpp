/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new CloudSearchDomainResponsePrivate(this))
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
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
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
    CloudSearchDomainResponse * const q) : q_ptr(q)
{

}

} // namespace CloudSearchDomain
} // namespace QtAws
