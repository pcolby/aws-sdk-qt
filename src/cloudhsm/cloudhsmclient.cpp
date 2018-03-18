/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "cloudhsmclient.h"
#include "cloudhsmclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CloudHSM {

/**
 * @class  CloudHSMClient
 *
 * @brief  Client for Amazon CloudHSM
 *
 * <fullname>AWS CloudHSM Service</fullname>
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 */

/**
 * @brief  Constructs a new CloudHSMClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CloudHSMClient::CloudHSMClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudHSMClientPrivate(this), parent)
{
    Q_D(CloudHSMClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new CloudHSMClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
CloudHSMClient::CloudHSMClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudHSMClientPrivate(this), parent)
{
    Q_D(CloudHSMClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Adds or overwrites one or more tags for the specified AWS CloudHSM
 *
 * resource>
 *
 * Each tag consists of a key and a value. Tag keys must be unique to each
 */
AddTagsToResourceResponse * CloudHSMClient::addTagsToResource(const AddTagsToResourceRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Creates a high-availability partition group. A high-availability partition group is a group of partitions that spans
 * multiple physical
 */
CreateHapgResponse * CloudHSMClient::createHapg(const CreateHapgRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Creates an uninitialized HSM
 *
 * instance>
 *
 * There is an upfront fee charged for each HSM instance that you create with the <code>CreateHsm</code> operation. If you
 * accidentally provision an HSM and want to request a refund, delete the instance using the <a>DeleteHsm</a> operation, go
 * to the <a href="https://console.aws.amazon.com/support/home">AWS Support Center</a>, create a new case, and select
 * <b>Account and Billing
 *
 * Support</b>> <important>
 *
 * It can take up to 20 minutes to create and provision an HSM. You can monitor the status of the HSM with the
 * <a>DescribeHsm</a> operation. The HSM is ready to be initialized when the status changes to
 */
CreateHsmResponse * CloudHSMClient::createHsm(const CreateHsmRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Creates an HSM
 */
CreateLunaClientResponse * CloudHSMClient::createLunaClient(const CreateLunaClientRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Deletes a high-availability partition
 */
DeleteHapgResponse * CloudHSMClient::deleteHapg(const DeleteHapgRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Deletes an HSM. After completion, this operation cannot be undone and your key material cannot be
 */
DeleteHsmResponse * CloudHSMClient::deleteHsm(const DeleteHsmRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Deletes a
 */
DeleteLunaClientResponse * CloudHSMClient::deleteLunaClient(const DeleteLunaClientRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Retrieves information about a high-availability partition
 */
DescribeHapgResponse * CloudHSMClient::describeHapg(const DescribeHapgRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Retrieves information about an HSM. You can identify the HSM by its ARN or its serial
 */
DescribeHsmResponse * CloudHSMClient::describeHsm(const DescribeHsmRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Retrieves information about an HSM
 */
DescribeLunaClientResponse * CloudHSMClient::describeLunaClient(const DescribeLunaClientRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Gets the configuration files necessary to connect to all high availability partition groups the client is associated
 */
GetConfigResponse * CloudHSMClient::getConfig(const GetConfigRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Lists the Availability Zones that have available AWS CloudHSM
 */
ListAvailableZonesResponse * CloudHSMClient::listAvailableZones(const ListAvailableZonesRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Lists the high-availability partition groups for the
 *
 * account>
 *
 * This operation supports pagination with the use of the <code>NextToken</code> member. If more results are available, the
 * <code>NextToken</code> member of the response contains a token that you pass in the next call to <code>ListHapgs</code>
 * to retrieve the next set of
 */
ListHapgsResponse * CloudHSMClient::listHapgs(const ListHapgsRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Retrieves the identifiers of all of the HSMs provisioned for the current
 *
 * customer>
 *
 * This operation supports pagination with the use of the <code>NextToken</code> member. If more results are available, the
 * <code>NextToken</code> member of the response contains a token that you pass in the next call to <code>ListHsms</code>
 * to retrieve the next set of
 */
ListHsmsResponse * CloudHSMClient::listHsms(const ListHsmsRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Lists all of the
 *
 * clients>
 *
 * This operation supports pagination with the use of the <code>NextToken</code> member. If more results are available, the
 * <code>NextToken</code> member of the response contains a token that you pass in the next call to
 * <code>ListLunaClients</code> to retrieve the next set of
 */
ListLunaClientsResponse * CloudHSMClient::listLunaClients(const ListLunaClientsRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Returns a list of all tags for the specified AWS CloudHSM
 */
ListTagsForResourceResponse * CloudHSMClient::listTagsForResource(const ListTagsForResourceRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Modifies an existing high-availability partition
 */
ModifyHapgResponse * CloudHSMClient::modifyHapg(const ModifyHapgRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Modifies an
 *
 * HSM> <important>
 *
 * This operation can result in the HSM being offline for up to 15 minutes while the AWS CloudHSM service is reconfigured.
 * If you are modifying a production HSM, you should ensure that your AWS CloudHSM service is configured for high
 * availability, and consider executing this operation during a maintenance
 */
ModifyHsmResponse * CloudHSMClient::modifyHsm(const ModifyHsmRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Modifies the certificate used by the
 *
 * client>
 *
 * This action can potentially start a workflow to install the new certificate on the client's
 */
ModifyLunaClientResponse * CloudHSMClient::modifyLunaClient(const ModifyLunaClientRequest &request)
{

}

/**
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Removes one or more tags from the specified AWS CloudHSM
 *
 * resource>
 *
 * To remove a tag, specify only the tag key to remove (not the value). To overwrite the value for an existing tag, use
 */
RemoveTagsFromResourceResponse * CloudHSMClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{

}

/**
 * @internal
 *
 * @class  CloudHSMClientPrivate
 *
 * @brief  Private implementation for CloudHSMClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudHSMClientPrivate object.
 *
 * @param  q  Pointer to this object's public CloudHSMClient instance.
 */
CloudHSMClientPrivate::CloudHSMClientPrivate(CloudHSMClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CloudHSM
} // namespace AWS
