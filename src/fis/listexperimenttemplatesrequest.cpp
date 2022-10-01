// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexperimenttemplatesrequest.h"
#include "listexperimenttemplatesrequest_p.h"
#include "listexperimenttemplatesresponse.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::ListExperimentTemplatesRequest
 * \brief The ListExperimentTemplatesRequest class provides an interface for Fis ListExperimentTemplates requests.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
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
 * \class QtAws::Fis::ListExperimentTemplatesRequestPrivate
 * \brief The ListExperimentTemplatesRequestPrivate class provides private implementation for ListExperimentTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsFis
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

} // namespace Fis
} // namespace QtAws
