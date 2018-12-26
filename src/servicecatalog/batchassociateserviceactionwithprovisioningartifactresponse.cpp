/*
    Copyright 2013-2018 Paul Colby

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

#include "batchassociateserviceactionwithprovisioningartifactresponse.h"
#include "batchassociateserviceactionwithprovisioningartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::BatchAssociateServiceActionWithProvisioningArtifactResponse
 * \brief The BatchAssociateServiceActionWithProvisioningArtifactResponse class provides an interace for ServiceCatalog BatchAssociateServiceActionWithProvisioningArtifact responses.
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
 * \sa ServiceCatalogClient::batchAssociateServiceActionWithProvisioningArtifact
 */

/*!
 * Constructs a BatchAssociateServiceActionWithProvisioningArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
BatchAssociateServiceActionWithProvisioningArtifactResponse::BatchAssociateServiceActionWithProvisioningArtifactResponse(
        const BatchAssociateServiceActionWithProvisioningArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new BatchAssociateServiceActionWithProvisioningArtifactResponsePrivate(this), parent)
{
    setRequest(new BatchAssociateServiceActionWithProvisioningArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchAssociateServiceActionWithProvisioningArtifactRequest * BatchAssociateServiceActionWithProvisioningArtifactResponse::request() const
{
    Q_D(const BatchAssociateServiceActionWithProvisioningArtifactResponse);
    return static_cast<const BatchAssociateServiceActionWithProvisioningArtifactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog BatchAssociateServiceActionWithProvisioningArtifact \a response.
 */
void BatchAssociateServiceActionWithProvisioningArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchAssociateServiceActionWithProvisioningArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::BatchAssociateServiceActionWithProvisioningArtifactResponsePrivate
 * \brief The BatchAssociateServiceActionWithProvisioningArtifactResponsePrivate class provides private implementation for BatchAssociateServiceActionWithProvisioningArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a BatchAssociateServiceActionWithProvisioningArtifactResponsePrivate object with public implementation \a q.
 */
BatchAssociateServiceActionWithProvisioningArtifactResponsePrivate::BatchAssociateServiceActionWithProvisioningArtifactResponsePrivate(
    BatchAssociateServiceActionWithProvisioningArtifactResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog BatchAssociateServiceActionWithProvisioningArtifact response element from \a xml.
 */
void BatchAssociateServiceActionWithProvisioningArtifactResponsePrivate::parseBatchAssociateServiceActionWithProvisioningArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchAssociateServiceActionWithProvisioningArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
