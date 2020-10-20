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

#include "listresourcesfortagoptionresponse.h"
#include "listresourcesfortagoptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListResourcesForTagOptionResponse
 * \brief The ListResourcesForTagOptionResponse class provides an interace for ServiceCatalog ListResourcesForTagOption responses.
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
 * \sa ServiceCatalogClient::listResourcesForTagOption
 */

/*!
 * Constructs a ListResourcesForTagOptionResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourcesForTagOptionResponse::ListResourcesForTagOptionResponse(
        const ListResourcesForTagOptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListResourcesForTagOptionResponsePrivate(this), parent)
{
    setRequest(new ListResourcesForTagOptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourcesForTagOptionRequest * ListResourcesForTagOptionResponse::request() const
{
    Q_D(const ListResourcesForTagOptionResponse);
    return static_cast<const ListResourcesForTagOptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListResourcesForTagOption \a response.
 */
void ListResourcesForTagOptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResourcesForTagOptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListResourcesForTagOptionResponsePrivate
 * \brief The ListResourcesForTagOptionResponsePrivate class provides private implementation for ListResourcesForTagOptionResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListResourcesForTagOptionResponsePrivate object with public implementation \a q.
 */
ListResourcesForTagOptionResponsePrivate::ListResourcesForTagOptionResponsePrivate(
    ListResourcesForTagOptionResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListResourcesForTagOption response element from \a xml.
 */
void ListResourcesForTagOptionResponsePrivate::parseListResourcesForTagOptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourcesForTagOptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
