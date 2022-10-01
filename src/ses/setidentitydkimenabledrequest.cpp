// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setidentitydkimenabledrequest.h"
#include "setidentitydkimenabledrequest_p.h"
#include "setidentitydkimenabledresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SetIdentityDkimEnabledRequest
 * \brief The SetIdentityDkimEnabledRequest class provides an interface for Ses SetIdentityDkimEnabled requests.
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
 * \sa SesClient::setIdentityDkimEnabled
 */

/*!
 * Constructs a copy of \a other.
 */
SetIdentityDkimEnabledRequest::SetIdentityDkimEnabledRequest(const SetIdentityDkimEnabledRequest &other)
    : SesRequest(new SetIdentityDkimEnabledRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetIdentityDkimEnabledRequest object.
 */
SetIdentityDkimEnabledRequest::SetIdentityDkimEnabledRequest()
    : SesRequest(new SetIdentityDkimEnabledRequestPrivate(SesRequest::SetIdentityDkimEnabledAction, this))
{

}

/*!
 * \reimp
 */
bool SetIdentityDkimEnabledRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetIdentityDkimEnabledResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetIdentityDkimEnabledRequest::response(QNetworkReply * const reply) const
{
    return new SetIdentityDkimEnabledResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::SetIdentityDkimEnabledRequestPrivate
 * \brief The SetIdentityDkimEnabledRequestPrivate class provides private implementation for SetIdentityDkimEnabledRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SetIdentityDkimEnabledRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
SetIdentityDkimEnabledRequestPrivate::SetIdentityDkimEnabledRequestPrivate(
    const SesRequest::Action action, SetIdentityDkimEnabledRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetIdentityDkimEnabledRequest
 * class' copy constructor.
 */
SetIdentityDkimEnabledRequestPrivate::SetIdentityDkimEnabledRequestPrivate(
    const SetIdentityDkimEnabledRequestPrivate &other, SetIdentityDkimEnabledRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
