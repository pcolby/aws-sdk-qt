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
