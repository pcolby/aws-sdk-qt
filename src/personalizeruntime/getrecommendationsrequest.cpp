// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecommendationsrequest.h"
#include "getrecommendationsrequest_p.h"
#include "getrecommendationsresponse.h"
#include "personalizeruntimerequest_p.h"

namespace QtAws {
namespace PersonalizeRuntime {

/*!
 * \class QtAws::PersonalizeRuntime::GetRecommendationsRequest
 * \brief The GetRecommendationsRequest class provides an interface for PersonalizeRuntime GetRecommendations requests.
 *
 * \inmodule QtAwsPersonalizeRuntime
 *
 *
 * \sa PersonalizeRuntimeClient::getRecommendations
 */

/*!
 * Constructs a copy of \a other.
 */
GetRecommendationsRequest::GetRecommendationsRequest(const GetRecommendationsRequest &other)
    : PersonalizeRuntimeRequest(new GetRecommendationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRecommendationsRequest object.
 */
GetRecommendationsRequest::GetRecommendationsRequest()
    : PersonalizeRuntimeRequest(new GetRecommendationsRequestPrivate(PersonalizeRuntimeRequest::GetRecommendationsAction, this))
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
 * \class QtAws::PersonalizeRuntime::GetRecommendationsRequestPrivate
 * \brief The GetRecommendationsRequestPrivate class provides private implementation for GetRecommendationsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalizeRuntime
 */

/*!
 * Constructs a GetRecommendationsRequestPrivate object for PersonalizeRuntime \a action,
 * with public implementation \a q.
 */
GetRecommendationsRequestPrivate::GetRecommendationsRequestPrivate(
    const PersonalizeRuntimeRequest::Action action, GetRecommendationsRequest * const q)
    : PersonalizeRuntimeRequestPrivate(action, q)
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
    : PersonalizeRuntimeRequestPrivate(other, q)
{

}

} // namespace PersonalizeRuntime
} // namespace QtAws
