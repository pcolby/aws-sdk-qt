// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateserviceactionwithprovisioningartifactresponse.h"
#include "associateserviceactionwithprovisioningartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AssociateServiceActionWithProvisioningArtifactResponse
 * \brief The AssociateServiceActionWithProvisioningArtifactResponse class provides an interace for ServiceCatalog AssociateServiceActionWithProvisioningArtifact responses.
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
 * \sa ServiceCatalogClient::associateServiceActionWithProvisioningArtifact
 */

/*!
 * Constructs a AssociateServiceActionWithProvisioningArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateServiceActionWithProvisioningArtifactResponse::AssociateServiceActionWithProvisioningArtifactResponse(
        const AssociateServiceActionWithProvisioningArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new AssociateServiceActionWithProvisioningArtifactResponsePrivate(this), parent)
{
    setRequest(new AssociateServiceActionWithProvisioningArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateServiceActionWithProvisioningArtifactRequest * AssociateServiceActionWithProvisioningArtifactResponse::request() const
{
    Q_D(const AssociateServiceActionWithProvisioningArtifactResponse);
    return static_cast<const AssociateServiceActionWithProvisioningArtifactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog AssociateServiceActionWithProvisioningArtifact \a response.
 */
void AssociateServiceActionWithProvisioningArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateServiceActionWithProvisioningArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::AssociateServiceActionWithProvisioningArtifactResponsePrivate
 * \brief The AssociateServiceActionWithProvisioningArtifactResponsePrivate class provides private implementation for AssociateServiceActionWithProvisioningArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a AssociateServiceActionWithProvisioningArtifactResponsePrivate object with public implementation \a q.
 */
AssociateServiceActionWithProvisioningArtifactResponsePrivate::AssociateServiceActionWithProvisioningArtifactResponsePrivate(
    AssociateServiceActionWithProvisioningArtifactResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog AssociateServiceActionWithProvisioningArtifact response element from \a xml.
 */
void AssociateServiceActionWithProvisioningArtifactResponsePrivate::parseAssociateServiceActionWithProvisioningArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateServiceActionWithProvisioningArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
