/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "rejectportfoliosharerequest.h"
#include "rejectportfoliosharerequest_p.h"
#include "rejectportfolioshareresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  RejectPortfolioShareRequest
 *
 * @brief  Implements ServiceCatalog RejectPortfolioShare requests.
 *
 * @see    ServiceCatalogClient::rejectPortfolioShare
 */

/**
 * @brief  Constructs a new RejectPortfolioShareResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RejectPortfolioShareResponse::RejectPortfolioShareResponse(

/**
 * @brief  Constructs a new RejectPortfolioShareRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RejectPortfolioShareRequest::RejectPortfolioShareRequest(const RejectPortfolioShareRequest &other)
    : ServiceCatalogRequest(new RejectPortfolioShareRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RejectPortfolioShareRequest object.
 */
RejectPortfolioShareRequest::RejectPortfolioShareRequest()
    : ServiceCatalogRequest(new RejectPortfolioShareRequestPrivate(ServiceCatalogRequest::RejectPortfolioShareAction, this))
{

}

bool RejectPortfolioShareRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RejectPortfolioShareResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RejectPortfolioShareResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * RejectPortfolioShareRequest::response(QNetworkReply * const reply) const
{
    return new RejectPortfolioShareResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RejectPortfolioShareRequestPrivate
 *
 * @brief  Private implementation for RejectPortfolioShareRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RejectPortfolioShareRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public RejectPortfolioShareRequest instance.
 */
RejectPortfolioShareRequestPrivate::RejectPortfolioShareRequestPrivate(
    const ServiceCatalogRequest::Action action, RejectPortfolioShareRequest * const q)
    : RejectPortfolioSharePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RejectPortfolioShareRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RejectPortfolioShareRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RejectPortfolioShareRequest instance.
 */
RejectPortfolioShareRequestPrivate::RejectPortfolioShareRequestPrivate(
    const RejectPortfolioShareRequestPrivate &other, RejectPortfolioShareRequest * const q)
    : RejectPortfolioSharePrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
