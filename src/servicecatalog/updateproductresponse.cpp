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

#include "updateproductresponse.h"
#include "updateproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::UpdateProductResponse
 * \brief The UpdateProductResponse class provides an interace for ServiceCatalog UpdateProduct responses.
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
 * \sa ServiceCatalogClient::updateProduct
 */

/*!
 * Constructs a UpdateProductResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateProductResponse::UpdateProductResponse(
        const UpdateProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new UpdateProductResponsePrivate(this), parent)
{
    setRequest(new UpdateProductRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateProductRequest * UpdateProductResponse::request() const
{
    Q_D(const UpdateProductResponse);
    return static_cast<const UpdateProductRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog UpdateProduct \a response.
 */
void UpdateProductResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::UpdateProductResponsePrivate
 * \brief The UpdateProductResponsePrivate class provides private implementation for UpdateProductResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a UpdateProductResponsePrivate object with public implementation \a q.
 */
UpdateProductResponsePrivate::UpdateProductResponsePrivate(
    UpdateProductResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog UpdateProduct response element from \a xml.
 */
void UpdateProductResponsePrivate::parseUpdateProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateProductResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
