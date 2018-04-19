/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletesecurityconfigurationrequest.h"
#include "deletesecurityconfigurationrequest_p.h"
#include "deletesecurityconfigurationresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::DeleteSecurityConfigurationRequest
 * \brief The DeleteSecurityConfigurationRequest class provides an interface for EMR DeleteSecurityConfiguration requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::deleteSecurityConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSecurityConfigurationRequest::DeleteSecurityConfigurationRequest(const DeleteSecurityConfigurationRequest &other)
    : EMRRequest(new DeleteSecurityConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSecurityConfigurationRequest object.
 */
DeleteSecurityConfigurationRequest::DeleteSecurityConfigurationRequest()
    : EMRRequest(new DeleteSecurityConfigurationRequestPrivate(EMRRequest::DeleteSecurityConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSecurityConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSecurityConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSecurityConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSecurityConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::DeleteSecurityConfigurationRequestPrivate
 * \brief The DeleteSecurityConfigurationRequestPrivate class provides private implementation for DeleteSecurityConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a DeleteSecurityConfigurationRequestPrivate object for EMR \a action,
 * with public implementation \a q.
 */
DeleteSecurityConfigurationRequestPrivate::DeleteSecurityConfigurationRequestPrivate(
    const EMRRequest::Action action, DeleteSecurityConfigurationRequest * const q)
    : EMRRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSecurityConfigurationRequest
 * class' copy constructor.
 */
DeleteSecurityConfigurationRequestPrivate::DeleteSecurityConfigurationRequestPrivate(
    const DeleteSecurityConfigurationRequestPrivate &other, DeleteSecurityConfigurationRequest * const q)
    : EMRRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
