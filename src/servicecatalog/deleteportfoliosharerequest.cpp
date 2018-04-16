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

#include "deleteportfoliosharerequest.h"
#include "deleteportfoliosharerequest_p.h"
#include "deleteportfolioshareresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DeletePortfolioShareRequest
 *
 * \brief The DeletePortfolioShareRequest class provides an interface for ServiceCatalog DeletePortfolioShare requests.
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
 * \sa ServiceCatalogClient::deletePortfolioShare
 */

/*!
 * @brief  Constructs a new DeletePortfolioShareRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePortfolioShareRequest::DeletePortfolioShareRequest(const DeletePortfolioShareRequest &other)
    : ServiceCatalogRequest(new DeletePortfolioShareRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeletePortfolioShareRequest object.
 */
DeletePortfolioShareRequest::DeletePortfolioShareRequest()
    : ServiceCatalogRequest(new DeletePortfolioShareRequestPrivate(ServiceCatalogRequest::DeletePortfolioShareAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePortfolioShareRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeletePortfolioShareResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeletePortfolioShareResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePortfolioShareRequest::response(QNetworkReply * const reply) const
{
    return new DeletePortfolioShareResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeletePortfolioShareRequestPrivate
 *
 * @brief  Private implementation for DeletePortfolioShareRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeletePortfolioShareRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DeletePortfolioShareRequest instance.
 */
DeletePortfolioShareRequestPrivate::DeletePortfolioShareRequestPrivate(
    const ServiceCatalogRequest::Action action, DeletePortfolioShareRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeletePortfolioShareRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeletePortfolioShareRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeletePortfolioShareRequest instance.
 */
DeletePortfolioShareRequestPrivate::DeletePortfolioShareRequestPrivate(
    const DeletePortfolioShareRequestPrivate &other, DeletePortfolioShareRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
