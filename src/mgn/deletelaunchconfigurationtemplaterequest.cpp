// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelaunchconfigurationtemplaterequest.h"
#include "deletelaunchconfigurationtemplaterequest_p.h"
#include "deletelaunchconfigurationtemplateresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DeleteLaunchConfigurationTemplateRequest
 * \brief The DeleteLaunchConfigurationTemplateRequest class provides an interface for Mgn DeleteLaunchConfigurationTemplate requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::deleteLaunchConfigurationTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLaunchConfigurationTemplateRequest::DeleteLaunchConfigurationTemplateRequest(const DeleteLaunchConfigurationTemplateRequest &other)
    : MgnRequest(new DeleteLaunchConfigurationTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLaunchConfigurationTemplateRequest object.
 */
DeleteLaunchConfigurationTemplateRequest::DeleteLaunchConfigurationTemplateRequest()
    : MgnRequest(new DeleteLaunchConfigurationTemplateRequestPrivate(MgnRequest::DeleteLaunchConfigurationTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLaunchConfigurationTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLaunchConfigurationTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLaunchConfigurationTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLaunchConfigurationTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::DeleteLaunchConfigurationTemplateRequestPrivate
 * \brief The DeleteLaunchConfigurationTemplateRequestPrivate class provides private implementation for DeleteLaunchConfigurationTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DeleteLaunchConfigurationTemplateRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
DeleteLaunchConfigurationTemplateRequestPrivate::DeleteLaunchConfigurationTemplateRequestPrivate(
    const MgnRequest::Action action, DeleteLaunchConfigurationTemplateRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLaunchConfigurationTemplateRequest
 * class' copy constructor.
 */
DeleteLaunchConfigurationTemplateRequestPrivate::DeleteLaunchConfigurationTemplateRequestPrivate(
    const DeleteLaunchConfigurationTemplateRequestPrivate &other, DeleteLaunchConfigurationTemplateRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
