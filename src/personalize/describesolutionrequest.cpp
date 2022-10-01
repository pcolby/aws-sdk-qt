// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesolutionrequest.h"
#include "describesolutionrequest_p.h"
#include "describesolutionresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeSolutionRequest
 * \brief The DescribeSolutionRequest class provides an interface for Personalize DescribeSolution requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeSolution
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSolutionRequest::DescribeSolutionRequest(const DescribeSolutionRequest &other)
    : PersonalizeRequest(new DescribeSolutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSolutionRequest object.
 */
DescribeSolutionRequest::DescribeSolutionRequest()
    : PersonalizeRequest(new DescribeSolutionRequestPrivate(PersonalizeRequest::DescribeSolutionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSolutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSolutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSolutionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSolutionResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeSolutionRequestPrivate
 * \brief The DescribeSolutionRequestPrivate class provides private implementation for DescribeSolutionRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeSolutionRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeSolutionRequestPrivate::DescribeSolutionRequestPrivate(
    const PersonalizeRequest::Action action, DescribeSolutionRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSolutionRequest
 * class' copy constructor.
 */
DescribeSolutionRequestPrivate::DescribeSolutionRequestPrivate(
    const DescribeSolutionRequestPrivate &other, DescribeSolutionRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
