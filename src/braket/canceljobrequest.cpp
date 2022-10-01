// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceljobrequest.h"
#include "canceljobrequest_p.h"
#include "canceljobresponse.h"
#include "braketrequest_p.h"

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::CancelJobRequest
 * \brief The CancelJobRequest class provides an interface for Braket CancelJob requests.
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
 * \sa BraketClient::cancelJob
 */

/*!
 * Constructs a copy of \a other.
 */
CancelJobRequest::CancelJobRequest(const CancelJobRequest &other)
    : BraketRequest(new CancelJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelJobRequest object.
 */
CancelJobRequest::CancelJobRequest()
    : BraketRequest(new CancelJobRequestPrivate(BraketRequest::CancelJobAction, this))
{

}

/*!
 * \reimp
 */
bool CancelJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelJobRequest::response(QNetworkReply * const reply) const
{
    return new CancelJobResponse(*this, reply);
}

/*!
 * \class QtAws::Braket::CancelJobRequestPrivate
 * \brief The CancelJobRequestPrivate class provides private implementation for CancelJobRequest.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a CancelJobRequestPrivate object for Braket \a action,
 * with public implementation \a q.
 */
CancelJobRequestPrivate::CancelJobRequestPrivate(
    const BraketRequest::Action action, CancelJobRequest * const q)
    : BraketRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelJobRequest
 * class' copy constructor.
 */
CancelJobRequestPrivate::CancelJobRequestPrivate(
    const CancelJobRequestPrivate &other, CancelJobRequest * const q)
    : BraketRequestPrivate(other, q)
{

}

} // namespace Braket
} // namespace QtAws
