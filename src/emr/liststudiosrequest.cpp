// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststudiosrequest.h"
#include "liststudiosrequest_p.h"
#include "liststudiosresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListStudiosRequest
 * \brief The ListStudiosRequest class provides an interface for Emr ListStudios requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listStudios
 */

/*!
 * Constructs a copy of \a other.
 */
ListStudiosRequest::ListStudiosRequest(const ListStudiosRequest &other)
    : EmrRequest(new ListStudiosRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStudiosRequest object.
 */
ListStudiosRequest::ListStudiosRequest()
    : EmrRequest(new ListStudiosRequestPrivate(EmrRequest::ListStudiosAction, this))
{

}

/*!
 * \reimp
 */
bool ListStudiosRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStudiosResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStudiosRequest::response(QNetworkReply * const reply) const
{
    return new ListStudiosResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::ListStudiosRequestPrivate
 * \brief The ListStudiosRequestPrivate class provides private implementation for ListStudiosRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListStudiosRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ListStudiosRequestPrivate::ListStudiosRequestPrivate(
    const EmrRequest::Action action, ListStudiosRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStudiosRequest
 * class' copy constructor.
 */
ListStudiosRequestPrivate::ListStudiosRequestPrivate(
    const ListStudiosRequestPrivate &other, ListStudiosRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
