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

#include "createreplicationconfigurationtemplaterequest.h"
#include "createreplicationconfigurationtemplaterequest_p.h"
#include "createreplicationconfigurationtemplateresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::CreateReplicationConfigurationTemplateRequest
 * \brief The CreateReplicationConfigurationTemplateRequest class provides an interface for mgn CreateReplicationConfigurationTemplate requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::createReplicationConfigurationTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateReplicationConfigurationTemplateRequest::CreateReplicationConfigurationTemplateRequest(const CreateReplicationConfigurationTemplateRequest &other)
    : mgnRequest(new CreateReplicationConfigurationTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateReplicationConfigurationTemplateRequest object.
 */
CreateReplicationConfigurationTemplateRequest::CreateReplicationConfigurationTemplateRequest()
    : mgnRequest(new CreateReplicationConfigurationTemplateRequestPrivate(mgnRequest::CreateReplicationConfigurationTemplateAction, this))
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
 * \class QtAws::mgn::CreateReplicationConfigurationTemplateRequestPrivate
 * \brief The CreateReplicationConfigurationTemplateRequestPrivate class provides private implementation for CreateReplicationConfigurationTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a CreateReplicationConfigurationTemplateRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
CreateReplicationConfigurationTemplateRequestPrivate::CreateReplicationConfigurationTemplateRequestPrivate(
    const mgnRequest::Action action, CreateReplicationConfigurationTemplateRequest * const q)
    : mgnRequestPrivate(action, q)
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
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
