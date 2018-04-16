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

#include "createproductresponse.h"
#include "createproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::CreateProductResponse
 *
 * \brief The CreateProductResponse class encapsulates ServiceCatalog CreateProduct responses.
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
 * \sa ServiceCatalogClient::createProduct
 */

/*!
 * @brief  Constructs a new CreateProductResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateProductResponse::CreateProductResponse(
        const CreateProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new CreateProductResponsePrivate(this), parent)
{
    setRequest(new CreateProductRequest(request));
    setReply(reply);
}

const CreateProductRequest * CreateProductResponse::request() const
{
    Q_D(const CreateProductResponse);
    return static_cast<const CreateProductRequest *>(d->request);
}

/*!
 * @brief  Parse a ServiceCatalog CreateProduct response.
 *
 * @param  response  Response to parse.
 */
void CreateProductResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateProductResponsePrivate
 *
 * \brief Private implementation for CreateProductResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateProductResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateProductResponse instance.
 */
CreateProductResponsePrivate::CreateProductResponsePrivate(
    CreateProductResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ServiceCatalog CreateProductResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateProductResponsePrivate::parseCreateProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProductResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
