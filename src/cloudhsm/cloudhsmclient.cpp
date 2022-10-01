// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudhsmclient.h"
#include "cloudhsmclient_p.h"

#include "core/awssignaturev4.h"
#include "addtagstoresourcerequest.h"
#include "addtagstoresourceresponse.h"
#include "createhapgrequest.h"
#include "createhapgresponse.h"
#include "createhsmrequest.h"
#include "createhsmresponse.h"
#include "createlunaclientrequest.h"
#include "createlunaclientresponse.h"
#include "deletehapgrequest.h"
#include "deletehapgresponse.h"
#include "deletehsmrequest.h"
#include "deletehsmresponse.h"
#include "deletelunaclientrequest.h"
#include "deletelunaclientresponse.h"
#include "describehapgrequest.h"
#include "describehapgresponse.h"
#include "describehsmrequest.h"
#include "describehsmresponse.h"
#include "describelunaclientrequest.h"
#include "describelunaclientresponse.h"
#include "getconfigrequest.h"
#include "getconfigresponse.h"
#include "listavailablezonesrequest.h"
#include "listavailablezonesresponse.h"
#include "listhapgsrequest.h"
#include "listhapgsresponse.h"
#include "listhsmsrequest.h"
#include "listhsmsresponse.h"
#include "listlunaclientsrequest.h"
#include "listlunaclientsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "modifyhapgrequest.h"
#include "modifyhapgresponse.h"
#include "modifyhsmrequest.h"
#include "modifyhsmresponse.h"
#include "modifylunaclientrequest.h"
#include "modifylunaclientresponse.h"
#include "removetagsfromresourcerequest.h"
#include "removetagsfromresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CloudHsm
 * \brief Contains classess for accessing Amazon CloudHSM.
 *
 * \inmodule QtAwsCloudHsm
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::CloudHsmClient
 * \brief The CloudHsmClient class provides access to the Amazon CloudHSM service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudHsm
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 */

/*!
 * \brief Constructs a CloudHsmClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CloudHsmClient::CloudHsmClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudHsmClientPrivate(this), parent)
{
    Q_D(CloudHsmClient);
    d->apiVersion = QStringLiteral("2014-05-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("cloudhsm");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon CloudHSM");
    d->serviceName = QStringLiteral("cloudhsm");
}

/*!
 * \overload CloudHsmClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CloudHsmClient::CloudHsmClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudHsmClientPrivate(this), parent)
{
    Q_D(CloudHsmClient);
    d->apiVersion = QStringLiteral("2014-05-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cloudhsm");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon CloudHSM");
    d->serviceName = QStringLiteral("cloudhsm");
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * AddTagsToResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Adds or overwrites one or more tags for the specified AWS CloudHSM
 *
 * resource>
 *
 * Each tag consists of a key and a value. Tag keys must be unique to each
 */
