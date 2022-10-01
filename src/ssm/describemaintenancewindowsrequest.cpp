// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemaintenancewindowsrequest.h"
#include "describemaintenancewindowsrequest_p.h"
#include "describemaintenancewindowsresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::DescribeMaintenanceWindowsRequest
 * \brief The DescribeMaintenanceWindowsRequest class provides an interface for Ssm DescribeMaintenanceWindows requests.
 *
 * \inmodule QtAwsSsm
 *
 *  Amazon Web Services Systems Manager is a collection of capabilities to help you manage your applications and
 *  infrastructure running in the Amazon Web Services Cloud;. Systems Manager simplifies application and resource
 *  management, shortens the time to detect and resolve operational problems, and helps you manage your Amazon Web Services
 *  resources securely at
 * 
 *  scale>
 * 
 *  This reference is intended to be used with the <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">Amazon Web Services Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites. For more information, see <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting up Amazon
 *  Web Services Systems
 * 
 *  Manager</a>> <p class="title"> <b>Related resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  For information about how to use a Query API, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API requests</a>.
 * 
 *  </p </li> <li>
 * 
 *  For information about other API operations you can perform on EC2 instances, see the <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AppConfig, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AppConfig User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AppConfig API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about Incident Manager, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">Incident Manager User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">Incident Manager API
 *
 * \sa SsmClient::describeMaintenanceWindows
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMaintenanceWindowsRequest::DescribeMaintenanceWindowsRequest(const DescribeMaintenanceWindowsRequest &other)
    : SsmRequest(new DescribeMaintenanceWindowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMaintenanceWindowsRequest object.
 */
DescribeMaintenanceWindowsRequest::DescribeMaintenanceWindowsRequest()
    : SsmRequest(new DescribeMaintenanceWindowsRequestPrivate(SsmRequest::DescribeMaintenanceWindowsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMaintenanceWindowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMaintenanceWindowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMaintenanceWindowsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMaintenanceWindowsResponse(*this, reply);
}

/*!
 * \class QtAws::Ssm::DescribeMaintenanceWindowsRequestPrivate
 * \brief The DescribeMaintenanceWindowsRequestPrivate class provides private implementation for DescribeMaintenanceWindowsRequest.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a DescribeMaintenanceWindowsRequestPrivate object for Ssm \a action,
 * with public implementation \a q.
 */
DescribeMaintenanceWindowsRequestPrivate::DescribeMaintenanceWindowsRequestPrivate(
    const SsmRequest::Action action, DescribeMaintenanceWindowsRequest * const q)
    : SsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMaintenanceWindowsRequest
 * class' copy constructor.
 */
DescribeMaintenanceWindowsRequestPrivate::DescribeMaintenanceWindowsRequestPrivate(
    const DescribeMaintenanceWindowsRequestPrivate &other, DescribeMaintenanceWindowsRequest * const q)
    : SsmRequestPrivate(other, q)
{

}

} // namespace Ssm
} // namespace QtAws
