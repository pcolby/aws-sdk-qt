// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprovisioningartifactsresponse.h"
#include "listprovisioningartifactsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListProvisioningArtifactsResponse
 * \brief The ListProvisioningArtifactsResponse class provides an interace for ServiceCatalog ListProvisioningArtifacts responses.
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
 * \sa ServiceCatalogClient::listProvisioningArtifacts
 */

/*!
 * Constructs a ListProvisioningArtifactsResponse object for \a reply to \a request, with parent \a parent.
 */
ListProvisioningArtifactsResponse::ListProvisioningArtifactsResponse(
        const ListProvisioningArtifactsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListProvisioningArtifactsResponsePrivate(this), parent)
{
    setRequest(new ListProvisioningArtifactsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProvisioningArtifactsRequest * ListProvisioningArtifactsResponse::request() const
{
    Q_D(const ListProvisioningArtifactsResponse);
    return static_cast<const ListProvisioningArtifactsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListProvisioningArtifacts \a response.
 */
void ListProvisioningArtifactsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProvisioningArtifactsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListProvisioningArtifactsResponsePrivate
 * \brief The ListProvisioningArtifactsResponsePrivate class provides private implementation for ListProvisioningArtifactsResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListProvisioningArtifactsResponsePrivate object with public implementation \a q.
 */
ListProvisioningArtifactsResponsePrivate::ListProvisioningArtifactsResponsePrivate(
    ListProvisioningArtifactsResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListProvisioningArtifacts response element from \a xml.
 */
void ListProvisioningArtifactsResponsePrivate::parseListProvisioningArtifactsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProvisioningArtifactsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
