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

#include "updateratebasedrulerequest.h"
#include "updateratebasedrulerequest_p.h"
#include "updateratebasedruleresponse.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::UpdateRateBasedRuleRequest
 *
 * \brief The UpdateRateBasedRuleRequest class encapsulates WAFRegional UpdateRateBasedRule requests.
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
 * \sa WAFRegionalClient::updateRateBasedRule
 */

/*!
 * @brief  Constructs a new UpdateRateBasedRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRateBasedRuleRequest::UpdateRateBasedRuleRequest(const UpdateRateBasedRuleRequest &other)
    : WAFRegionalRequest(new UpdateRateBasedRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateRateBasedRuleRequest object.
 */
UpdateRateBasedRuleRequest::UpdateRateBasedRuleRequest()
    : WAFRegionalRequest(new UpdateRateBasedRuleRequestPrivate(WAFRegionalRequest::UpdateRateBasedRuleAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRateBasedRuleRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateRateBasedRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRateBasedRuleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFRegionalClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRateBasedRuleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRateBasedRuleResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateRateBasedRuleRequestPrivate
 *
 * @brief  Private implementation for UpdateRateBasedRuleRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateRateBasedRuleRequestPrivate object.
 *
 * @param  action  WAFRegional action being performed.
 * @param  q       Pointer to this object's public UpdateRateBasedRuleRequest instance.
 */
UpdateRateBasedRuleRequestPrivate::UpdateRateBasedRuleRequestPrivate(
    const WAFRegionalRequest::Action action, UpdateRateBasedRuleRequest * const q)
    : WAFRegionalRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateRateBasedRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRateBasedRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRateBasedRuleRequest instance.
 */
UpdateRateBasedRuleRequestPrivate::UpdateRateBasedRuleRequestPrivate(
    const UpdateRateBasedRuleRequestPrivate &other, UpdateRateBasedRuleRequest * const q)
    : WAFRegionalRequestPrivate(other, q)
{

}

} // namespace WAFRegional
} // namespace QtAws
