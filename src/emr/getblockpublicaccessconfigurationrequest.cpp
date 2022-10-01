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

#include "getblockpublicaccessconfigurationrequest.h"
#include "getblockpublicaccessconfigurationrequest_p.h"
#include "getblockpublicaccessconfigurationresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::GetBlockPublicAccessConfigurationRequest
 * \brief The GetBlockPublicAccessConfigurationRequest class provides an interface for Emr GetBlockPublicAccessConfiguration requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::getBlockPublicAccessConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetBlockPublicAccessConfigurationRequest::GetBlockPublicAccessConfigurationRequest(const GetBlockPublicAccessConfigurationRequest &other)
    : EmrRequest(new GetBlockPublicAccessConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBlockPublicAccessConfigurationRequest object.
 */
GetBlockPublicAccessConfigurationRequest::GetBlockPublicAccessConfigurationRequest()
    : EmrRequest(new GetBlockPublicAccessConfigurationRequestPrivate(EmrRequest::GetBlockPublicAccessConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetBlockPublicAccessConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBlockPublicAccessConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBlockPublicAccessConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetBlockPublicAccessConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::GetBlockPublicAccessConfigurationRequestPrivate
 * \brief The GetBlockPublicAccessConfigurationRequestPrivate class provides private implementation for GetBlockPublicAccessConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a GetBlockPublicAccessConfigurationRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
GetBlockPublicAccessConfigurationRequestPrivate::GetBlockPublicAccessConfigurationRequestPrivate(
    const EmrRequest::Action action, GetBlockPublicAccessConfigurationRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBlockPublicAccessConfigurationRequest
 * class' copy constructor.
 */
GetBlockPublicAccessConfigurationRequestPrivate::GetBlockPublicAccessConfigurationRequestPrivate(
    const GetBlockPublicAccessConfigurationRequestPrivate &other, GetBlockPublicAccessConfigurationRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
