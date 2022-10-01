// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
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
