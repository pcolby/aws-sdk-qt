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

#include "rejectportfolioshareresponse.h"
#include "rejectportfolioshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::RejectPortfolioShareResponse
 * \brief The RejectPortfolioShareResponse class provides an interace for ServiceCatalog RejectPortfolioShare responses.
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
 * \sa ServiceCatalogClient::rejectPortfolioShare
 */

/*!
 * Constructs a RejectPortfolioShareResponse object for \a reply to \a request, with parent \a parent.
 */
RejectPortfolioShareResponse::RejectPortfolioShareResponse(
        const RejectPortfolioShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new RejectPortfolioShareResponsePrivate(this), parent)
{
    setRequest(new RejectPortfolioShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectPortfolioShareRequest * RejectPortfolioShareResponse::request() const
{
    Q_D(const RejectPortfolioShareResponse);
    return static_cast<const RejectPortfolioShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog RejectPortfolioShare \a response.
 */
void RejectPortfolioShareResponse::parseSuccess(QIODevice &response)
{
    Q_D(RejectPortfolioShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::RejectPortfolioShareResponsePrivate
 * \brief The RejectPortfolioShareResponsePrivate class provides private implementation for RejectPortfolioShareResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a RejectPortfolioShareResponsePrivate object with public implementation \a q.
 */
RejectPortfolioShareResponsePrivate::RejectPortfolioShareResponsePrivate(
    RejectPortfolioShareResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog RejectPortfolioShare response element from \a xml.
 */
void RejectPortfolioShareResponsePrivate::parseRejectPortfolioShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectPortfolioShareResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
