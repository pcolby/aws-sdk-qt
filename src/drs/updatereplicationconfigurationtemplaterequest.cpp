// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatereplicationconfigurationtemplaterequest.h"
#include "updatereplicationconfigurationtemplaterequest_p.h"
#include "updatereplicationconfigurationtemplateresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::UpdateReplicationConfigurationTemplateRequest
 * \brief The UpdateReplicationConfigurationTemplateRequest class provides an interface for Drs UpdateReplicationConfigurationTemplate requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::updateReplicationConfigurationTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateReplicationConfigurationTemplateRequest::UpdateReplicationConfigurationTemplateRequest(const UpdateReplicationConfigurationTemplateRequest &other)
    : DrsRequest(new UpdateReplicationConfigurationTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateReplicationConfigurationTemplateRequest object.
 */
UpdateReplicationConfigurationTemplateRequest::UpdateReplicationConfigurationTemplateRequest()
    : DrsRequest(new UpdateReplicationConfigurationTemplateRequestPrivate(DrsRequest::UpdateReplicationConfigurationTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateReplicationConfigurationTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateReplicationConfigurationTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateReplicationConfigurationTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateReplicationConfigurationTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::UpdateReplicationConfigurationTemplateRequestPrivate
 * \brief The UpdateReplicationConfigurationTemplateRequestPrivate class provides private implementation for UpdateReplicationConfigurationTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a UpdateReplicationConfigurationTemplateRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
UpdateReplicationConfigurationTemplateRequestPrivate::UpdateReplicationConfigurationTemplateRequestPrivate(
    const DrsRequest::Action action, UpdateReplicationConfigurationTemplateRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateReplicationConfigurationTemplateRequest
 * class' copy constructor.
 */
UpdateReplicationConfigurationTemplateRequestPrivate::UpdateReplicationConfigurationTemplateRequestPrivate(
    const UpdateReplicationConfigurationTemplateRequestPrivate &other, UpdateReplicationConfigurationTemplateRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
