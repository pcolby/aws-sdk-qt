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

#include "getassociatedresourceresponse.h"
#include "getassociatedresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::GetAssociatedResourceResponse
 * \brief The GetAssociatedResourceResponse class provides an interace for ServiceCatalogAppRegistry GetAssociatedResource responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::getAssociatedResource
 */

/*!
 * Constructs a GetAssociatedResourceResponse object for \a reply to \a request, with parent \a parent.
 */
GetAssociatedResourceResponse::GetAssociatedResourceResponse(
        const GetAssociatedResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new GetAssociatedResourceResponsePrivate(this), parent)
{
    setRequest(new GetAssociatedResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAssociatedResourceRequest * GetAssociatedResourceResponse::request() const
{
    Q_D(const GetAssociatedResourceResponse);
    return static_cast<const GetAssociatedResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry GetAssociatedResource \a response.
 */
void GetAssociatedResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAssociatedResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::GetAssociatedResourceResponsePrivate
 * \brief The GetAssociatedResourceResponsePrivate class provides private implementation for GetAssociatedResourceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a GetAssociatedResourceResponsePrivate object with public implementation \a q.
 */
GetAssociatedResourceResponsePrivate::GetAssociatedResourceResponsePrivate(
    GetAssociatedResourceResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry GetAssociatedResource response element from \a xml.
 */
void GetAssociatedResourceResponsePrivate::parseGetAssociatedResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAssociatedResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
