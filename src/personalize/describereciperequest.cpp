/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
