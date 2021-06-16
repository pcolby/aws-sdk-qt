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

#include "comprehendmedicalclient.h"
#include "comprehendmedicalclient_p.h"

#include "core/awssignaturev4.h"
#include "detectentitiesrequest.h"
#include "detectentitiesresponse.h"
#include "detectphirequest.h"
#include "detectphiresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ComprehendMedical
 * \brief Contains classess for accessing AWS Comprehend Medical (ComprehendMedical).
 *
 * \inmodule QtAwsComprehendMedical
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::ComprehendMedicalClient
 * \brief The ComprehendMedicalClient class provides access to the AWS Comprehend Medical (ComprehendMedical) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain insight in
 *  your documents.
 */

/*!
 * \brief Constructs a ComprehendMedicalClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ComprehendMedicalClient::ComprehendMedicalClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ComprehendMedicalClientPrivate(this), parent)
{
    Q_D(ComprehendMedicalClient);
    d->apiVersion = QStringLiteral("2018-10-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("comprehendmedical");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Comprehend Medical");
    d->serviceName = QStringLiteral("comprehendmedical");
}

/*!
 * \overload ComprehendMedicalClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ComprehendMedicalClient::ComprehendMedicalClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ComprehendMedicalClientPrivate(this), parent)
{
    Q_D(ComprehendMedicalClient);
    d->apiVersion = QStringLiteral("2018-10-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("comprehendmedical");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Comprehend Medical");
    d->serviceName = QStringLiteral("comprehendmedical");
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * DetectEntitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Inspects the clinical text for a variety of medical entities and returns specific information about them such as entity
 * category, location, and confidence score on that information
 */
DetectEntitiesResponse * ComprehendMedicalClient::detectEntities(const DetectEntitiesRequest &request)
{
    return qobject_cast<DetectEntitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the ComprehendMedicalClient service, and returns a pointer to an
 * DetectPHIResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Inspects the clinical text for personal health information (PHI) entities and entity category, location, and confidence
 * score on that
 */
DetectPHIResponse * ComprehendMedicalClient::detectPHI(const DetectPHIRequest &request)
{
    return qobject_cast<DetectPHIResponse *>(send(request));
}

/*!
 * \class QtAws::ComprehendMedical::ComprehendMedicalClientPrivate
 * \brief The ComprehendMedicalClientPrivate class provides private implementation for ComprehendMedicalClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a ComprehendMedicalClientPrivate object with public implementation \a q.
 */
ComprehendMedicalClientPrivate::ComprehendMedicalClientPrivate(ComprehendMedicalClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ComprehendMedical
} // namespace QtAws
