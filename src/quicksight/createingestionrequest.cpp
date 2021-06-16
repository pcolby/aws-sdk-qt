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

#include "createingestionrequest.h"
#include "createingestionrequest_p.h"
#include "createingestionresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateIngestionRequest
 * \brief The CreateIngestionRequest class provides an interface for QuickSight CreateIngestion requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createIngestion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateIngestionRequest::CreateIngestionRequest(const CreateIngestionRequest &other)
    : QuickSightRequest(new CreateIngestionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateIngestionRequest object.
 */
CreateIngestionRequest::CreateIngestionRequest()
    : QuickSightRequest(new CreateIngestionRequestPrivate(QuickSightRequest::CreateIngestionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateIngestionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateIngestionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateIngestionRequest::response(QNetworkReply * const reply) const
{
    return new CreateIngestionResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CreateIngestionRequestPrivate
 * \brief The CreateIngestionRequestPrivate class provides private implementation for CreateIngestionRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateIngestionRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateIngestionRequestPrivate::CreateIngestionRequestPrivate(
    const QuickSightRequest::Action action, CreateIngestionRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateIngestionRequest
 * class' copy constructor.
 */
CreateIngestionRequestPrivate::CreateIngestionRequestPrivate(
    const CreateIngestionRequestPrivate &other, CreateIngestionRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
