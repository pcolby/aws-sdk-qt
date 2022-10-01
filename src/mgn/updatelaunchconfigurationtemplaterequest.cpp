// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelaunchconfigurationtemplaterequest.h"
#include "updatelaunchconfigurationtemplaterequest_p.h"
#include "updatelaunchconfigurationtemplateresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::UpdateLaunchConfigurationTemplateRequest
 * \brief The UpdateLaunchConfigurationTemplateRequest class provides an interface for Mgn UpdateLaunchConfigurationTemplate requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::updateLaunchConfigurationTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLaunchConfigurationTemplateRequest::UpdateLaunchConfigurationTemplateRequest(const UpdateLaunchConfigurationTemplateRequest &other)
    : MgnRequest(new UpdateLaunchConfigurationTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLaunchConfigurationTemplateRequest object.
 */
UpdateLaunchConfigurationTemplateRequest::UpdateLaunchConfigurationTemplateRequest()
    : MgnRequest(new UpdateLaunchConfigurationTemplateRequestPrivate(MgnRequest::UpdateLaunchConfigurationTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLaunchConfigurationTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLaunchConfigurationTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLaunchConfigurationTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLaunchConfigurationTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::UpdateLaunchConfigurationTemplateRequestPrivate
 * \brief The UpdateLaunchConfigurationTemplateRequestPrivate class provides private implementation for UpdateLaunchConfigurationTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a UpdateLaunchConfigurationTemplateRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
UpdateLaunchConfigurationTemplateRequestPrivate::UpdateLaunchConfigurationTemplateRequestPrivate(
    const MgnRequest::Action action, UpdateLaunchConfigurationTemplateRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLaunchConfigurationTemplateRequest
 * class' copy constructor.
 */
UpdateLaunchConfigurationTemplateRequestPrivate::UpdateLaunchConfigurationTemplateRequestPrivate(
    const UpdateLaunchConfigurationTemplateRequestPrivate &other, UpdateLaunchConfigurationTemplateRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
