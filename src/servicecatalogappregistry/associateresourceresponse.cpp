// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateresourceresponse.h"
#include "associateresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::AssociateResourceResponse
 * \brief The AssociateResourceResponse class provides an interace for ServiceCatalogAppRegistry AssociateResource responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::associateResource
 */

/*!
 * Constructs a AssociateResourceResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateResourceResponse::AssociateResourceResponse(
        const AssociateResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new AssociateResourceResponsePrivate(this), parent)
{
    setRequest(new AssociateResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateResourceRequest * AssociateResourceResponse::request() const
{
    Q_D(const AssociateResourceResponse);
    return static_cast<const AssociateResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry AssociateResource \a response.
 */
void AssociateResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::AssociateResourceResponsePrivate
 * \brief The AssociateResourceResponsePrivate class provides private implementation for AssociateResourceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a AssociateResourceResponsePrivate object with public implementation \a q.
 */
AssociateResourceResponsePrivate::AssociateResourceResponsePrivate(
    AssociateResourceResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry AssociateResource response element from \a xml.
 */
void AssociateResourceResponsePrivate::parseAssociateResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
