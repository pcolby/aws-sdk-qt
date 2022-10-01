// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlaunchconfigurationtemplaterequest.h"
#include "createlaunchconfigurationtemplaterequest_p.h"
#include "createlaunchconfigurationtemplateresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::CreateLaunchConfigurationTemplateRequest
 * \brief The CreateLaunchConfigurationTemplateRequest class provides an interface for Mgn CreateLaunchConfigurationTemplate requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::createLaunchConfigurationTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLaunchConfigurationTemplateRequest::CreateLaunchConfigurationTemplateRequest(const CreateLaunchConfigurationTemplateRequest &other)
    : MgnRequest(new CreateLaunchConfigurationTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLaunchConfigurationTemplateRequest object.
 */
CreateLaunchConfigurationTemplateRequest::CreateLaunchConfigurationTemplateRequest()
    : MgnRequest(new CreateLaunchConfigurationTemplateRequestPrivate(MgnRequest::CreateLaunchConfigurationTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLaunchConfigurationTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLaunchConfigurationTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLaunchConfigurationTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateLaunchConfigurationTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::CreateLaunchConfigurationTemplateRequestPrivate
 * \brief The CreateLaunchConfigurationTemplateRequestPrivate class provides private implementation for CreateLaunchConfigurationTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a CreateLaunchConfigurationTemplateRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
CreateLaunchConfigurationTemplateRequestPrivate::CreateLaunchConfigurationTemplateRequestPrivate(
    const MgnRequest::Action action, CreateLaunchConfigurationTemplateRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLaunchConfigurationTemplateRequest
 * class' copy constructor.
 */
CreateLaunchConfigurationTemplateRequestPrivate::CreateLaunchConfigurationTemplateRequestPrivate(
    const CreateLaunchConfigurationTemplateRequestPrivate &other, CreateLaunchConfigurationTemplateRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
