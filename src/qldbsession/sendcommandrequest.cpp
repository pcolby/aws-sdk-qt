// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendcommandrequest.h"
#include "sendcommandrequest_p.h"
#include "sendcommandresponse.h"
#include "qldbsessionrequest_p.h"

namespace QtAws {
namespace QldbSession {

/*!
 * \class QtAws::QldbSession::SendCommandRequest
 * \brief The SendCommandRequest class provides an interface for QldbSession SendCommand requests.
 *
 * \inmodule QtAwsQldbSession
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
 * \sa QldbSessionClient::sendCommand
 */

/*!
 * Constructs a copy of \a other.
 */
SendCommandRequest::SendCommandRequest(const SendCommandRequest &other)
    : QldbSessionRequest(new SendCommandRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendCommandRequest object.
 */
SendCommandRequest::SendCommandRequest()
    : QldbSessionRequest(new SendCommandRequestPrivate(QldbSessionRequest::SendCommandAction, this))
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
 * \class QtAws::QldbSession::SendCommandRequestPrivate
 * \brief The SendCommandRequestPrivate class provides private implementation for SendCommandRequest.
 * \internal
 *
 * \inmodule QtAwsQldbSession
 */

/*!
 * Constructs a SendCommandRequestPrivate object for QldbSession \a action,
 * with public implementation \a q.
 */
SendCommandRequestPrivate::SendCommandRequestPrivate(
    const QldbSessionRequest::Action action, SendCommandRequest * const q)
    : QldbSessionRequestPrivate(action, q)
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
    : QldbSessionRequestPrivate(other, q)
{

}

} // namespace QldbSession
} // namespace QtAws
