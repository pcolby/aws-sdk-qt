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

#include "describeprovisioningartifactresponse.h"
#include "describeprovisioningartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeProvisioningArtifactResponse
 * \brief The DescribeProvisioningArtifactResponse class provides an interace for ServiceCatalog DescribeProvisioningArtifact responses.
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
 * \sa ServiceCatalogClient::describeProvisioningArtifact
 */

/*!
 * Constructs a DescribeProvisioningArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProvisioningArtifactResponse::DescribeProvisioningArtifactResponse(
        const DescribeProvisioningArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeProvisioningArtifactResponsePrivate(this), parent)
{
    setRequest(new DescribeProvisioningArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProvisioningArtifactRequest * DescribeProvisioningArtifactResponse::request() const
{
    Q_D(const DescribeProvisioningArtifactResponse);
    return static_cast<const DescribeProvisioningArtifactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DescribeProvisioningArtifact \a response.
 */
void DescribeProvisioningArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProvisioningArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DescribeProvisioningArtifactResponsePrivate
 * \brief The DescribeProvisioningArtifactResponsePrivate class provides private implementation for DescribeProvisioningArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeProvisioningArtifactResponsePrivate object with public implementation \a q.
 */
DescribeProvisioningArtifactResponsePrivate::DescribeProvisioningArtifactResponsePrivate(
    DescribeProvisioningArtifactResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DescribeProvisioningArtifact response element from \a xml.
 */
void DescribeProvisioningArtifactResponsePrivate::parseDescribeProvisioningArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProvisioningArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
