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

#include "updateregexpatternsetrequest.h"
#include "updateregexpatternsetrequest_p.h"
#include "updateregexpatternsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::UpdateRegexPatternSetRequest
 *
 * \brief The UpdateRegexPatternSetRequest class encapsulates WAF UpdateRegexPatternSet requests.
 *
 * \ingroup WAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFClient::updateRegexPatternSet
 */

/*!
 * @brief  Constructs a new UpdateRegexPatternSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRegexPatternSetRequest::UpdateRegexPatternSetRequest(const UpdateRegexPatternSetRequest &other)
    : WAFRequest(new UpdateRegexPatternSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateRegexPatternSetRequest object.
 */
UpdateRegexPatternSetRequest::UpdateRegexPatternSetRequest()
    : WAFRequest(new UpdateRegexPatternSetRequestPrivate(WAFRequest::UpdateRegexPatternSetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRegexPatternSetRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateRegexPatternSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRegexPatternSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRegexPatternSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRegexPatternSetResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateRegexPatternSetRequestPrivate
 *
 * @brief  Private implementation for UpdateRegexPatternSetRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateRegexPatternSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public UpdateRegexPatternSetRequest instance.
 */
UpdateRegexPatternSetRequestPrivate::UpdateRegexPatternSetRequestPrivate(
    const WAFRequest::Action action, UpdateRegexPatternSetRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateRegexPatternSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRegexPatternSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRegexPatternSetRequest instance.
 */
UpdateRegexPatternSetRequestPrivate::UpdateRegexPatternSetRequestPrivate(
    const UpdateRegexPatternSetRequestPrivate &other, UpdateRegexPatternSetRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
