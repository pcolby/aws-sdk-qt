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

#include "listprincipalsforportfolioresponse.h"
#include "listprincipalsforportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListPrincipalsForPortfolioResponse
 *
 * \brief The ListPrincipalsForPortfolioResponse class encapsulates ServiceCatalog ListPrincipalsForPortfolio responses.
 *
 * \ingroup ServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::listPrincipalsForPortfolio
 */

/*!
 * @brief  Constructs a new ListPrincipalsForPortfolioResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPrincipalsForPortfolioResponse::ListPrincipalsForPortfolioResponse(
        const ListPrincipalsForPortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListPrincipalsForPortfolioResponsePrivate(this), parent)
{
    setRequest(new ListPrincipalsForPortfolioRequest(request));
    setReply(reply);
}

const ListPrincipalsForPortfolioRequest * ListPrincipalsForPortfolioResponse::request() const
{
    Q_D(const ListPrincipalsForPortfolioResponse);
    return static_cast<const ListPrincipalsForPortfolioRequest *>(d->request);
}

/*!
 * @brief  Parse a ServiceCatalog ListPrincipalsForPortfolio response.
 *
 * @param  response  Response to parse.
 */
void ListPrincipalsForPortfolioResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListPrincipalsForPortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListPrincipalsForPortfolioResponsePrivate
 *
 * \brief Private implementation for ListPrincipalsForPortfolioResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListPrincipalsForPortfolioResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPrincipalsForPortfolioResponse instance.
 */
ListPrincipalsForPortfolioResponsePrivate::ListPrincipalsForPortfolioResponsePrivate(
    ListPrincipalsForPortfolioResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ServiceCatalog ListPrincipalsForPortfolioResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPrincipalsForPortfolioResponsePrivate::parseListPrincipalsForPortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPrincipalsForPortfolioResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
