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

#include "migrationhubconfigclient.h"
#include "migrationhubconfigclient_p.h"

#include "core/awssignaturev4.h"
#include "createhomeregioncontrolrequest.h"
#include "createhomeregioncontrolresponse.h"
#include "describehomeregioncontrolsrequest.h"
#include "describehomeregioncontrolsresponse.h"
#include "gethomeregionrequest.h"
#include "gethomeregionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MigrationHubConfig
 * \brief Contains classess for accessing AWS Migration Hub Config.
 *
 * \inmodule QtAwsMigrationHubConfig
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MigrationHubConfig {

/*!
 * \class QtAws::MigrationHubConfig::MigrationHubConfigClient
 * \brief The MigrationHubConfigClient class provides access to the AWS Migration Hub Config service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMigrationHubConfig
 *
 *  The AWS Migration Hub home region APIs are available specifically for working with your Migration Hub home region. You
 *  can use these APIs to determine a home region, as well as to create and work with controls that describe the home
 * 
 *  region> <ul> <li>
 * 
 *  You must make API calls for write actions (create, notify, associate, disassociate, import, or put) while in your home
 *  region, or a <code>HomeRegionNotSetException</code> error is
 * 
 *  returned> </li> <li>
 * 
 *  API calls for read actions (list, describe, stop, and delete) are permitted outside of your home
 * 
 *  region> </li> <li>
 * 
 *  If you call a write API outside the home region, an <code>InvalidInputException</code> is
 * 
 *  returned> </li> <li>
 * 
 *  You can call <code>GetHomeRegion</code> action to obtain the account's Migration Hub home
 * 
 *  region> </li> </ul>
 * 
 *  For specific API usage, see the sections that follow in this AWS Migration Hub Home Region API reference.
 */

/*!
 * \brief Constructs a MigrationHubConfigClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MigrationHubConfigClient::MigrationHubConfigClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-06-30"),
    QStringLiteral("migrationhub-config"),
    QStringLiteral("AWS Migration Hub Config"),
    QStringLiteral("mgh"),
    parent), d_ptr(new MigrationHubConfigClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload MigrationHubConfigClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MigrationHubConfigClient::MigrationHubConfigClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-06-30"),
    QStringLiteral("migrationhub-config"),
    QStringLiteral("AWS Migration Hub Config"),
    QStringLiteral("mgh"),
    parent), d_ptr(new MigrationHubConfigClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the MigrationHubConfigClient service, and returns a pointer to an
 * CreateHomeRegionControlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API sets up the home region for the calling account
 */
CreateHomeRegionControlResponse * MigrationHubConfigClient::createHomeRegionControl(const CreateHomeRegionControlRequest &request)
{
    return qobject_cast<CreateHomeRegionControlResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubConfigClient service, and returns a pointer to an
 * DescribeHomeRegionControlsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API permits filtering on the <code>ControlId</code> and <code>HomeRegion</code>
 */
DescribeHomeRegionControlsResponse * MigrationHubConfigClient::describeHomeRegionControls(const DescribeHomeRegionControlsRequest &request)
{
    return qobject_cast<DescribeHomeRegionControlsResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubConfigClient service, and returns a pointer to an
 * GetHomeRegionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the calling account’s home region, if configured. This API is used by other AWS services to determine the
 * regional endpoint for calling AWS Application Discovery Service and Migration Hub. You must call
 * <code>GetHomeRegion</code> at least once before you call any other AWS Application Discovery Service and AWS Migration
 * Hub APIs, to obtain the account's Migration Hub home
 */
GetHomeRegionResponse * MigrationHubConfigClient::getHomeRegion(const GetHomeRegionRequest &request)
{
    return qobject_cast<GetHomeRegionResponse *>(send(request));
}

/*!
 * \class QtAws::MigrationHubConfig::MigrationHubConfigClientPrivate
 * \brief The MigrationHubConfigClientPrivate class provides private implementation for MigrationHubConfigClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMigrationHubConfig
 */

/*!
 * Constructs a MigrationHubConfigClientPrivate object with public implementation \a q.
 */
MigrationHubConfigClientPrivate::MigrationHubConfigClientPrivate(MigrationHubConfigClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace MigrationHubConfig
} // namespace QtAws
