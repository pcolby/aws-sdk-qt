// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaccesscontrolconfigurationrequest.h"
#include "describeaccesscontrolconfigurationrequest_p.h"
#include "describeaccesscontrolconfigurationresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeAccessControlConfigurationRequest
 * \brief The DescribeAccessControlConfigurationRequest class provides an interface for Kendra DescribeAccessControlConfiguration requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeAccessControlConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAccessControlConfigurationRequest::DescribeAccessControlConfigurationRequest(const DescribeAccessControlConfigurationRequest &other)
    : KendraRequest(new DescribeAccessControlConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAccessControlConfigurationRequest object.
 */
DescribeAccessControlConfigurationRequest::DescribeAccessControlConfigurationRequest()
    : KendraRequest(new DescribeAccessControlConfigurationRequestPrivate(KendraRequest::DescribeAccessControlConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAccessControlConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAccessControlConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAccessControlConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccessControlConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DescribeAccessControlConfigurationRequestPrivate
 * \brief The DescribeAccessControlConfigurationRequestPrivate class provides private implementation for DescribeAccessControlConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeAccessControlConfigurationRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DescribeAccessControlConfigurationRequestPrivate::DescribeAccessControlConfigurationRequestPrivate(
    const KendraRequest::Action action, DescribeAccessControlConfigurationRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccessControlConfigurationRequest
 * class' copy constructor.
 */
DescribeAccessControlConfigurationRequestPrivate::DescribeAccessControlConfigurationRequestPrivate(
    const DescribeAccessControlConfigurationRequestPrivate &other, DescribeAccessControlConfigurationRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
