// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeautoterminationpolicyrequest.h"
#include "removeautoterminationpolicyrequest_p.h"
#include "removeautoterminationpolicyresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::RemoveAutoTerminationPolicyRequest
 * \brief The RemoveAutoTerminationPolicyRequest class provides an interface for Emr RemoveAutoTerminationPolicy requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::removeAutoTerminationPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveAutoTerminationPolicyRequest::RemoveAutoTerminationPolicyRequest(const RemoveAutoTerminationPolicyRequest &other)
    : EmrRequest(new RemoveAutoTerminationPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveAutoTerminationPolicyRequest object.
 */
RemoveAutoTerminationPolicyRequest::RemoveAutoTerminationPolicyRequest()
    : EmrRequest(new RemoveAutoTerminationPolicyRequestPrivate(EmrRequest::RemoveAutoTerminationPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveAutoTerminationPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveAutoTerminationPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveAutoTerminationPolicyRequest::response(QNetworkReply * const reply) const
{
    return new RemoveAutoTerminationPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::RemoveAutoTerminationPolicyRequestPrivate
 * \brief The RemoveAutoTerminationPolicyRequestPrivate class provides private implementation for RemoveAutoTerminationPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a RemoveAutoTerminationPolicyRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
RemoveAutoTerminationPolicyRequestPrivate::RemoveAutoTerminationPolicyRequestPrivate(
    const EmrRequest::Action action, RemoveAutoTerminationPolicyRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveAutoTerminationPolicyRequest
 * class' copy constructor.
 */
RemoveAutoTerminationPolicyRequestPrivate::RemoveAutoTerminationPolicyRequestPrivate(
    const RemoveAutoTerminationPolicyRequestPrivate &other, RemoveAutoTerminationPolicyRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
