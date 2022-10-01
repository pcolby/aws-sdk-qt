// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreplicationconfigurationtemplaterequest.h"
#include "createreplicationconfigurationtemplaterequest_p.h"
#include "createreplicationconfigurationtemplateresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::CreateReplicationConfigurationTemplateRequest
 * \brief The CreateReplicationConfigurationTemplateRequest class provides an interface for Drs CreateReplicationConfigurationTemplate requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::createReplicationConfigurationTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateReplicationConfigurationTemplateRequest::CreateReplicationConfigurationTemplateRequest(const CreateReplicationConfigurationTemplateRequest &other)
    : DrsRequest(new CreateReplicationConfigurationTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateReplicationConfigurationTemplateRequest object.
 */
CreateReplicationConfigurationTemplateRequest::CreateReplicationConfigurationTemplateRequest()
    : DrsRequest(new CreateReplicationConfigurationTemplateRequestPrivate(DrsRequest::CreateReplicationConfigurationTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateReplicationConfigurationTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateReplicationConfigurationTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateReplicationConfigurationTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateReplicationConfigurationTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::CreateReplicationConfigurationTemplateRequestPrivate
 * \brief The CreateReplicationConfigurationTemplateRequestPrivate class provides private implementation for CreateReplicationConfigurationTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a CreateReplicationConfigurationTemplateRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
CreateReplicationConfigurationTemplateRequestPrivate::CreateReplicationConfigurationTemplateRequestPrivate(
    const DrsRequest::Action action, CreateReplicationConfigurationTemplateRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateReplicationConfigurationTemplateRequest
 * class' copy constructor.
 */
CreateReplicationConfigurationTemplateRequestPrivate::CreateReplicationConfigurationTemplateRequestPrivate(
    const CreateReplicationConfigurationTemplateRequestPrivate &other, CreateReplicationConfigurationTemplateRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
