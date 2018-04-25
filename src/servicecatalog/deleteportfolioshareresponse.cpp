/*
    Copyright 2013-2018 Paul Colby

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

#include "deleteportfolioshareresponse.h"
#include "deleteportfolioshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DeletePortfolioShareResponse
 * \brief The DeletePortfolioShareResponse class provides an interace for ServiceCatalog DeletePortfolioShare responses.
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
 * \sa ServiceCatalogClient::deletePortfolioShare
 */

/*!
 * Constructs a DeletePortfolioShareResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePortfolioShareResponse::DeletePortfolioShareResponse(
        const DeletePortfolioShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DeletePortfolioShareResponsePrivate(this), parent)
{
    setRequest(new DeletePortfolioShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePortfolioShareRequest * DeletePortfolioShareResponse::request() const
{
    Q_D(const DeletePortfolioShareResponse);
    return static_cast<const DeletePortfolioShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DeletePortfolioShare \a response.
 */
void DeletePortfolioShareResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeletePortfolioShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DeletePortfolioShareResponsePrivate
 * \brief The DeletePortfolioShareResponsePrivate class provides private implementation for DeletePortfolioShareResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DeletePortfolioShareResponsePrivate object with public implementation \a q.
 */
DeletePortfolioShareResponsePrivate::DeletePortfolioShareResponsePrivate(
    DeletePortfolioShareResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DeletePortfolioShare response element from \a xml.
 */
void DeletePortfolioShareResponsePrivate::parseDeletePortfolioShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePortfolioShareResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
