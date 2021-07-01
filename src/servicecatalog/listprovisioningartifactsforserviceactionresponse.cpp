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

#include "listprovisioningartifactsforserviceactionresponse.h"
#include "listprovisioningartifactsforserviceactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListProvisioningArtifactsForServiceActionResponse
 * \brief The ListProvisioningArtifactsForServiceActionResponse class provides an interace for ServiceCatalog ListProvisioningArtifactsForServiceAction responses.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for AWS. To get the most out of this documentation, you should be familiar
 *  with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::listProvisioningArtifactsForServiceAction
 */

/*!
 * Constructs a ListProvisioningArtifactsForServiceActionResponse object for \a reply to \a request, with parent \a parent.
 */
ListProvisioningArtifactsForServiceActionResponse::ListProvisioningArtifactsForServiceActionResponse(
        const ListProvisioningArtifactsForServiceActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListProvisioningArtifactsForServiceActionResponsePrivate(this), parent)
{
    setRequest(new ListProvisioningArtifactsForServiceActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProvisioningArtifactsForServiceActionRequest * ListProvisioningArtifactsForServiceActionResponse::request() const
{
    Q_D(const ListProvisioningArtifactsForServiceActionResponse);
    return static_cast<const ListProvisioningArtifactsForServiceActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListProvisioningArtifactsForServiceAction \a response.
 */
void ListProvisioningArtifactsForServiceActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProvisioningArtifactsForServiceActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListProvisioningArtifactsForServiceActionResponsePrivate
 * \brief The ListProvisioningArtifactsForServiceActionResponsePrivate class provides private implementation for ListProvisioningArtifactsForServiceActionResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListProvisioningArtifactsForServiceActionResponsePrivate object with public implementation \a q.
 */
ListProvisioningArtifactsForServiceActionResponsePrivate::ListProvisioningArtifactsForServiceActionResponsePrivate(
    ListProvisioningArtifactsForServiceActionResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListProvisioningArtifactsForServiceAction response element from \a xml.
 */
void ListProvisioningArtifactsForServiceActionResponsePrivate::parseListProvisioningArtifactsForServiceActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProvisioningArtifactsForServiceActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
