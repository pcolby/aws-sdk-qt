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

#include "associatetagoptionwithresourceresponse.h"
#include "associatetagoptionwithresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AssociateTagOptionWithResourceResponse
 *
 * \brief The AssociateTagOptionWithResourceResponse class provides an interace for ServiceCatalog AssociateTagOptionWithResource responses.
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
 * \sa ServiceCatalogClient::associateTagOptionWithResource
 */

/*!
 * @brief  Constructs a new AssociateTagOptionWithResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateTagOptionWithResourceResponse::AssociateTagOptionWithResourceResponse(
        const AssociateTagOptionWithResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new AssociateTagOptionWithResourceResponsePrivate(this), parent)
{
    setRequest(new AssociateTagOptionWithResourceRequest(request));
    setReply(reply);
}

const AssociateTagOptionWithResourceRequest * AssociateTagOptionWithResourceResponse::request() const
{
    Q_D(const AssociateTagOptionWithResourceResponse);
    return static_cast<const AssociateTagOptionWithResourceRequest *>(d->request);
}

/*!
 * @brief  Parse a ServiceCatalog AssociateTagOptionWithResource response.
 *
 * @param  response  Response to parse.
 */
void AssociateTagOptionWithResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(AssociateTagOptionWithResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class AssociateTagOptionWithResourceResponsePrivate
 *
 * \brief Private implementation for AssociateTagOptionWithResourceResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AssociateTagOptionWithResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateTagOptionWithResourceResponse instance.
 */
AssociateTagOptionWithResourceResponsePrivate::AssociateTagOptionWithResourceResponsePrivate(
    AssociateTagOptionWithResourceResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ServiceCatalog AssociateTagOptionWithResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateTagOptionWithResourceResponsePrivate::parseAssociateTagOptionWithResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateTagOptionWithResourceResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
