// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesolutionversionrequest.h"
#include "describesolutionversionrequest_p.h"
#include "describesolutionversionresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeSolutionVersionRequest
 * \brief The DescribeSolutionVersionRequest class provides an interface for Personalize DescribeSolutionVersion requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeSolutionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSolutionVersionRequest::DescribeSolutionVersionRequest(const DescribeSolutionVersionRequest &other)
    : PersonalizeRequest(new DescribeSolutionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSolutionVersionRequest object.
 */
DescribeSolutionVersionRequest::DescribeSolutionVersionRequest()
    : PersonalizeRequest(new DescribeSolutionVersionRequestPrivate(PersonalizeRequest::DescribeSolutionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSolutionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSolutionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSolutionVersionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSolutionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeSolutionVersionRequestPrivate
 * \brief The DescribeSolutionVersionRequestPrivate class provides private implementation for DescribeSolutionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeSolutionVersionRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeSolutionVersionRequestPrivate::DescribeSolutionVersionRequestPrivate(
    const PersonalizeRequest::Action action, DescribeSolutionVersionRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSolutionVersionRequest
 * class' copy constructor.
 */
DescribeSolutionVersionRequestPrivate::DescribeSolutionVersionRequestPrivate(
    const DescribeSolutionVersionRequestPrivate &other, DescribeSolutionVersionRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
