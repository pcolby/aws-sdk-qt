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

#include "listsqlinjectionmatchsetsrequest.h"
#include "listsqlinjectionmatchsetsrequest_p.h"
#include "listsqlinjectionmatchsetsresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::ListSqlInjectionMatchSetsRequest
 *
 * \brief The ListSqlInjectionMatchSetsRequest class encapsulates WAF ListSqlInjectionMatchSets requests.
 *
 * \ingroup WAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFClient::listSqlInjectionMatchSets
 */

/*!
 * @brief  Constructs a new ListSqlInjectionMatchSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSqlInjectionMatchSetsRequest::ListSqlInjectionMatchSetsRequest(const ListSqlInjectionMatchSetsRequest &other)
    : WAFRequest(new ListSqlInjectionMatchSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListSqlInjectionMatchSetsRequest object.
 */
ListSqlInjectionMatchSetsRequest::ListSqlInjectionMatchSetsRequest()
    : WAFRequest(new ListSqlInjectionMatchSetsRequestPrivate(WAFRequest::ListSqlInjectionMatchSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSqlInjectionMatchSetsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListSqlInjectionMatchSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSqlInjectionMatchSetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSqlInjectionMatchSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListSqlInjectionMatchSetsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListSqlInjectionMatchSetsRequestPrivate
 *
 * @brief  Private implementation for ListSqlInjectionMatchSetsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListSqlInjectionMatchSetsRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public ListSqlInjectionMatchSetsRequest instance.
 */
ListSqlInjectionMatchSetsRequestPrivate::ListSqlInjectionMatchSetsRequestPrivate(
    const WAFRequest::Action action, ListSqlInjectionMatchSetsRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListSqlInjectionMatchSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSqlInjectionMatchSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSqlInjectionMatchSetsRequest instance.
 */
ListSqlInjectionMatchSetsRequestPrivate::ListSqlInjectionMatchSetsRequestPrivate(
    const ListSqlInjectionMatchSetsRequestPrivate &other, ListSqlInjectionMatchSetsRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
