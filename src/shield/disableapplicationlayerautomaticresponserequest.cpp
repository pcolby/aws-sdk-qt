// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disableapplicationlayerautomaticresponserequest.h"
#include "disableapplicationlayerautomaticresponserequest_p.h"
#include "disableapplicationlayerautomaticresponseresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DisableApplicationLayerAutomaticResponseRequest
 * \brief The DisableApplicationLayerAutomaticResponseRequest class provides an interface for Shield DisableApplicationLayerAutomaticResponse requests.
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
 * \sa ShieldClient::disableApplicationLayerAutomaticResponse
 */

/*!
 * Constructs a copy of \a other.
 */
DisableApplicationLayerAutomaticResponseRequest::DisableApplicationLayerAutomaticResponseRequest(const DisableApplicationLayerAutomaticResponseRequest &other)
    : ShieldRequest(new DisableApplicationLayerAutomaticResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableApplicationLayerAutomaticResponseRequest object.
 */
DisableApplicationLayerAutomaticResponseRequest::DisableApplicationLayerAutomaticResponseRequest()
    : ShieldRequest(new DisableApplicationLayerAutomaticResponseRequestPrivate(ShieldRequest::DisableApplicationLayerAutomaticResponseAction, this))
{

}

/*!
 * \reimp
 */
bool DisableApplicationLayerAutomaticResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableApplicationLayerAutomaticResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableApplicationLayerAutomaticResponseRequest::response(QNetworkReply * const reply) const
{
    return new DisableApplicationLayerAutomaticResponseResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::DisableApplicationLayerAutomaticResponseRequestPrivate
 * \brief The DisableApplicationLayerAutomaticResponseRequestPrivate class provides private implementation for DisableApplicationLayerAutomaticResponseRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DisableApplicationLayerAutomaticResponseRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
DisableApplicationLayerAutomaticResponseRequestPrivate::DisableApplicationLayerAutomaticResponseRequestPrivate(
    const ShieldRequest::Action action, DisableApplicationLayerAutomaticResponseRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableApplicationLayerAutomaticResponseRequest
 * class' copy constructor.
 */
DisableApplicationLayerAutomaticResponseRequestPrivate::DisableApplicationLayerAutomaticResponseRequestPrivate(
    const DisableApplicationLayerAutomaticResponseRequestPrivate &other, DisableApplicationLayerAutomaticResponseRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
