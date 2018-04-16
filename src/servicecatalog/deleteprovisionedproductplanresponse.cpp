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

#include "deleteprovisionedproductplanresponse.h"
#include "deleteprovisionedproductplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DeleteProvisionedProductPlanResponse
 *
 * \brief The DeleteProvisionedProductPlanResponse class encapsulates ServiceCatalog DeleteProvisionedProductPlan responses.
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
 * \sa ServiceCatalogClient::deleteProvisionedProductPlan
 */

/*!
 * @brief  Constructs a new DeleteProvisionedProductPlanResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteProvisionedProductPlanResponse::DeleteProvisionedProductPlanResponse(
        const DeleteProvisionedProductPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DeleteProvisionedProductPlanResponsePrivate(this), parent)
{
    setRequest(new DeleteProvisionedProductPlanRequest(request));
    setReply(reply);
}

const DeleteProvisionedProductPlanRequest * DeleteProvisionedProductPlanResponse::request() const
{
    Q_D(const DeleteProvisionedProductPlanResponse);
    return static_cast<const DeleteProvisionedProductPlanRequest *>(d->request);
}

/*!
 * @brief  Parse a ServiceCatalog DeleteProvisionedProductPlan response.
 *
 * @param  response  Response to parse.
 */
void DeleteProvisionedProductPlanResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteProvisionedProductPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteProvisionedProductPlanResponsePrivate
 *
 * \brief Private implementation for DeleteProvisionedProductPlanResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteProvisionedProductPlanResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteProvisionedProductPlanResponse instance.
 */
DeleteProvisionedProductPlanResponsePrivate::DeleteProvisionedProductPlanResponsePrivate(
    DeleteProvisionedProductPlanResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ServiceCatalog DeleteProvisionedProductPlanResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteProvisionedProductPlanResponsePrivate::parseDeleteProvisionedProductPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProvisionedProductPlanResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
