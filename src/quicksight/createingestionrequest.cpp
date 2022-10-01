// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
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
