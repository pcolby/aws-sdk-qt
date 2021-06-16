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

#include "putblockpublicaccessconfigurationrequest.h"
#include "putblockpublicaccessconfigurationrequest_p.h"
#include "putblockpublicaccessconfigurationresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::PutBlockPublicAccessConfigurationRequest
 * \brief The PutBlockPublicAccessConfigurationRequest class provides an interface for EMR PutBlockPublicAccessConfiguration requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::putBlockPublicAccessConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutBlockPublicAccessConfigurationRequest::PutBlockPublicAccessConfigurationRequest(const PutBlockPublicAccessConfigurationRequest &other)
    : EmrRequest(new PutBlockPublicAccessConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBlockPublicAccessConfigurationRequest object.
 */
PutBlockPublicAccessConfigurationRequest::PutBlockPublicAccessConfigurationRequest()
    : EmrRequest(new PutBlockPublicAccessConfigurationRequestPrivate(EmrRequest::PutBlockPublicAccessConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutBlockPublicAccessConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBlockPublicAccessConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBlockPublicAccessConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBlockPublicAccessConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::PutBlockPublicAccessConfigurationRequestPrivate
 * \brief The PutBlockPublicAccessConfigurationRequestPrivate class provides private implementation for PutBlockPublicAccessConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a PutBlockPublicAccessConfigurationRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
PutBlockPublicAccessConfigurationRequestPrivate::PutBlockPublicAccessConfigurationRequestPrivate(
    const EmrRequest::Action action, PutBlockPublicAccessConfigurationRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBlockPublicAccessConfigurationRequest
 * class' copy constructor.
 */
PutBlockPublicAccessConfigurationRequestPrivate::PutBlockPublicAccessConfigurationRequestPrivate(
    const PutBlockPublicAccessConfigurationRequestPrivate &other, PutBlockPublicAccessConfigurationRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
