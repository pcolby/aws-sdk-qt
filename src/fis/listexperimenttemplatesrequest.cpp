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

#include "listexperimenttemplatesrequest.h"
#include "listexperimenttemplatesrequest_p.h"
#include "listexperimenttemplatesresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace FIS {

/*!
 * \class QtAws::FIS::ListExperimentTemplatesRequest
 * \brief The ListExperimentTemplatesRequest class provides an interface for FIS ListExperimentTemplates requests.
 *
 * \inmodule QtAwsFIS
 *
 *  AWS Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your AWS
 *  workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">AWS Fault Injection
 *  Simulator User
 *
 * \sa FisClient::listExperimentTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
ListExperimentTemplatesRequest::ListExperimentTemplatesRequest(const ListExperimentTemplatesRequest &other)
    : FisRequest(new ListExperimentTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExperimentTemplatesRequest object.
 */
ListExperimentTemplatesRequest::ListExperimentTemplatesRequest()
    : FisRequest(new ListExperimentTemplatesRequestPrivate(FisRequest::ListExperimentTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListExperimentTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExperimentTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExperimentTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListExperimentTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::FIS::ListExperimentTemplatesRequestPrivate
 * \brief The ListExperimentTemplatesRequestPrivate class provides private implementation for ListExperimentTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsFIS
 */

/*!
 * Constructs a ListExperimentTemplatesRequestPrivate object for Fis \a action,
 * with public implementation \a q.
 */
ListExperimentTemplatesRequestPrivate::ListExperimentTemplatesRequestPrivate(
    const FisRequest::Action action, ListExperimentTemplatesRequest * const q)
    : FisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExperimentTemplatesRequest
 * class' copy constructor.
 */
ListExperimentTemplatesRequestPrivate::ListExperimentTemplatesRequestPrivate(
    const ListExperimentTemplatesRequestPrivate &other, ListExperimentTemplatesRequest * const q)
    : FisRequestPrivate(other, q)
{

}

} // namespace FIS
} // namespace QtAws