AddTagsToResourceResponse * CloudHsmClient::addTagsToResource(const AddTagsToResourceRequest &request)
{
    return qobject_cast<AddTagsToResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * CreateHapgResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Creates a high-availability partition group. A high-availability partition group is a group of partitions that spans
 * multiple physical
 */
CreateHapgResponse * CloudHsmClient::createHapg(const CreateHapgRequest &request)
{
    return qobject_cast<CreateHapgResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * CreateHsmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
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
 * Support</b>> <b>
 *
 * It can take up to 20 minutes to create and provision an HSM. You can monitor the status of the HSM with the
 * <a>DescribeHsm</a> operation. The HSM is ready to be initialized when the status changes to
 */
CreateHsmResponse * CloudHsmClient::createHsm(const CreateHsmRequest &request)
{
    return qobject_cast<CreateHsmResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * CreateLunaClientResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Creates an HSM
 */
CreateLunaClientResponse * CloudHsmClient::createLunaClient(const CreateLunaClientRequest &request)
{
    return qobject_cast<CreateLunaClientResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * DeleteHapgResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Deletes a high-availability partition
 */
DeleteHapgResponse * CloudHsmClient::deleteHapg(const DeleteHapgRequest &request)
{
    return qobject_cast<DeleteHapgResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * DeleteHsmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Deletes an HSM. After completion, this operation cannot be undone and your key material cannot be
 */
DeleteHsmResponse * CloudHsmClient::deleteHsm(const DeleteHsmRequest &request)
{
    return qobject_cast<DeleteHsmResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * DeleteLunaClientResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Deletes a
 */
DeleteLunaClientResponse * CloudHsmClient::deleteLunaClient(const DeleteLunaClientRequest &request)
{
    return qobject_cast<DeleteLunaClientResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * DescribeHapgResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Retrieves information about a high-availability partition
 */
DescribeHapgResponse * CloudHsmClient::describeHapg(const DescribeHapgRequest &request)
{
    return qobject_cast<DescribeHapgResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * DescribeHsmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Retrieves information about an HSM. You can identify the HSM by its ARN or its serial
 */
DescribeHsmResponse * CloudHsmClient::describeHsm(const DescribeHsmRequest &request)
{
    return qobject_cast<DescribeHsmResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * DescribeLunaClientResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Retrieves information about an HSM
 */
DescribeLunaClientResponse * CloudHsmClient::describeLunaClient(const DescribeLunaClientRequest &request)
{
    return qobject_cast<DescribeLunaClientResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * GetConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Gets the configuration files necessary to connect to all high availability partition groups the client is associated
 */
GetConfigResponse * CloudHsmClient::getConfig(const GetConfigRequest &request)
{
    return qobject_cast<GetConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * ListAvailableZonesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Lists the Availability Zones that have available AWS CloudHSM
 */
ListAvailableZonesResponse * CloudHsmClient::listAvailableZones(const ListAvailableZonesRequest &request)
{
    return qobject_cast<ListAvailableZonesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * ListHapgsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
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
ListHapgsResponse * CloudHsmClient::listHapgs(const ListHapgsRequest &request)
{
    return qobject_cast<ListHapgsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * ListHsmsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
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
ListHsmsResponse * CloudHsmClient::listHsms(const ListHsmsRequest &request)
{
    return qobject_cast<ListHsmsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * ListLunaClientsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
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
ListLunaClientsResponse * CloudHsmClient::listLunaClients(const ListLunaClientsRequest &request)
{
    return qobject_cast<ListLunaClientsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Returns a list of all tags for the specified AWS CloudHSM
 */
ListTagsForResourceResponse * CloudHsmClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * ModifyHapgResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Modifies an existing high-availability partition
 */
ModifyHapgResponse * CloudHsmClient::modifyHapg(const ModifyHapgRequest &request)
{
    return qobject_cast<ModifyHapgResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * ModifyHsmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Modifies an
 *
 * HSM> <b>
 *
 * This operation can result in the HSM being offline for up to 15 minutes while the AWS CloudHSM service is reconfigured.
 * If you are modifying a production HSM, you should ensure that your AWS CloudHSM service is configured for high
 * availability, and consider executing this operation during a maintenance
 */
ModifyHsmResponse * CloudHsmClient::modifyHsm(const ModifyHsmRequest &request)
{
    return qobject_cast<ModifyHsmResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * ModifyLunaClientResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Modifies the certificate used by the
 *
 * client>
 *
 * This action can potentially start a workflow to install the new certificate on the client's
 */
ModifyLunaClientResponse * CloudHsmClient::modifyLunaClient(const ModifyLunaClientRequest &request)
{
    return qobject_cast<ModifyLunaClientResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudHsmClient service, and returns a pointer to an
 * RemoveTagsFromResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 *
 * Reference</a>>
 *
 * <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 * CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 * <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * Reference</a>>
 *
 * Removes one or more tags from the specified AWS CloudHSM
 *
 * resource>
 *
 * To remove a tag, specify only the tag key to remove (not the value). To overwrite the value for an existing tag, use
 */
RemoveTagsFromResourceResponse * CloudHsmClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{
    return qobject_cast<RemoveTagsFromResourceResponse *>(send(request));
}

/*!
 * \class QtAws::CloudHsm::CloudHsmClientPrivate
 * \brief The CloudHsmClientPrivate class provides private implementation for CloudHsmClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a CloudHsmClientPrivate object with public implementation \a q.
 */
CloudHsmClientPrivate::CloudHsmClientPrivate(CloudHsmClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudHsm
} // namespace QtAws
