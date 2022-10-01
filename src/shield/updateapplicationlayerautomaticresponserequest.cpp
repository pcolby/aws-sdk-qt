// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapplicationlayerautomaticresponserequest.h"
#include "updateapplicationlayerautomaticresponserequest_p.h"
#include "updateapplicationlayerautomaticresponseresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::UpdateApplicationLayerAutomaticResponseRequest
 * \brief The UpdateApplicationLayerAutomaticResponseRequest class provides an interface for Shield UpdateApplicationLayerAutomaticResponse requests.
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
 * \sa ShieldClient::updateApplicationLayerAutomaticResponse
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApplicationLayerAutomaticResponseRequest::UpdateApplicationLayerAutomaticResponseRequest(const UpdateApplicationLayerAutomaticResponseRequest &other)
    : ShieldRequest(new UpdateApplicationLayerAutomaticResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApplicationLayerAutomaticResponseRequest object.
 */
UpdateApplicationLayerAutomaticResponseRequest::UpdateApplicationLayerAutomaticResponseRequest()
    : ShieldRequest(new UpdateApplicationLayerAutomaticResponseRequestPrivate(ShieldRequest::UpdateApplicationLayerAutomaticResponseAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApplicationLayerAutomaticResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApplicationLayerAutomaticResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApplicationLayerAutomaticResponseRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApplicationLayerAutomaticResponseResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::UpdateApplicationLayerAutomaticResponseRequestPrivate
 * \brief The UpdateApplicationLayerAutomaticResponseRequestPrivate class provides private implementation for UpdateApplicationLayerAutomaticResponseRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a UpdateApplicationLayerAutomaticResponseRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
UpdateApplicationLayerAutomaticResponseRequestPrivate::UpdateApplicationLayerAutomaticResponseRequestPrivate(
    const ShieldRequest::Action action, UpdateApplicationLayerAutomaticResponseRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApplicationLayerAutomaticResponseRequest
 * class' copy constructor.
 */
UpdateApplicationLayerAutomaticResponseRequestPrivate::UpdateApplicationLayerAutomaticResponseRequestPrivate(
    const UpdateApplicationLayerAutomaticResponseRequestPrivate &other, UpdateApplicationLayerAutomaticResponseRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
