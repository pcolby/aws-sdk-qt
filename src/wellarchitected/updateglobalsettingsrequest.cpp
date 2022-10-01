// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateglobalsettingsrequest.h"
#include "updateglobalsettingsrequest_p.h"
#include "updateglobalsettingsresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::UpdateGlobalSettingsRequest
 * \brief The UpdateGlobalSettingsRequest class provides an interface for WellArchitected UpdateGlobalSettings requests.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::updateGlobalSettings
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGlobalSettingsRequest::UpdateGlobalSettingsRequest(const UpdateGlobalSettingsRequest &other)
    : WellArchitectedRequest(new UpdateGlobalSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGlobalSettingsRequest object.
 */
UpdateGlobalSettingsRequest::UpdateGlobalSettingsRequest()
    : WellArchitectedRequest(new UpdateGlobalSettingsRequestPrivate(WellArchitectedRequest::UpdateGlobalSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGlobalSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGlobalSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGlobalSettingsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGlobalSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::UpdateGlobalSettingsRequestPrivate
 * \brief The UpdateGlobalSettingsRequestPrivate class provides private implementation for UpdateGlobalSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a UpdateGlobalSettingsRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
UpdateGlobalSettingsRequestPrivate::UpdateGlobalSettingsRequestPrivate(
    const WellArchitectedRequest::Action action, UpdateGlobalSettingsRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGlobalSettingsRequest
 * class' copy constructor.
 */
UpdateGlobalSettingsRequestPrivate::UpdateGlobalSettingsRequestPrivate(
    const UpdateGlobalSettingsRequestPrivate &other, UpdateGlobalSettingsRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
