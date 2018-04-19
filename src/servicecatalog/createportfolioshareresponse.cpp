/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createportfolioshareresponse.h"
#include "createportfolioshareresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::CreatePortfolioShareResponse
 * \brief The CreatePortfolioShareResponse class provides an interace for ServiceCatalog CreatePortfolioShare responses.
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
 * \sa ServiceCatalogClient::createPortfolioShare
 */

/*!
 * Constructs a CreatePortfolioShareResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePortfolioShareResponse::CreatePortfolioShareResponse(
        const CreatePortfolioShareRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new CreatePortfolioShareResponsePrivate(this), parent)
{
    setRequest(new CreatePortfolioShareRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePortfolioShareRequest * CreatePortfolioShareResponse::request() const
{
    Q_D(const CreatePortfolioShareResponse);
    return static_cast<const CreatePortfolioShareRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog CreatePortfolioShare \a response.
 */
void CreatePortfolioShareResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreatePortfolioShareResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::CreatePortfolioShareResponsePrivate
 * \brief The CreatePortfolioShareResponsePrivate class provides private implementation for CreatePortfolioShareResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a CreatePortfolioShareResponsePrivate object with public implementation \a q.
 */
CreatePortfolioShareResponsePrivate::CreatePortfolioShareResponsePrivate(
    CreatePortfolioShareResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog CreatePortfolioShare response element from \a xml.
 */
void CreatePortfolioShareResponsePrivate::parseCreatePortfolioShareResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePortfolioShareResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
