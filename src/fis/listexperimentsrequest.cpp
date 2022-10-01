// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexperimentsrequest.h"
#include "listexperimentsrequest_p.h"
#include "listexperimentsresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::ListExperimentsRequest
 * \brief The ListExperimentsRequest class provides an interface for Fis ListExperiments requests.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::listExperiments
 */

/*!
 * Constructs a copy of \a other.
 */
ListExperimentsRequest::ListExperimentsRequest(const ListExperimentsRequest &other)
    : FisRequest(new ListExperimentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExperimentsRequest object.
 */
ListExperimentsRequest::ListExperimentsRequest()
    : FisRequest(new ListExperimentsRequestPrivate(FisRequest::ListExperimentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListExperimentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExperimentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExperimentsRequest::response(QNetworkReply * const reply) const
{
    return new ListExperimentsResponse(*this, reply);
}

/*!
 * \class QtAws::Fis::ListExperimentsRequestPrivate
 * \brief The ListExperimentsRequestPrivate class provides private implementation for ListExperimentsRequest.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a ListExperimentsRequestPrivate object for Fis \a action,
 * with public implementation \a q.
 */
ListExperimentsRequestPrivate::ListExperimentsRequestPrivate(
    const FisRequest::Action action, ListExperimentsRequest * const q)
    : FisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExperimentsRequest
 * class' copy constructor.
 */
ListExperimentsRequestPrivate::ListExperimentsRequestPrivate(
    const ListExperimentsRequestPrivate &other, ListExperimentsRequest * const q)
    : FisRequestPrivate(other, q)
{

}

} // namespace Fis
} // namespace QtAws
