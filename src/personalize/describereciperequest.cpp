// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereciperequest.h"
#include "describereciperequest_p.h"
#include "describereciperesponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeRecipeRequest
 * \brief The DescribeRecipeRequest class provides an interface for Personalize DescribeRecipe requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeRecipe
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRecipeRequest::DescribeRecipeRequest(const DescribeRecipeRequest &other)
    : PersonalizeRequest(new DescribeRecipeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRecipeRequest object.
 */
DescribeRecipeRequest::DescribeRecipeRequest()
    : PersonalizeRequest(new DescribeRecipeRequestPrivate(PersonalizeRequest::DescribeRecipeAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRecipeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRecipeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRecipeRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRecipeResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeRecipeRequestPrivate
 * \brief The DescribeRecipeRequestPrivate class provides private implementation for DescribeRecipeRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeRecipeRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeRecipeRequestPrivate::DescribeRecipeRequestPrivate(
    const PersonalizeRequest::Action action, DescribeRecipeRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRecipeRequest
 * class' copy constructor.
 */
DescribeRecipeRequestPrivate::DescribeRecipeRequestPrivate(
    const DescribeRecipeRequestPrivate &other, DescribeRecipeRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
