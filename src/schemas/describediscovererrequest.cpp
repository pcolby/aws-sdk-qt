// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describediscovererrequest.h"
#include "describediscovererrequest_p.h"
#include "describediscovererresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DescribeDiscovererRequest
 * \brief The DescribeDiscovererRequest class provides an interface for Schemas DescribeDiscoverer requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::describeDiscoverer
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDiscovererRequest::DescribeDiscovererRequest(const DescribeDiscovererRequest &other)
    : SchemasRequest(new DescribeDiscovererRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDiscovererRequest object.
 */
DescribeDiscovererRequest::DescribeDiscovererRequest()
    : SchemasRequest(new DescribeDiscovererRequestPrivate(SchemasRequest::DescribeDiscovererAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDiscovererRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDiscovererResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDiscovererRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDiscovererResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::DescribeDiscovererRequestPrivate
 * \brief The DescribeDiscovererRequestPrivate class provides private implementation for DescribeDiscovererRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DescribeDiscovererRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
DescribeDiscovererRequestPrivate::DescribeDiscovererRequestPrivate(
    const SchemasRequest::Action action, DescribeDiscovererRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDiscovererRequest
 * class' copy constructor.
 */
DescribeDiscovererRequestPrivate::DescribeDiscovererRequestPrivate(
    const DescribeDiscovererRequestPrivate &other, DescribeDiscovererRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
