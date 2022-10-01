// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeassociationrequest.h"
#include "describeassociationrequest_p.h"
#include "describeassociationresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::DescribeAssociationRequest
 * \brief The DescribeAssociationRequest class provides an interface for Ssm DescribeAssociation requests.
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
 * \sa SsmClient::describeAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAssociationRequest::DescribeAssociationRequest(const DescribeAssociationRequest &other)
    : SsmRequest(new DescribeAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAssociationRequest object.
 */
DescribeAssociationRequest::DescribeAssociationRequest()
    : SsmRequest(new DescribeAssociationRequestPrivate(SsmRequest::DescribeAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAssociationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::Ssm::DescribeAssociationRequestPrivate
 * \brief The DescribeAssociationRequestPrivate class provides private implementation for DescribeAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a DescribeAssociationRequestPrivate object for Ssm \a action,
 * with public implementation \a q.
 */
DescribeAssociationRequestPrivate::DescribeAssociationRequestPrivate(
    const SsmRequest::Action action, DescribeAssociationRequest * const q)
    : SsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAssociationRequest
 * class' copy constructor.
 */
DescribeAssociationRequestPrivate::DescribeAssociationRequestPrivate(
    const DescribeAssociationRequestPrivate &other, DescribeAssociationRequest * const q)
    : SsmRequestPrivate(other, q)
{

}

} // namespace Ssm
} // namespace QtAws
