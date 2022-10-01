// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setidentityfeedbackforwardingenabledrequest.h"
#include "setidentityfeedbackforwardingenabledrequest_p.h"
#include "setidentityfeedbackforwardingenabledresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SetIdentityFeedbackForwardingEnabledRequest
 * \brief The SetIdentityFeedbackForwardingEnabledRequest class provides an interface for Ses SetIdentityFeedbackForwardingEnabled requests.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::setIdentityFeedbackForwardingEnabled
 */

/*!
 * Constructs a copy of \a other.
 */
SetIdentityFeedbackForwardingEnabledRequest::SetIdentityFeedbackForwardingEnabledRequest(const SetIdentityFeedbackForwardingEnabledRequest &other)
    : SesRequest(new SetIdentityFeedbackForwardingEnabledRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetIdentityFeedbackForwardingEnabledRequest object.
 */
SetIdentityFeedbackForwardingEnabledRequest::SetIdentityFeedbackForwardingEnabledRequest()
    : SesRequest(new SetIdentityFeedbackForwardingEnabledRequestPrivate(SesRequest::SetIdentityFeedbackForwardingEnabledAction, this))
{

}

/*!
 * \reimp
 */
bool SetIdentityFeedbackForwardingEnabledRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetIdentityFeedbackForwardingEnabledResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetIdentityFeedbackForwardingEnabledRequest::response(QNetworkReply * const reply) const
{
    return new SetIdentityFeedbackForwardingEnabledResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::SetIdentityFeedbackForwardingEnabledRequestPrivate
 * \brief The SetIdentityFeedbackForwardingEnabledRequestPrivate class provides private implementation for SetIdentityFeedbackForwardingEnabledRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SetIdentityFeedbackForwardingEnabledRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
SetIdentityFeedbackForwardingEnabledRequestPrivate::SetIdentityFeedbackForwardingEnabledRequestPrivate(
    const SesRequest::Action action, SetIdentityFeedbackForwardingEnabledRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetIdentityFeedbackForwardingEnabledRequest
 * class' copy constructor.
 */
SetIdentityFeedbackForwardingEnabledRequestPrivate::SetIdentityFeedbackForwardingEnabledRequestPrivate(
    const SetIdentityFeedbackForwardingEnabledRequestPrivate &other, SetIdentityFeedbackForwardingEnabledRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
