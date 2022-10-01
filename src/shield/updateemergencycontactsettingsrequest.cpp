// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateemergencycontactsettingsrequest.h"
#include "updateemergencycontactsettingsrequest_p.h"
#include "updateemergencycontactsettingsresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::UpdateEmergencyContactSettingsRequest
 * \brief The UpdateEmergencyContactSettingsRequest class provides an interface for Shield UpdateEmergencyContactSettings requests.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::updateEmergencyContactSettings
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEmergencyContactSettingsRequest::UpdateEmergencyContactSettingsRequest(const UpdateEmergencyContactSettingsRequest &other)
    : ShieldRequest(new UpdateEmergencyContactSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEmergencyContactSettingsRequest object.
 */
UpdateEmergencyContactSettingsRequest::UpdateEmergencyContactSettingsRequest()
    : ShieldRequest(new UpdateEmergencyContactSettingsRequestPrivate(ShieldRequest::UpdateEmergencyContactSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEmergencyContactSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEmergencyContactSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEmergencyContactSettingsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEmergencyContactSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::UpdateEmergencyContactSettingsRequestPrivate
 * \brief The UpdateEmergencyContactSettingsRequestPrivate class provides private implementation for UpdateEmergencyContactSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a UpdateEmergencyContactSettingsRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
UpdateEmergencyContactSettingsRequestPrivate::UpdateEmergencyContactSettingsRequestPrivate(
    const ShieldRequest::Action action, UpdateEmergencyContactSettingsRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEmergencyContactSettingsRequest
 * class' copy constructor.
 */
UpdateEmergencyContactSettingsRequestPrivate::UpdateEmergencyContactSettingsRequestPrivate(
    const UpdateEmergencyContactSettingsRequestPrivate &other, UpdateEmergencyContactSettingsRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
