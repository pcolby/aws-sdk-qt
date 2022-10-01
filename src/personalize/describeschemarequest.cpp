// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeschemarequest.h"
#include "describeschemarequest_p.h"
#include "describeschemaresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeSchemaRequest
 * \brief The DescribeSchemaRequest class provides an interface for Personalize DescribeSchema requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeSchema
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSchemaRequest::DescribeSchemaRequest(const DescribeSchemaRequest &other)
    : PersonalizeRequest(new DescribeSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSchemaRequest object.
 */
DescribeSchemaRequest::DescribeSchemaRequest()
    : PersonalizeRequest(new DescribeSchemaRequestPrivate(PersonalizeRequest::DescribeSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSchemaRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DescribeSchemaRequestPrivate
 * \brief The DescribeSchemaRequestPrivate class provides private implementation for DescribeSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeSchemaRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DescribeSchemaRequestPrivate::DescribeSchemaRequestPrivate(
    const PersonalizeRequest::Action action, DescribeSchemaRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSchemaRequest
 * class' copy constructor.
 */
DescribeSchemaRequestPrivate::DescribeSchemaRequestPrivate(
    const DescribeSchemaRequestPrivate &other, DescribeSchemaRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
