// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatereplicationconfigurationtemplaterequest.h"
#include "updatereplicationconfigurationtemplaterequest_p.h"
#include "updatereplicationconfigurationtemplateresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::UpdateReplicationConfigurationTemplateRequest
 * \brief The UpdateReplicationConfigurationTemplateRequest class provides an interface for Mgn UpdateReplicationConfigurationTemplate requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::updateReplicationConfigurationTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateReplicationConfigurationTemplateRequest::UpdateReplicationConfigurationTemplateRequest(const UpdateReplicationConfigurationTemplateRequest &other)
    : MgnRequest(new UpdateReplicationConfigurationTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateReplicationConfigurationTemplateRequest object.
 */
UpdateReplicationConfigurationTemplateRequest::UpdateReplicationConfigurationTemplateRequest()
    : MgnRequest(new UpdateReplicationConfigurationTemplateRequestPrivate(MgnRequest::UpdateReplicationConfigurationTemplateAction, this))
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
 * \class QtAws::Mgn::UpdateReplicationConfigurationTemplateRequestPrivate
 * \brief The UpdateReplicationConfigurationTemplateRequestPrivate class provides private implementation for UpdateReplicationConfigurationTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a UpdateReplicationConfigurationTemplateRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
UpdateReplicationConfigurationTemplateRequestPrivate::UpdateReplicationConfigurationTemplateRequestPrivate(
    const MgnRequest::Action action, UpdateReplicationConfigurationTemplateRequest * const q)
    : MgnRequestPrivate(action, q)
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
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
