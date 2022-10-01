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

#include "getattributegroupresponse.h"
#include "getattributegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::GetAttributeGroupResponse
 * \brief The GetAttributeGroupResponse class provides an interace for ServiceCatalogAppRegistry GetAttributeGroup responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::getAttributeGroup
 */

/*!
 * Constructs a GetAttributeGroupResponse object for \a reply to \a request, with parent \a parent.
 */
GetAttributeGroupResponse::GetAttributeGroupResponse(
        const GetAttributeGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new GetAttributeGroupResponsePrivate(this), parent)
{
    setRequest(new GetAttributeGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAttributeGroupRequest * GetAttributeGroupResponse::request() const
{
    Q_D(const GetAttributeGroupResponse);
    return static_cast<const GetAttributeGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry GetAttributeGroup \a response.
 */
void GetAttributeGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAttributeGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::GetAttributeGroupResponsePrivate
 * \brief The GetAttributeGroupResponsePrivate class provides private implementation for GetAttributeGroupResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a GetAttributeGroupResponsePrivate object with public implementation \a q.
 */
GetAttributeGroupResponsePrivate::GetAttributeGroupResponsePrivate(
    GetAttributeGroupResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry GetAttributeGroup response element from \a xml.
 */
void GetAttributeGroupResponsePrivate::parseGetAttributeGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAttributeGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
