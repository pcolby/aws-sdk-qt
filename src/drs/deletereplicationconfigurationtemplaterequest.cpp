// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereplicationconfigurationtemplaterequest.h"
#include "deletereplicationconfigurationtemplaterequest_p.h"
#include "deletereplicationconfigurationtemplateresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DeleteReplicationConfigurationTemplateRequest
 * \brief The DeleteReplicationConfigurationTemplateRequest class provides an interface for Drs DeleteReplicationConfigurationTemplate requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::deleteReplicationConfigurationTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReplicationConfigurationTemplateRequest::DeleteReplicationConfigurationTemplateRequest(const DeleteReplicationConfigurationTemplateRequest &other)
    : DrsRequest(new DeleteReplicationConfigurationTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReplicationConfigurationTemplateRequest object.
 */
DeleteReplicationConfigurationTemplateRequest::DeleteReplicationConfigurationTemplateRequest()
    : DrsRequest(new DeleteReplicationConfigurationTemplateRequestPrivate(DrsRequest::DeleteReplicationConfigurationTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReplicationConfigurationTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReplicationConfigurationTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReplicationConfigurationTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReplicationConfigurationTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::DeleteReplicationConfigurationTemplateRequestPrivate
 * \brief The DeleteReplicationConfigurationTemplateRequestPrivate class provides private implementation for DeleteReplicationConfigurationTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DeleteReplicationConfigurationTemplateRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
DeleteReplicationConfigurationTemplateRequestPrivate::DeleteReplicationConfigurationTemplateRequestPrivate(
    const DrsRequest::Action action, DeleteReplicationConfigurationTemplateRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReplicationConfigurationTemplateRequest
 * class' copy constructor.
 */
DeleteReplicationConfigurationTemplateRequestPrivate::DeleteReplicationConfigurationTemplateRequestPrivate(
    const DeleteReplicationConfigurationTemplateRequestPrivate &other, DeleteReplicationConfigurationTemplateRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
