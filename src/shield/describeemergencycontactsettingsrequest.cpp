// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeemergencycontactsettingsrequest.h"
#include "describeemergencycontactsettingsrequest_p.h"
#include "describeemergencycontactsettingsresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DescribeEmergencyContactSettingsRequest
 * \brief The DescribeEmergencyContactSettingsRequest class provides an interface for Shield DescribeEmergencyContactSettings requests.
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
 * \sa ShieldClient::describeEmergencyContactSettings
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEmergencyContactSettingsRequest::DescribeEmergencyContactSettingsRequest(const DescribeEmergencyContactSettingsRequest &other)
    : ShieldRequest(new DescribeEmergencyContactSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEmergencyContactSettingsRequest object.
 */
DescribeEmergencyContactSettingsRequest::DescribeEmergencyContactSettingsRequest()
    : ShieldRequest(new DescribeEmergencyContactSettingsRequestPrivate(ShieldRequest::DescribeEmergencyContactSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEmergencyContactSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEmergencyContactSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEmergencyContactSettingsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEmergencyContactSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::DescribeEmergencyContactSettingsRequestPrivate
 * \brief The DescribeEmergencyContactSettingsRequestPrivate class provides private implementation for DescribeEmergencyContactSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DescribeEmergencyContactSettingsRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
DescribeEmergencyContactSettingsRequestPrivate::DescribeEmergencyContactSettingsRequestPrivate(
    const ShieldRequest::Action action, DescribeEmergencyContactSettingsRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEmergencyContactSettingsRequest
 * class' copy constructor.
 */
DescribeEmergencyContactSettingsRequestPrivate::DescribeEmergencyContactSettingsRequestPrivate(
    const DescribeEmergencyContactSettingsRequestPrivate &other, DescribeEmergencyContactSettingsRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
