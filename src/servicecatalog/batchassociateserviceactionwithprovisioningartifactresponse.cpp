// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
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
