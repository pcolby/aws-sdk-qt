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

#include "listdistributionsbywebaclidrequest.h"
#include "listdistributionsbywebaclidrequest_p.h"
#include "listdistributionsbywebaclidresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsByWebACLIdRequest
 *
 * \brief The ListDistributionsByWebACLIdRequest class encapsulates CloudFront ListDistributionsByWebACLId requests.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributionsByWebACLId
 */

/*!
 * @brief  Constructs a new ListDistributionsByWebACLIdRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDistributionsByWebACLIdRequest::ListDistributionsByWebACLIdRequest(const ListDistributionsByWebACLIdRequest &other)
    : CloudFrontRequest(new ListDistributionsByWebACLIdRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListDistributionsByWebACLIdRequest object.
 */
ListDistributionsByWebACLIdRequest::ListDistributionsByWebACLIdRequest()
    : CloudFrontRequest(new ListDistributionsByWebACLIdRequestPrivate(CloudFrontRequest::ListDistributionsByWebACLIdAction, this))
{

}

/*!
 * \reimp
 */
bool ListDistributionsByWebACLIdRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListDistributionsByWebACLIdResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDistributionsByWebACLIdResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDistributionsByWebACLIdRequest::response(QNetworkReply * const reply) const
{
    return new ListDistributionsByWebACLIdResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListDistributionsByWebACLIdRequestPrivate
 *
 * @brief  Private implementation for ListDistributionsByWebACLIdRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListDistributionsByWebACLIdRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public ListDistributionsByWebACLIdRequest instance.
 */
ListDistributionsByWebACLIdRequestPrivate::ListDistributionsByWebACLIdRequestPrivate(
    const CloudFrontRequest::Action action, ListDistributionsByWebACLIdRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListDistributionsByWebACLIdRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDistributionsByWebACLIdRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDistributionsByWebACLIdRequest instance.
 */
ListDistributionsByWebACLIdRequestPrivate::ListDistributionsByWebACLIdRequestPrivate(
    const ListDistributionsByWebACLIdRequestPrivate &other, ListDistributionsByWebACLIdRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
