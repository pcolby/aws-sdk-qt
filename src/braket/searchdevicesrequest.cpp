// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchdevicesrequest.h"
#include "searchdevicesrequest_p.h"
#include "searchdevicesresponse.h"
#include "braketrequest_p.h"

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::SearchDevicesRequest
 * \brief The SearchDevicesRequest class provides an interface for Braket SearchDevices requests.
 *
 * \inmodule QtAwsBraket
 *
 *  The Amazon Braket API Reference provides information about the operations and structures supported in Amazon
 * 
 *  Braket>
 * 
 *  Additional
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/braket/latest/developerguide/what-is-braket.html">Amazon Braket Developer Guide</a>
 *
 * \sa BraketClient::searchDevices
 */

/*!
 * Constructs a copy of \a other.
 */
SearchDevicesRequest::SearchDevicesRequest(const SearchDevicesRequest &other)
    : BraketRequest(new SearchDevicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchDevicesRequest object.
 */
SearchDevicesRequest::SearchDevicesRequest()
    : BraketRequest(new SearchDevicesRequestPrivate(BraketRequest::SearchDevicesAction, this))
{

}

/*!
 * \reimp
 */
bool SearchDevicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchDevicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchDevicesRequest::response(QNetworkReply * const reply) const
{
    return new SearchDevicesResponse(*this, reply);
}

/*!
 * \class QtAws::Braket::SearchDevicesRequestPrivate
 * \brief The SearchDevicesRequestPrivate class provides private implementation for SearchDevicesRequest.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a SearchDevicesRequestPrivate object for Braket \a action,
 * with public implementation \a q.
 */
SearchDevicesRequestPrivate::SearchDevicesRequestPrivate(
    const BraketRequest::Action action, SearchDevicesRequest * const q)
    : BraketRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchDevicesRequest
 * class' copy constructor.
 */
SearchDevicesRequestPrivate::SearchDevicesRequestPrivate(
    const SearchDevicesRequestPrivate &other, SearchDevicesRequest * const q)
    : BraketRequestPrivate(other, q)
{

}

} // namespace Braket
} // namespace QtAws
