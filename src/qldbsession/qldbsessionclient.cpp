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

#include "qldbsessionclient.h"
#include "qldbsessionclient_p.h"

#include "core/awssignaturev4.h"
#include "sendcommandrequest.h"
#include "sendcommandresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::QLDBSession
 * \brief Contains classess for accessing Amazon QLDB Session.
 *
 * \inmodule QtAwsQLDBSession
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace QLDBSession {

/*!
 * \class QtAws::QLDBSession::QLDBSessionClient
 * \brief The QLDBSessionClient class provides access to the Amazon QLDB Session service.
 *
 * \ingroup aws-clients
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
 */

/*!
 * \brief Constructs a QLDBSessionClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
QLDBSessionClient::QLDBSessionClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-07-11"),
    QStringLiteral("session.qldb"),
    QStringLiteral("Amazon QLDB Session"),
    QStringLiteral("qldb"),
    parent), d_ptr(new QLDBSessionClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload QLDBSessionClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
QLDBSessionClient::QLDBSessionClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-07-11"),
    QStringLiteral("session.qldb"),
    QStringLiteral("Amazon QLDB Session"),
    QStringLiteral("qldb"),
    parent), d_ptr(new QLDBSessionClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the QLDBSessionClient service, and returns a pointer to an
 * SendCommandResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a command to an Amazon QLDB
 *
 * ledger> <note>
 *
 * Instead of interacting directly with this API, we recommend using the QLDB driver or the QLDB shell to execute data
 * transactions on a
 *
 * ledger> <ul> <li>
 *
 * If you are working with an AWS SDK, use the QLDB driver. The driver provides a high-level abstraction layer above this
 * <i>QLDB Session</i> data plane and manages <code>SendCommand</code> API calls for you. For information and a list of
 * supported programming languages, see <a
 * href="https://docs.aws.amazon.com/qldb/latest/developerguide/getting-started-driver.html">Getting started with the
 * driver</a> in the <i>Amazon QLDB Developer
 *
 * Guide</i>> </li> <li>
 *
 * If you are working with the AWS Command Line Interface (AWS CLI), use the QLDB shell. The shell is a command line
 * interface that uses the QLDB driver to interact with a ledger. For information, see <a
 * href="https://docs.aws.amazon.com/qldb/latest/developerguide/data-shell.html">Accessing Amazon QLDB using the QLDB
 */
SendCommandResponse * QLDBSessionClient::sendCommand(const SendCommandRequest &request)
{
    return qobject_cast<SendCommandResponse *>(send(request));
}

/*!
 * \class QtAws::QLDBSession::QLDBSessionClientPrivate
 * \brief The QLDBSessionClientPrivate class provides private implementation for QLDBSessionClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsQLDBSession
 */

/*!
 * Constructs a QLDBSessionClientPrivate object with public implementation \a q.
 */
QLDBSessionClientPrivate::QLDBSessionClientPrivate(QLDBSessionClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace QLDBSession
} // namespace QtAws
