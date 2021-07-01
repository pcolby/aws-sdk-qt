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

#include "connectcontactlensclient.h"
#include "connectcontactlensclient_p.h"

#include "core/awssignaturev4.h"
#include "listrealtimecontactanalysissegmentsrequest.h"
#include "listrealtimecontactanalysissegmentsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ConnectContactLens
 * \brief Contains classess for accessing Amazon Connect Contact Lens.
 *
 * \inmodule QtAwsConnectContactLens
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ConnectContactLens {

/*!
 * \class QtAws::ConnectContactLens::ConnectContactLensClient
 * \brief The ConnectContactLensClient class provides access to the Amazon Connect Contact Lens service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsConnectContactLens
 *
 *  Contact Lens for Amazon Connect enables you to analyze conversations between customer and agents, by using speech
 *  transcription, natural language processing, and intelligent search capabilities. It performs sentiment analysis, detects
 *  issues, and enables you to automatically categorize
 * 
 *  contacts>
 * 
 *  Contact Lens for Amazon Connect provides both real-time and post-call analytics of customer-agent conversations. For
 *  more information, see <a href="https://docs.aws.amazon.com/connect/latest/adminguide/analyze-conversations.html">Analyze
 *  conversations using Contact Lens</a> in the <i>Amazon Connect Administrator Guide</i>.
 */

/*!
 * \brief Constructs a ConnectContactLensClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ConnectContactLensClient::ConnectContactLensClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ConnectContactLensClientPrivate(this), parent)
{
    Q_D(ConnectContactLensClient);
    d->apiVersion = QStringLiteral("2020-08-21");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("contact-lens");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Connect Contact Lens");
    d->serviceName = QStringLiteral("connect");
}

/*!
 * \overload ConnectContactLensClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ConnectContactLensClient::ConnectContactLensClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ConnectContactLensClientPrivate(this), parent)
{
    Q_D(ConnectContactLensClient);
    d->apiVersion = QStringLiteral("2020-08-21");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("contact-lens");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Connect Contact Lens");
    d->serviceName = QStringLiteral("connect");
}

/*!
 * Sends \a request to the ConnectContactLensClient service, and returns a pointer to an
 * ListRealtimeContactAnalysisSegmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of analysis segments for a real-time analysis
 */
ListRealtimeContactAnalysisSegmentsResponse * ConnectContactLensClient::listRealtimeContactAnalysisSegments(const ListRealtimeContactAnalysisSegmentsRequest &request)
{
    return qobject_cast<ListRealtimeContactAnalysisSegmentsResponse *>(send(request));
}

/*!
 * \class QtAws::ConnectContactLens::ConnectContactLensClientPrivate
 * \brief The ConnectContactLensClientPrivate class provides private implementation for ConnectContactLensClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsConnectContactLens
 */

/*!
 * Constructs a ConnectContactLensClientPrivate object with public implementation \a q.
 */
ConnectContactLensClientPrivate::ConnectContactLensClientPrivate(ConnectContactLensClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ConnectContactLens
} // namespace QtAws
