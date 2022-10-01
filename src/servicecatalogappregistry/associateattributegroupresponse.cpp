// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateattributegroupresponse.h"
#include "associateattributegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::AssociateAttributeGroupResponse
 * \brief The AssociateAttributeGroupResponse class provides an interace for ServiceCatalogAppRegistry AssociateAttributeGroup responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::associateAttributeGroup
 */

/*!
 * Constructs a AssociateAttributeGroupResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateAttributeGroupResponse::AssociateAttributeGroupResponse(
        const AssociateAttributeGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new AssociateAttributeGroupResponsePrivate(this), parent)
{
    setRequest(new AssociateAttributeGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateAttributeGroupRequest * AssociateAttributeGroupResponse::request() const
{
    Q_D(const AssociateAttributeGroupResponse);
    return static_cast<const AssociateAttributeGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry AssociateAttributeGroup \a response.
 */
void AssociateAttributeGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateAttributeGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::AssociateAttributeGroupResponsePrivate
 * \brief The AssociateAttributeGroupResponsePrivate class provides private implementation for AssociateAttributeGroupResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a AssociateAttributeGroupResponsePrivate object with public implementation \a q.
 */
AssociateAttributeGroupResponsePrivate::AssociateAttributeGroupResponsePrivate(
    AssociateAttributeGroupResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry AssociateAttributeGroup response element from \a xml.
 */
void AssociateAttributeGroupResponsePrivate::parseAssociateAttributeGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateAttributeGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
