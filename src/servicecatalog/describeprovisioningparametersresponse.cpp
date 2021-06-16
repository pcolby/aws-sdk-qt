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

#include "describeprovisioningparametersresponse.h"
#include "describeprovisioningparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeProvisioningParametersResponse
 * \brief The DescribeProvisioningParametersResponse class provides an interace for ServiceCatalog DescribeProvisioningParameters responses.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::describeProvisioningParameters
 */

/*!
 * Constructs a DescribeProvisioningParametersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProvisioningParametersResponse::DescribeProvisioningParametersResponse(
        const DescribeProvisioningParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeProvisioningParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeProvisioningParametersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProvisioningParametersRequest * DescribeProvisioningParametersResponse::request() const
{
    Q_D(const DescribeProvisioningParametersResponse);
    return static_cast<const DescribeProvisioningParametersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DescribeProvisioningParameters \a response.
 */
void DescribeProvisioningParametersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProvisioningParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DescribeProvisioningParametersResponsePrivate
 * \brief The DescribeProvisioningParametersResponsePrivate class provides private implementation for DescribeProvisioningParametersResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeProvisioningParametersResponsePrivate object with public implementation \a q.
 */
DescribeProvisioningParametersResponsePrivate::DescribeProvisioningParametersResponsePrivate(
    DescribeProvisioningParametersResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DescribeProvisioningParameters response element from \a xml.
 */
void DescribeProvisioningParametersResponsePrivate::parseDescribeProvisioningParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProvisioningParametersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
