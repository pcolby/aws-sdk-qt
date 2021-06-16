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

#include "sendcommandrequest.h"
#include "sendcommandrequest_p.h"
#include "sendcommandresponse.h"
#include "qldbsessionrequest_p.h"

namespace QtAws {
namespace QLDBSession {

/*!
 * \class QtAws::QLDBSession::SendCommandRequest
 * \brief The SendCommandRequest class provides an interface for QLDBSession SendCommand requests.
 *
 * \inmodule QtAwsQLDBSession
 *
 *  The transactional data APIs for Amazon
 * 
 *  QLD> <note>
 * 
 *  Instead of interacting directly with this API, we recommend using the QLDB driver or the QLDB shell to execute data
 *  transactions on a
 * 
 *  ledger> <ul> <li>
 * 
 *  If you are working with an AWS SDK, use the QLDB driver. The driver provides a high-level abstraction layer above this
 *  <i>QLDB Session</i> data plane and manages <code>SendCommand</code> API calls for you. For information and a list of
 *  supported programming languages, see <a
 *  href="https://docs.aws.amazon.com/qldb/latest/developerguide/getting-started-driver.html">Getting started with the
 *  driver</a> in the <i>Amazon QLDB Developer
 * 
 *  Guide</i>> </li> <li>
 * 
 *  If you are working with the AWS Command Line Interface (AWS CLI), use the QLDB shell. The shell is a command line
 *  interface that uses the QLDB driver to interact with a ledger. For information, see <a
 *  href="https://docs.aws.amazon.com/qldb/latest/developerguide/data-shell.html">Accessing Amazon QLDB using the QLDB
 *
 * \sa QLDBSessionClient::sendCommand
 */

/*!
 * Constructs a copy of \a other.
 */
SendCommandRequest::SendCommandRequest(const SendCommandRequest &other)
    : QLDBSessionRequest(new SendCommandRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendCommandRequest object.
 */
SendCommandRequest::SendCommandRequest()
    : QLDBSessionRequest(new SendCommandRequestPrivate(QLDBSessionRequest::SendCommandAction, this))
{

}

/*!
 * \reimp
 */
bool SendCommandRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendCommandResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendCommandRequest::response(QNetworkReply * const reply) const
{
    return new SendCommandResponse(*this, reply);
}

/*!
 * \class QtAws::QLDBSession::SendCommandRequestPrivate
 * \brief The SendCommandRequestPrivate class provides private implementation for SendCommandRequest.
 * \internal
 *
 * \inmodule QtAwsQLDBSession
 */

/*!
 * Constructs a SendCommandRequestPrivate object for QLDBSession \a action,
 * with public implementation \a q.
 */
SendCommandRequestPrivate::SendCommandRequestPrivate(
    const QLDBSessionRequest::Action action, SendCommandRequest * const q)
    : QLDBSessionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendCommandRequest
 * class' copy constructor.
 */
SendCommandRequestPrivate::SendCommandRequestPrivate(
    const SendCommandRequestPrivate &other, SendCommandRequest * const q)
    : QLDBSessionRequestPrivate(other, q)
{

}

} // namespace QLDBSession
} // namespace QtAws
