/*
    Copyright 2013-2019 Paul Colby

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

#include "associatebudgetwithresourceresponse.h"
#include "associatebudgetwithresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AssociateBudgetWithResourceResponse
 * \brief The AssociateBudgetWithResourceResponse class provides an interace for ServiceCatalog AssociateBudgetWithResource responses.
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
 * \sa ServiceCatalogClient::associateBudgetWithResource
 */

/*!
 * Constructs a AssociateBudgetWithResourceResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateBudgetWithResourceResponse::AssociateBudgetWithResourceResponse(
        const AssociateBudgetWithResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new AssociateBudgetWithResourceResponsePrivate(this), parent)
{
    setRequest(new AssociateBudgetWithResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateBudgetWithResourceRequest * AssociateBudgetWithResourceResponse::request() const
{
    Q_D(const AssociateBudgetWithResourceResponse);
    return static_cast<const AssociateBudgetWithResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog AssociateBudgetWithResource \a response.
 */
void AssociateBudgetWithResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateBudgetWithResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::AssociateBudgetWithResourceResponsePrivate
 * \brief The AssociateBudgetWithResourceResponsePrivate class provides private implementation for AssociateBudgetWithResourceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a AssociateBudgetWithResourceResponsePrivate object with public implementation \a q.
 */
AssociateBudgetWithResourceResponsePrivate::AssociateBudgetWithResourceResponsePrivate(
    AssociateBudgetWithResourceResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog AssociateBudgetWithResource response element from \a xml.
 */
void AssociateBudgetWithResourceResponsePrivate::parseAssociateBudgetWithResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateBudgetWithResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
