// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
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
