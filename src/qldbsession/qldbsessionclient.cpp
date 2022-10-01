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
 * \namespace QtAws::QldbSession
 * \brief Contains classess for accessing Amazon QLDB Session.
 *
 * \inmodule QtAwsQldbSession
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace QldbSession {

/*!
 * \class QtAws::QldbSession::QldbSessionClient
 * \brief The QldbSessionClient class provides access to the Amazon QLDB Session service.
 *
 * \ingroup aws-clients
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
 */

/*!
 * \brief Constructs a QldbSessionClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
QldbSessionClient::QldbSessionClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new QldbSessionClientPrivate(this), parent)
{
    Q_D(QldbSessionClient);
    d->apiVersion = QStringLiteral("2019-07-11");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("session.qldb");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon QLDB Session");
    d->serviceName = QStringLiteral("qldb");
}

/*!
 * \overload QldbSessionClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
QldbSessionClient::QldbSessionClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new QldbSessionClientPrivate(this), parent)
{
    Q_D(QldbSessionClient);
    d->apiVersion = QStringLiteral("2019-07-11");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("session.qldb");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon QLDB Session");
    d->serviceName = QStringLiteral("qldb");
}

/*!
 * Sends \a request to the QldbSessionClient service, and returns a pointer to an
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
SendCommandResponse * QldbSessionClient::sendCommand(const SendCommandRequest &request)
{
    return qobject_cast<SendCommandResponse *>(send(request));
}

/*!
 * \class QtAws::QldbSession::QldbSessionClientPrivate
 * \brief The QldbSessionClientPrivate class provides private implementation for QldbSessionClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsQldbSession
 */

/*!
 * Constructs a QldbSessionClientPrivate object with public implementation \a q.
 */
QldbSessionClientPrivate::QldbSessionClientPrivate(QldbSessionClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace QldbSession
} // namespace QtAws
