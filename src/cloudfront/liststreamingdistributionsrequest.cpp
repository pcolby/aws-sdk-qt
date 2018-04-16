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

#include "liststreamingdistributionsrequest.h"
#include "liststreamingdistributionsrequest_p.h"
#include "liststreamingdistributionsresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListStreamingDistributionsRequest
 *
 * \brief The ListStreamingDistributionsRequest class encapsulates CloudFront ListStreamingDistributions requests.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listStreamingDistributions
 */

/*!
 * @brief  Constructs a new ListStreamingDistributionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListStreamingDistributionsRequest::ListStreamingDistributionsRequest(const ListStreamingDistributionsRequest &other)
    : CloudFrontRequest(new ListStreamingDistributionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListStreamingDistributionsRequest object.
 */
ListStreamingDistributionsRequest::ListStreamingDistributionsRequest()
    : CloudFrontRequest(new ListStreamingDistributionsRequestPrivate(CloudFrontRequest::ListStreamingDistributionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStreamingDistributionsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListStreamingDistributionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListStreamingDistributionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStreamingDistributionsRequest::response(QNetworkReply * const reply) const
{
    return new ListStreamingDistributionsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListStreamingDistributionsRequestPrivate
 *
 * @brief  Private implementation for ListStreamingDistributionsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListStreamingDistributionsRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public ListStreamingDistributionsRequest instance.
 */
ListStreamingDistributionsRequestPrivate::ListStreamingDistributionsRequestPrivate(
    const CloudFrontRequest::Action action, ListStreamingDistributionsRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListStreamingDistributionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListStreamingDistributionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListStreamingDistributionsRequest instance.
 */
ListStreamingDistributionsRequestPrivate::ListStreamingDistributionsRequestPrivate(
    const ListStreamingDistributionsRequestPrivate &other, ListStreamingDistributionsRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
