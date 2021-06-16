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

#include "deletereplicationconfigurationtemplaterequest.h"
#include "deletereplicationconfigurationtemplaterequest_p.h"
#include "deletereplicationconfigurationtemplateresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::DeleteReplicationConfigurationTemplateRequest
 * \brief The DeleteReplicationConfigurationTemplateRequest class provides an interface for mgn DeleteReplicationConfigurationTemplate requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::deleteReplicationConfigurationTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReplicationConfigurationTemplateRequest::DeleteReplicationConfigurationTemplateRequest(const DeleteReplicationConfigurationTemplateRequest &other)
    : mgnRequest(new DeleteReplicationConfigurationTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReplicationConfigurationTemplateRequest object.
 */
DeleteReplicationConfigurationTemplateRequest::DeleteReplicationConfigurationTemplateRequest()
    : mgnRequest(new DeleteReplicationConfigurationTemplateRequestPrivate(mgnRequest::DeleteReplicationConfigurationTemplateAction, this))
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
 * \class QtAws::mgn::DeleteReplicationConfigurationTemplateRequestPrivate
 * \brief The DeleteReplicationConfigurationTemplateRequestPrivate class provides private implementation for DeleteReplicationConfigurationTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a DeleteReplicationConfigurationTemplateRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
DeleteReplicationConfigurationTemplateRequestPrivate::DeleteReplicationConfigurationTemplateRequestPrivate(
    const mgnRequest::Action action, DeleteReplicationConfigurationTemplateRequest * const q)
    : mgnRequestPrivate(action, q)
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
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
