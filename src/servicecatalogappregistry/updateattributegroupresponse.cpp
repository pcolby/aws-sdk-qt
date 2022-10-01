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

#include "updateattributegroupresponse.h"
#include "updateattributegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::UpdateAttributeGroupResponse
 * \brief The UpdateAttributeGroupResponse class provides an interace for ServiceCatalogAppRegistry UpdateAttributeGroup responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::updateAttributeGroup
 */

/*!
 * Constructs a UpdateAttributeGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAttributeGroupResponse::UpdateAttributeGroupResponse(
        const UpdateAttributeGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new UpdateAttributeGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateAttributeGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAttributeGroupRequest * UpdateAttributeGroupResponse::request() const
{
    Q_D(const UpdateAttributeGroupResponse);
    return static_cast<const UpdateAttributeGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry UpdateAttributeGroup \a response.
 */
void UpdateAttributeGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAttributeGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::UpdateAttributeGroupResponsePrivate
 * \brief The UpdateAttributeGroupResponsePrivate class provides private implementation for UpdateAttributeGroupResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a UpdateAttributeGroupResponsePrivate object with public implementation \a q.
 */
UpdateAttributeGroupResponsePrivate::UpdateAttributeGroupResponsePrivate(
    UpdateAttributeGroupResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry UpdateAttributeGroup response element from \a xml.
 */
void UpdateAttributeGroupResponsePrivate::parseUpdateAttributeGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAttributeGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
