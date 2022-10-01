// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecommendationsrequest.h"
#include "getrecommendationsrequest_p.h"
#include "getrecommendationsresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::GetRecommendationsRequest
 * \brief The GetRecommendationsRequest class provides an interface for Wisdom GetRecommendations requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::getRecommendations
 */

/*!
 * Constructs a copy of \a other.
 */
GetRecommendationsRequest::GetRecommendationsRequest(const GetRecommendationsRequest &other)
    : WisdomRequest(new GetRecommendationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRecommendationsRequest object.
 */
GetRecommendationsRequest::GetRecommendationsRequest()
    : WisdomRequest(new GetRecommendationsRequestPrivate(WisdomRequest::GetRecommendationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetRecommendationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRecommendationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRecommendationsRequest::response(QNetworkReply * const reply) const
{
    return new GetRecommendationsResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::GetRecommendationsRequestPrivate
 * \brief The GetRecommendationsRequestPrivate class provides private implementation for GetRecommendationsRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a GetRecommendationsRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
GetRecommendationsRequestPrivate::GetRecommendationsRequestPrivate(
    const WisdomRequest::Action action, GetRecommendationsRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRecommendationsRequest
 * class' copy constructor.
 */
GetRecommendationsRequestPrivate::GetRecommendationsRequestPrivate(
    const GetRecommendationsRequestPrivate &other, GetRecommendationsRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
