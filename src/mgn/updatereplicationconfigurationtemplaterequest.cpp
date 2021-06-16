/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatereplicationconfigurationtemplaterequest.h"
#include "updatereplicationconfigurationtemplaterequest_p.h"
#include "updatereplicationconfigurationtemplateresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::UpdateReplicationConfigurationTemplateRequest
 * \brief The UpdateReplicationConfigurationTemplateRequest class provides an interface for mgn UpdateReplicationConfigurationTemplate requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::updateReplicationConfigurationTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateReplicationConfigurationTemplateRequest::UpdateReplicationConfigurationTemplateRequest(const UpdateReplicationConfigurationTemplateRequest &other)
    : mgnRequest(new UpdateReplicationConfigurationTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateReplicationConfigurationTemplateRequest object.
 */
UpdateReplicationConfigurationTemplateRequest::UpdateReplicationConfigurationTemplateRequest()
    : mgnRequest(new UpdateReplicationConfigurationTemplateRequestPrivate(mgnRequest::UpdateReplicationConfigurationTemplateAction, this))
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
 * \class QtAws::mgn::UpdateReplicationConfigurationTemplateRequestPrivate
 * \brief The UpdateReplicationConfigurationTemplateRequestPrivate class provides private implementation for UpdateReplicationConfigurationTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a UpdateReplicationConfigurationTemplateRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
UpdateReplicationConfigurationTemplateRequestPrivate::UpdateReplicationConfigurationTemplateRequestPrivate(
    const mgnRequest::Action action, UpdateReplicationConfigurationTemplateRequest * const q)
    : mgnRequestPrivate(action, q)
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
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
