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

#include "copyproductresponse.h"
#include "copyproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::CopyProductResponse
 *
 * \brief The CopyProductResponse class encapsulates ServiceCatalog CopyProduct responses.
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
 * \sa ServiceCatalogClient::copyProduct
 */

/*!
 * @brief  Constructs a new CopyProductResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CopyProductResponse::CopyProductResponse(
        const CopyProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new CopyProductResponsePrivate(this), parent)
{
    setRequest(new CopyProductRequest(request));
    setReply(reply);
}

const CopyProductRequest * CopyProductResponse::request() const
{
    Q_D(const CopyProductResponse);
    return static_cast<const CopyProductRequest *>(d->request);
}

/*!
 * @brief  Parse a ServiceCatalog CopyProduct response.
 *
 * @param  response  Response to parse.
 */
void CopyProductResponse::parseSuccess(QIODevice &response)
{
    Q_D(CopyProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CopyProductResponsePrivate
 *
 * \brief Private implementation for CopyProductResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CopyProductResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CopyProductResponse instance.
 */
CopyProductResponsePrivate::CopyProductResponsePrivate(
    CopyProductResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ServiceCatalog CopyProductResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CopyProductResponsePrivate::parseCopyProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyProductResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
