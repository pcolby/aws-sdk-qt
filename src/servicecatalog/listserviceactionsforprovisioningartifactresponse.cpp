// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listserviceactionsforprovisioningartifactresponse.h"
#include "listserviceactionsforprovisioningartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListServiceActionsForProvisioningArtifactResponse
 * \brief The ListServiceActionsForProvisioningArtifactResponse class provides an interace for ServiceCatalog ListServiceActionsForProvisioningArtifact responses.
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
 * \sa ServiceCatalogClient::listServiceActionsForProvisioningArtifact
 */

/*!
 * Constructs a ListServiceActionsForProvisioningArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
ListServiceActionsForProvisioningArtifactResponse::ListServiceActionsForProvisioningArtifactResponse(
        const ListServiceActionsForProvisioningArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListServiceActionsForProvisioningArtifactResponsePrivate(this), parent)
{
    setRequest(new ListServiceActionsForProvisioningArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListServiceActionsForProvisioningArtifactRequest * ListServiceActionsForProvisioningArtifactResponse::request() const
{
    Q_D(const ListServiceActionsForProvisioningArtifactResponse);
    return static_cast<const ListServiceActionsForProvisioningArtifactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListServiceActionsForProvisioningArtifact \a response.
 */
void ListServiceActionsForProvisioningArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListServiceActionsForProvisioningArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListServiceActionsForProvisioningArtifactResponsePrivate
 * \brief The ListServiceActionsForProvisioningArtifactResponsePrivate class provides private implementation for ListServiceActionsForProvisioningArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListServiceActionsForProvisioningArtifactResponsePrivate object with public implementation \a q.
 */
ListServiceActionsForProvisioningArtifactResponsePrivate::ListServiceActionsForProvisioningArtifactResponsePrivate(
    ListServiceActionsForProvisioningArtifactResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListServiceActionsForProvisioningArtifact response element from \a xml.
 */
void ListServiceActionsForProvisioningArtifactResponsePrivate::parseListServiceActionsForProvisioningArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListServiceActionsForProvisioningArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
