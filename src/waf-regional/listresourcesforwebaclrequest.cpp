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

#include "listresourcesforwebaclrequest.h"
#include "listresourcesforwebaclrequest_p.h"
#include "listresourcesforwebaclresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::ListResourcesForWebACLRequest
 *
 * \brief The ListResourcesForWebACLRequest class encapsulates WAFRegional ListResourcesForWebACL requests.
 *
 * \ingroup WAFRegional
 *
 *  This is the <i>AWS WAF Regional API Reference</i> for using AWS WAF with Elastic Load Balancing (ELB) Application Load
 *  Balancers. The AWS WAF actions and data types listed in the reference are available for protecting Application Load
 *  Balancers. You can use these actions and data types by means of the endpoints listed in <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#waf_region">AWS Regions and Endpoints</a>. This guide is
 *  for developers who need detailed information about the AWS WAF API actions, data types, and errors. For detailed
 *  information about AWS WAF features and an overview of how to use the AWS WAF API, see the <a
 *  href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFRegionalClient::listResourcesForWebACL
 */

/*!
 * @brief  Constructs a new ListResourcesForWebACLRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListResourcesForWebACLRequest::ListResourcesForWebACLRequest(const ListResourcesForWebACLRequest &other)
    : WAFRegionalRequest(new ListResourcesForWebACLRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListResourcesForWebACLRequest object.
 */
ListResourcesForWebACLRequest::ListResourcesForWebACLRequest()
    : WAFRegionalRequest(new ListResourcesForWebACLRequestPrivate(WAFRegionalRequest::ListResourcesForWebACLAction, this))
{

}

/*!
 * \reimp
 */
bool ListResourcesForWebACLRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListResourcesForWebACLResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListResourcesForWebACLResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourcesForWebACLRequest::response(QNetworkReply * const reply) const
{
    return new ListResourcesForWebACLResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListResourcesForWebACLRequestPrivate
 *
 * @brief  Private implementation for ListResourcesForWebACLRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListResourcesForWebACLRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public ListResourcesForWebACLRequest instance.
 */
ListResourcesForWebACLRequestPrivate::ListResourcesForWebACLRequestPrivate(
    const WAFRegionalRequest::Action action, ListResourcesForWebACLRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListResourcesForWebACLRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListResourcesForWebACLRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListResourcesForWebACLRequest instance.
 */
ListResourcesForWebACLRequestPrivate::ListResourcesForWebACLRequestPrivate(
    const ListResourcesForWebACLRequestPrivate &other, ListResourcesForWebACLRequest * const q)
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
