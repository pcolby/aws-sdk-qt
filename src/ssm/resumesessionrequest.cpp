// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resumesessionrequest.h"
#include "resumesessionrequest_p.h"
#include "resumesessionresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::ResumeSessionRequest
 * \brief The ResumeSessionRequest class provides an interface for Ssm ResumeSession requests.
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
 * \sa SsmClient::resumeSession
 */

/*!
 * Constructs a copy of \a other.
 */
ResumeSessionRequest::ResumeSessionRequest(const ResumeSessionRequest &other)
    : SsmRequest(new ResumeSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResumeSessionRequest object.
 */
ResumeSessionRequest::ResumeSessionRequest()
    : SsmRequest(new ResumeSessionRequestPrivate(SsmRequest::ResumeSessionAction, this))
{

}

/*!
 * \reimp
 */
bool ResumeSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResumeSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResumeSessionRequest::response(QNetworkReply * const reply) const
{
    return new ResumeSessionResponse(*this, reply);
}

/*!
 * \class QtAws::Ssm::ResumeSessionRequestPrivate
 * \brief The ResumeSessionRequestPrivate class provides private implementation for ResumeSessionRequest.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a ResumeSessionRequestPrivate object for Ssm \a action,
 * with public implementation \a q.
 */
ResumeSessionRequestPrivate::ResumeSessionRequestPrivate(
    const SsmRequest::Action action, ResumeSessionRequest * const q)
    : SsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResumeSessionRequest
 * class' copy constructor.
 */
ResumeSessionRequestPrivate::ResumeSessionRequestPrivate(
    const ResumeSessionRequestPrivate &other, ResumeSessionRequest * const q)
    : SsmRequestPrivate(other, q)
{

}

} // namespace Ssm
} // namespace QtAws
