// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesecurityconfigurationrequest.h"
#include "describesecurityconfigurationrequest_p.h"
#include "describesecurityconfigurationresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DescribeSecurityConfigurationRequest
 * \brief The DescribeSecurityConfigurationRequest class provides an interface for Emr DescribeSecurityConfiguration requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::describeSecurityConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSecurityConfigurationRequest::DescribeSecurityConfigurationRequest(const DescribeSecurityConfigurationRequest &other)
    : EmrRequest(new DescribeSecurityConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSecurityConfigurationRequest object.
 */
DescribeSecurityConfigurationRequest::DescribeSecurityConfigurationRequest()
    : EmrRequest(new DescribeSecurityConfigurationRequestPrivate(EmrRequest::DescribeSecurityConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSecurityConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSecurityConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSecurityConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSecurityConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::DescribeSecurityConfigurationRequestPrivate
 * \brief The DescribeSecurityConfigurationRequestPrivate class provides private implementation for DescribeSecurityConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DescribeSecurityConfigurationRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
DescribeSecurityConfigurationRequestPrivate::DescribeSecurityConfigurationRequestPrivate(
    const EmrRequest::Action action, DescribeSecurityConfigurationRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSecurityConfigurationRequest
 * class' copy constructor.
 */
DescribeSecurityConfigurationRequestPrivate::DescribeSecurityConfigurationRequestPrivate(
    const DescribeSecurityConfigurationRequestPrivate &other, DescribeSecurityConfigurationRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
