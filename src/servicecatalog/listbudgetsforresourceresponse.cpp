/*
    Copyright 2013-2020 Paul Colby

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

#include "listbudgetsforresourceresponse.h"
#include "listbudgetsforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListBudgetsForResourceResponse
 * \brief The ListBudgetsForResourceResponse class provides an interace for ServiceCatalog ListBudgetsForResource responses.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::listBudgetsForResource
 */

/*!
 * Constructs a ListBudgetsForResourceResponse object for \a reply to \a request, with parent \a parent.
 */
ListBudgetsForResourceResponse::ListBudgetsForResourceResponse(
        const ListBudgetsForResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListBudgetsForResourceResponsePrivate(this), parent)
{
    setRequest(new ListBudgetsForResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBudgetsForResourceRequest * ListBudgetsForResourceResponse::request() const
{
    Q_D(const ListBudgetsForResourceResponse);
    return static_cast<const ListBudgetsForResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListBudgetsForResource \a response.
 */
void ListBudgetsForResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBudgetsForResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListBudgetsForResourceResponsePrivate
 * \brief The ListBudgetsForResourceResponsePrivate class provides private implementation for ListBudgetsForResourceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListBudgetsForResourceResponsePrivate object with public implementation \a q.
 */
ListBudgetsForResourceResponsePrivate::ListBudgetsForResourceResponsePrivate(
    ListBudgetsForResourceResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListBudgetsForResource response element from \a xml.
 */
void ListBudgetsForResourceResponsePrivate::parseListBudgetsForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBudgetsForResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
