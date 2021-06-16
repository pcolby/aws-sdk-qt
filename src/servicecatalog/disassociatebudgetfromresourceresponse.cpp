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

#include "disassociatebudgetfromresourceresponse.h"
#include "disassociatebudgetfromresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DisassociateBudgetFromResourceResponse
 * \brief The DisassociateBudgetFromResourceResponse class provides an interace for ServiceCatalog DisassociateBudgetFromResource responses.
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
 * \sa ServiceCatalogClient::disassociateBudgetFromResource
 */

/*!
 * Constructs a DisassociateBudgetFromResourceResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateBudgetFromResourceResponse::DisassociateBudgetFromResourceResponse(
        const DisassociateBudgetFromResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DisassociateBudgetFromResourceResponsePrivate(this), parent)
{
    setRequest(new DisassociateBudgetFromResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateBudgetFromResourceRequest * DisassociateBudgetFromResourceResponse::request() const
{
    Q_D(const DisassociateBudgetFromResourceResponse);
    return static_cast<const DisassociateBudgetFromResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DisassociateBudgetFromResource \a response.
 */
void DisassociateBudgetFromResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateBudgetFromResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DisassociateBudgetFromResourceResponsePrivate
 * \brief The DisassociateBudgetFromResourceResponsePrivate class provides private implementation for DisassociateBudgetFromResourceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DisassociateBudgetFromResourceResponsePrivate object with public implementation \a q.
 */
DisassociateBudgetFromResourceResponsePrivate::DisassociateBudgetFromResourceResponsePrivate(
    DisassociateBudgetFromResourceResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DisassociateBudgetFromResource response element from \a xml.
 */
void DisassociateBudgetFromResourceResponsePrivate::parseDisassociateBudgetFromResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateBudgetFromResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
