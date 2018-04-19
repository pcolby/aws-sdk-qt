/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "storagegatewayclient.h"
#include "storagegatewayclient_p.h"

#include "core/awssignaturev4.h"
#include "activategatewayrequest.h"
#include "activategatewayresponse.h"
#include "addcacherequest.h"
#include "addcacheresponse.h"
#include "addtagstoresourcerequest.h"
#include "addtagstoresourceresponse.h"
#include "adduploadbufferrequest.h"
#include "adduploadbufferresponse.h"
#include "addworkingstoragerequest.h"
#include "addworkingstorageresponse.h"
#include "cancelarchivalrequest.h"
#include "cancelarchivalresponse.h"
#include "cancelretrievalrequest.h"
#include "cancelretrievalresponse.h"
#include "createcachediscsivolumerequest.h"
#include "createcachediscsivolumeresponse.h"
#include "createnfsfilesharerequest.h"
#include "createnfsfileshareresponse.h"
#include "createsnapshotrequest.h"
#include "createsnapshotresponse.h"
#include "createsnapshotfromvolumerecoverypointrequest.h"
#include "createsnapshotfromvolumerecoverypointresponse.h"
#include "createstorediscsivolumerequest.h"
#include "createstorediscsivolumeresponse.h"
#include "createtapewithbarcoderequest.h"
#include "createtapewithbarcoderesponse.h"
#include "createtapesrequest.h"
#include "createtapesresponse.h"
#include "deletebandwidthratelimitrequest.h"
#include "deletebandwidthratelimitresponse.h"
#include "deletechapcredentialsrequest.h"
#include "deletechapcredentialsresponse.h"
#include "deletefilesharerequest.h"
#include "deletefileshareresponse.h"
#include "deletegatewayrequest.h"
#include "deletegatewayresponse.h"
#include "deletesnapshotschedulerequest.h"
#include "deletesnapshotscheduleresponse.h"
#include "deletetaperequest.h"
#include "deletetaperesponse.h"
#include "deletetapearchiverequest.h"
#include "deletetapearchiveresponse.h"
#include "deletevolumerequest.h"
#include "deletevolumeresponse.h"
#include "describebandwidthratelimitrequest.h"
#include "describebandwidthratelimitresponse.h"
#include "describecacherequest.h"
#include "describecacheresponse.h"
#include "describecachediscsivolumesrequest.h"
#include "describecachediscsivolumesresponse.h"
#include "describechapcredentialsrequest.h"
#include "describechapcredentialsresponse.h"
#include "describegatewayinformationrequest.h"
#include "describegatewayinformationresponse.h"
#include "describemaintenancestarttimerequest.h"
#include "describemaintenancestarttimeresponse.h"
#include "describenfsfilesharesrequest.h"
#include "describenfsfilesharesresponse.h"
#include "describesnapshotschedulerequest.h"
#include "describesnapshotscheduleresponse.h"
#include "describestorediscsivolumesrequest.h"
#include "describestorediscsivolumesresponse.h"
#include "describetapearchivesrequest.h"
#include "describetapearchivesresponse.h"
#include "describetaperecoverypointsrequest.h"
#include "describetaperecoverypointsresponse.h"
#include "describetapesrequest.h"
#include "describetapesresponse.h"
#include "describeuploadbufferrequest.h"
#include "describeuploadbufferresponse.h"
#include "describevtldevicesrequest.h"
#include "describevtldevicesresponse.h"
#include "describeworkingstoragerequest.h"
#include "describeworkingstorageresponse.h"
#include "disablegatewayrequest.h"
#include "disablegatewayresponse.h"
#include "listfilesharesrequest.h"
#include "listfilesharesresponse.h"
#include "listgatewaysrequest.h"
#include "listgatewaysresponse.h"
#include "listlocaldisksrequest.h"
#include "listlocaldisksresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtapesrequest.h"
#include "listtapesresponse.h"
#include "listvolumeinitiatorsrequest.h"
#include "listvolumeinitiatorsresponse.h"
#include "listvolumerecoverypointsrequest.h"
#include "listvolumerecoverypointsresponse.h"
#include "listvolumesrequest.h"
#include "listvolumesresponse.h"
#include "notifywhenuploadedrequest.h"
#include "notifywhenuploadedresponse.h"
#include "refreshcacherequest.h"
#include "refreshcacheresponse.h"
#include "removetagsfromresourcerequest.h"
#include "removetagsfromresourceresponse.h"
#include "resetcacherequest.h"
#include "resetcacheresponse.h"
#include "retrievetapearchiverequest.h"
#include "retrievetapearchiveresponse.h"
#include "retrievetaperecoverypointrequest.h"
#include "retrievetaperecoverypointresponse.h"
#include "setlocalconsolepasswordrequest.h"
#include "setlocalconsolepasswordresponse.h"
#include "shutdowngatewayrequest.h"
#include "shutdowngatewayresponse.h"
#include "startgatewayrequest.h"
#include "startgatewayresponse.h"
#include "updatebandwidthratelimitrequest.h"
#include "updatebandwidthratelimitresponse.h"
#include "updatechapcredentialsrequest.h"
#include "updatechapcredentialsresponse.h"
#include "updategatewayinformationrequest.h"
#include "updategatewayinformationresponse.h"
#include "updategatewaysoftwarenowrequest.h"
#include "updategatewaysoftwarenowresponse.h"
#include "updatemaintenancestarttimerequest.h"
#include "updatemaintenancestarttimeresponse.h"
#include "updatenfsfilesharerequest.h"
#include "updatenfsfileshareresponse.h"
#include "updatesnapshotschedulerequest.h"
#include "updatesnapshotscheduleresponse.h"
#include "updatevtldevicetyperequest.h"
#include "updatevtldevicetyperesponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::StorageGateway
 * \brief The QtAws::StorageGateway contains stuff...
 *
 * \inmodule QtAwsStorageGateway
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace StorageGateway {

/*!
 * \class QtAws::StorageGateway::StorageGatewayClient
 * \brief The StorageGatewayClient class provides access to the AWS Storage Gateway service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsStorageGateway
 *
 *  <fullname>AWS Storage Gateway Service</fullname>
 * 
 *  AWS Storage Gateway is the service that connects an on-premises software appliance with cloud-based storage to provide
 *  seamless and secure integration between an organization's on-premises IT environment and AWS's storage infrastructure.
 *  The service enables you to securely upload data to the AWS cloud for cost effective backup and rapid disaster
 * 
 *  recovery>
 * 
 *  Use the following links to get started using the <i>AWS Storage Gateway Service API
 * 
 *  Reference</i>> <ul> <li>
 * 
 *  <a
 *  href="http://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayAPI.html#AWSStorageGatewayHTTPRequestsHeaders">AWS
 *  Storage Gateway Required Request Headers</a>: Describes the required headers that you must send with every POST request
 *  to AWS Storage
 * 
 *  Gateway> </li> <li>
 * 
 *  <a
 *  href="http://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayAPI.html#AWSStorageGatewaySigningRequests">Signing
 *  Requests</a>: AWS Storage Gateway requires that you authenticate every request you send; this topic describes how sign
 *  such a
 * 
 *  request> </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayAPI.html#APIErrorResponses">Error
 *  Responses</a>: Provides reference information about AWS Storage Gateway
 * 
 *  errors> </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/storagegateway/latest/APIReference/API_Operations.html">Operations in AWS Storage
 *  Gateway</a>: Contains detailed descriptions of all AWS Storage Gateway operations, their request parameters, response
 *  elements, possible errors, and examples of requests and
 * 
 *  responses> </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">AWS Storage Gateway Regions and
 *  Endpoints:</a> Provides a list of each region and endpoints available for use with AWS Storage Gateway.
 * 
 *  </p </li> </ul> <note>
 * 
 *  AWS Storage Gateway resource IDs are in uppercase. When you use these resource IDs with the Amazon EC2 API, EC2 expects
 *  resource IDs in lowercase. You must change your resource ID to lowercase to use it with the EC2 API. For example, in
 *  Storage Gateway the ID for a volume might be <code>vol-AA22BB012345DAF670</code>. When you use this ID with the EC2 API,
 *  you must change it to <code>vol-aa22bb012345daf670</code>. Otherwise, the EC2 API might not behave as
 * 
 *  expected> </note> <b>
 * 
 *  IDs for Storage Gateway volumes and Amazon EBS snapshots created from gateway volumes are changing to a longer format.
 *  Starting in December 2016, all new volumes and snapshots will be created with a 17-character string. Starting in April
 *  2016, you will be able to use these longer IDs so you can test your systems with the new format. For more information,
 *  see <a href="https://aws.amazon.com/ec2/faqs/#longer-ids">Longer EC2 and EBS Resource
 * 
 *  IDs</a>>
 * 
 *  For example, a volume Amazon Resource Name (ARN) with the longer volume ID format looks like the
 * 
 *  following>
 * 
 * 
 *  <code>arn:aws:storagegateway:us-west-2:111122223333:gateway/sgw-12A3456B/volume/vol-1122AABBCCDDEEFFG</code>>
 * 
 *  A snapshot ID with the longer ID format looks like the following:
 * 
 *  <code>snap-78e226633445566ee</code>>
 * 
 *  For more information, see <a href="https://forums.aws.amazon.com/ann.jspa?annID=3557">Announcement: Heads-up – Longer
 *  AWS Storage Gateway volume and snapshot IDs coming in
 */

/*!
 * \brief Constructs a StorageGatewayClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
StorageGatewayClient::StorageGatewayClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new StorageGatewayClientPrivate(this), parent)
{
    Q_D(StorageGatewayClient);
    d->apiVersion = QStringLiteral("2013-06-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("storagegateway");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Storage Gateway");
    d->serviceName = QStringLiteral("storagegateway");
}

/*!
 * \overload StorageGatewayClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
StorageGatewayClient::StorageGatewayClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new StorageGatewayClientPrivate(this), parent)
{
    Q_D(StorageGatewayClient);
    d->apiVersion = QStringLiteral("2013-06-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("storagegateway");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Storage Gateway");
    d->serviceName = QStringLiteral("storagegateway");
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * ActivateGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Activates the gateway you previously deployed on your host. In the activation process, you specify information such as
 * the region you want to use for storing snapshots or tapes, the time zone for scheduled snapshots the gateway snapshot
 * schedule window, an activation key, and a name for your gateway. The activation process also associates your gateway
 * with your account; for more information, see
 *
 * <a>UpdateGatewayInformation</a>> <note>
 *
 * You must turn on the gateway VM before you can activate your
 */
ActivateGatewayResponse * StorageGatewayClient::activateGateway(const ActivateGatewayRequest &request)
{
    return qobject_cast<ActivateGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * AddCacheResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Configures one or more gateway local disks as cache for a gateway. This operation is only supported in the cached
 * volume, tape and file gateway type (see <a
 * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/StorageGatewayConcepts.html">Storage Gateway
 *
 * Concepts</a>)>
 *
 * In the request, you specify the gateway Amazon Resource Name (ARN) to which you want to add cache, and one or more disk
 * IDs that you want to configure as
 */
AddCacheResponse * StorageGatewayClient::addCache(const AddCacheRequest &request)
{
    return qobject_cast<AddCacheResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * AddTagsToResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to the specified resource. You use tags to add metadata to resources, which you can use to
 * categorize these resources. For example, you can categorize resources by purpose, owner, environment, or team. Each tag
 * consists of a key and a value, which you define. You can add tags to the following AWS Storage Gateway
 *
 * resources> <ul> <li>
 *
 * Storage gateways of all
 *
 * type> </li> </ul> <ul> <li>
 *
 * Storage
 *
 * Volume> </li> </ul> <ul> <li>
 *
 * Virtual
 *
 * Tape> </li> </ul>
 *
 * You can create a maximum of 10 tags for each resource. Virtual tapes and storage volumes that are recovered to a new
 * gateway maintain their
 */
AddTagsToResourceResponse * StorageGatewayClient::addTagsToResource(const AddTagsToResourceRequest &request)
{
    return qobject_cast<AddTagsToResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * AddUploadBufferResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Configures one or more gateway local disks as upload buffer for a specified gateway. This operation is supported for the
 * stored volume, cached volume and tape gateway
 *
 * types>
 *
 * In the request, you specify the gateway Amazon Resource Name (ARN) to which you want to add upload buffer, and one or
 * more disk IDs that you want to configure as upload
 */
AddUploadBufferResponse * StorageGatewayClient::addUploadBuffer(const AddUploadBufferRequest &request)
{
    return qobject_cast<AddUploadBufferResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * AddWorkingStorageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Configures one or more gateway local disks as working storage for a gateway. This operation is only supported in the
 * stored volume gateway type. This operation is deprecated in cached volume API version 20120630. Use
 * <a>AddUploadBuffer</a>
 *
 * instead> <note>
 *
 * Working storage is also referred to as upload buffer. You can also use the <a>AddUploadBuffer</a> operation to add
 * upload buffer to a stored volume
 *
 * gateway> </note>
 *
 * In the request, you specify the gateway Amazon Resource Name (ARN) to which you want to add working storage, and one or
 * more disk IDs that you want to configure as working
 */
AddWorkingStorageResponse * StorageGatewayClient::addWorkingStorage(const AddWorkingStorageRequest &request)
{
    return qobject_cast<AddWorkingStorageResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * CancelArchivalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels archiving of a virtual tape to the virtual tape shelf (VTS) after the archiving process is initiated. This
 * operation is only supported in the tape gateway
 */
CancelArchivalResponse * StorageGatewayClient::cancelArchival(const CancelArchivalRequest &request)
{
    return qobject_cast<CancelArchivalResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * CancelRetrievalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels retrieval of a virtual tape from the virtual tape shelf (VTS) to a gateway after the retrieval process is
 * initiated. The virtual tape is returned to the VTS. This operation is only supported in the tape gateway
 */
CancelRetrievalResponse * StorageGatewayClient::cancelRetrieval(const CancelRetrievalRequest &request)
{
    return qobject_cast<CancelRetrievalResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * CreateCachediSCSIVolumeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a cached volume on a specified cached volume gateway. This operation is only supported in the cached volume
 * gateway
 *
 * type> <note>
 *
 * Cache storage must be allocated to the gateway before you can create a cached volume. Use the <a>AddCache</a> operation
 * to add cache storage to a gateway.
 *
 * </p </note>
 *
 * In the request, you must specify the gateway, size of the volume in bytes, the iSCSI target name, an IP address on which
 * to expose the target, and a unique client token. In response, the gateway creates the volume and returns information
 * about it. This information includes the volume Amazon Resource Name (ARN), its size, and the iSCSI target ARN that
 * initiators can use to connect to the volume
 *
 * target>
 *
 * Optionally, you can provide the ARN for an existing volume as the <code>SourceVolumeARN</code> for this cached volume,
 * which creates an exact copy of the existing volume’s latest recovery point. The <code>VolumeSizeInBytes</code> value
 * must be equal to or larger than the size of the copied volume, in
 */
CreateCachediSCSIVolumeResponse * StorageGatewayClient::createCachediSCSIVolume(const CreateCachediSCSIVolumeRequest &request)
{
    return qobject_cast<CreateCachediSCSIVolumeResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * CreateNFSFileShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a file share on an existing file gateway. In Storage Gateway, a file share is a file system mount point backed
 * by Amazon S3 cloud storage. Storage Gateway exposes file shares using a Network File System (NFS) interface. This
 * operation is only supported in the file gateway
 *
 * type> <b>
 *
 * File gateway requires AWS Security Token Service (AWS STS) to be activated to enable you create a file share. Make sure
 * AWS STS is activated in the region you are creating your file gateway in. If AWS STS is not activated in the region,
 * activate it. For information about how to activate AWS STS, see Activating and Deactivating AWS STS in an AWS Region in
 * the AWS Identity and Access Management User Guide.
 *
 * </p
 *
 * File gateway does not support creating hard or symbolic links on a file
 */
CreateNFSFileShareResponse * StorageGatewayClient::createNFSFileShare(const CreateNFSFileShareRequest &request)
{
    return qobject_cast<CreateNFSFileShareResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * CreateSnapshotResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates a snapshot of a
 *
 * volume>
 *
 * AWS Storage Gateway provides the ability to back up point-in-time snapshots of your data to Amazon Simple Storage (S3)
 * for durable off-site recovery, as well as import the data to an Amazon Elastic Block Store (EBS) volume in Amazon
 * Elastic Compute Cloud (EC2). You can take snapshots of your gateway volume on a scheduled or ad-hoc basis. This API
 * enables you to take ad-hoc snapshot. For more information, see <a
 * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/managing-volumes.html#SchedulingSnapshot">Editing a
 * Snapshot
 *
 * Schedule</a>>
 *
 * In the CreateSnapshot request you identify the volume by providing its Amazon Resource Name (ARN). You must also provide
 * description for the snapshot. When AWS Storage Gateway takes the snapshot of specified volume, the snapshot and
 * description appears in the AWS Storage Gateway Console. In response, AWS Storage Gateway returns you a snapshot ID. You
 * can use this snapshot ID to check the snapshot progress or later use it when you want to create a volume from a
 * snapshot. This operation is only supported in stored and cached volume gateway
 *
 * type> <note>
 *
 * To list or delete a snapshot, you must use the Amazon EC2 API. For more information, see DescribeSnapshots or
 * DeleteSnapshot in the <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Operations.html">EC2 API
 *
 * reference</a>> </note> <b>
 *
 * Volume and snapshot IDs are changing to a longer length ID format. For more information, see the important note on the
 * <a href="http://docs.aws.amazon.com/storagegateway/latest/APIReference/Welcome.html">Welcome</a>
 */
CreateSnapshotResponse * StorageGatewayClient::createSnapshot(const CreateSnapshotRequest &request)
{
    return qobject_cast<CreateSnapshotResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * CreateSnapshotFromVolumeRecoveryPointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates a snapshot of a gateway from a volume recovery point. This operation is only supported in the cached volume
 * gateway
 *
 * type>
 *
 * A volume recovery point is a point in time at which all data of the volume is consistent and from which you can create a
 * snapshot. To get a list of volume recovery point for cached volume gateway, use
 *
 * <a>ListVolumeRecoveryPoints</a>>
 *
 * In the <code>CreateSnapshotFromVolumeRecoveryPoint</code> request, you identify the volume by providing its Amazon
 * Resource Name (ARN). You must also provide a description for the snapshot. When the gateway takes a snapshot of the
 * specified volume, the snapshot and its description appear in the AWS Storage Gateway console. In response, the gateway
 * returns you a snapshot ID. You can use this snapshot ID to check the snapshot progress or later use it when you want to
 * create a volume from a
 *
 * snapshot> <note>
 *
 * To list or delete a snapshot, you must use the Amazon EC2 API. For more information, in <i>Amazon Elastic Compute Cloud
 * API
 */
CreateSnapshotFromVolumeRecoveryPointResponse * StorageGatewayClient::createSnapshotFromVolumeRecoveryPoint(const CreateSnapshotFromVolumeRecoveryPointRequest &request)
{
    return qobject_cast<CreateSnapshotFromVolumeRecoveryPointResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * CreateStorediSCSIVolumeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a volume on a specified gateway. This operation is only supported in the stored volume gateway
 *
 * type>
 *
 * The size of the volume to create is inferred from the disk size. You can choose to preserve existing data on the disk,
 * create volume from an existing snapshot, or create an empty volume. If you choose to create an empty gateway volume,
 * then any existing data on the disk is
 *
 * erased>
 *
 * In the request you must specify the gateway and the disk information on which you are creating the volume. In response,
 * the gateway creates the volume and returns volume information such as the volume Amazon Resource Name (ARN), its size,
 * and the iSCSI target ARN that initiators can use to connect to the volume
 */
CreateStorediSCSIVolumeResponse * StorageGatewayClient::createStorediSCSIVolume(const CreateStorediSCSIVolumeRequest &request)
{
    return qobject_cast<CreateStorediSCSIVolumeResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * CreateTapeWithBarcodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a virtual tape by using your own barcode. You write data to the virtual tape and then archive the tape. A
 * barcode is unique and can not be reused if it has already been used on a tape . This applies to barcodes used on deleted
 * tapes. This operation is only supported in the tape gateway
 *
 * type> <note>
 *
 * Cache storage must be allocated to the gateway before you can create a virtual tape. Use the <a>AddCache</a> operation
 * to add cache storage to a
 */
CreateTapeWithBarcodeResponse * StorageGatewayClient::createTapeWithBarcode(const CreateTapeWithBarcodeRequest &request)
{
    return qobject_cast<CreateTapeWithBarcodeResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * CreateTapesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates one or more virtual tapes. You write data to the virtual tapes and then archive the tapes. This operation is
 * only supported in the tape gateway
 *
 * type> <note>
 *
 * Cache storage must be allocated to the gateway before you can create virtual tapes. Use the <a>AddCache</a> operation to
 * add cache storage to a gateway.
 */
CreateTapesResponse * StorageGatewayClient::createTapes(const CreateTapesRequest &request)
{
    return qobject_cast<CreateTapesResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DeleteBandwidthRateLimitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the bandwidth rate limits of a gateway. You can delete either the upload and download bandwidth rate limit, or
 * you can delete both. If you delete only one of the limits, the other limit remains unchanged. To specify which gateway
 * to work with, use the Amazon Resource Name (ARN) of the gateway in your
 */
DeleteBandwidthRateLimitResponse * StorageGatewayClient::deleteBandwidthRateLimit(const DeleteBandwidthRateLimitRequest &request)
{
    return qobject_cast<DeleteBandwidthRateLimitResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DeleteChapCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes Challenge-Handshake Authentication Protocol (CHAP) credentials for a specified iSCSI target and initiator
 */
DeleteChapCredentialsResponse * StorageGatewayClient::deleteChapCredentials(const DeleteChapCredentialsRequest &request)
{
    return qobject_cast<DeleteChapCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DeleteFileShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a file share from a file gateway. This operation is only supported in the file gateway
 */
DeleteFileShareResponse * StorageGatewayClient::deleteFileShare(const DeleteFileShareRequest &request)
{
    return qobject_cast<DeleteFileShareResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DeleteGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a gateway. To specify which gateway to delete, use the Amazon Resource Name (ARN) of the gateway in your
 * request. The operation deletes the gateway; however, it does not delete the gateway virtual machine (VM) from your host
 *
 * computer>
 *
 * After you delete a gateway, you cannot reactivate it. Completed snapshots of the gateway volumes are not deleted upon
 * deleting the gateway, however, pending snapshots will not complete. After you delete a gateway, your next step is to
 * remove it from your
 *
 * environment> <b>
 *
 * You no longer pay software charges after the gateway is deleted; however, your existing Amazon EBS snapshots persist and
 * you will continue to be billed for these snapshots. You can choose to remove all remaining Amazon EBS snapshots by
 * canceling your Amazon EC2 subscription.  If you prefer not to cancel your Amazon EC2 subscription, you can delete your
 * snapshots using the Amazon EC2 console. For more information, see the <a href="http://aws.amazon.com/storagegateway">
 * AWS Storage Gateway Detail Page</a>.
 */
DeleteGatewayResponse * StorageGatewayClient::deleteGateway(const DeleteGatewayRequest &request)
{
    return qobject_cast<DeleteGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DeleteSnapshotScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a snapshot of a
 *
 * volume>
 *
 * You can take snapshots of your gateway volumes on a scheduled or ad hoc basis. This API action enables you to delete a
 * snapshot schedule for a volume. For more information, see <a
 * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/WorkingWithSnapshots.html">Working with Snapshots</a>.
 * In the <code>DeleteSnapshotSchedule</code> request, you identify the volume by providing its Amazon Resource Name (ARN).
 * This operation is only supported in stored and cached volume gateway
 *
 * types> <note>
 *
 * To list or delete a snapshot, you must use the Amazon EC2 API. in <i>Amazon Elastic Compute Cloud API
 */
DeleteSnapshotScheduleResponse * StorageGatewayClient::deleteSnapshotSchedule(const DeleteSnapshotScheduleRequest &request)
{
    return qobject_cast<DeleteSnapshotScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DeleteTapeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified virtual tape. This operation is only supported in the tape gateway
 */
DeleteTapeResponse * StorageGatewayClient::deleteTape(const DeleteTapeRequest &request)
{
    return qobject_cast<DeleteTapeResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DeleteTapeArchiveResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified virtual tape from the virtual tape shelf (VTS). This operation is only supported in the tape
 * gateway
 */
DeleteTapeArchiveResponse * StorageGatewayClient::deleteTapeArchive(const DeleteTapeArchiveRequest &request)
{
    return qobject_cast<DeleteTapeArchiveResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DeleteVolumeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified storage volume that you previously created using the <a>CreateCachediSCSIVolume</a> or
 * <a>CreateStorediSCSIVolume</a> API. This operation is only supported in the cached volume and stored volume types. For
 * stored volume gateways, the local disk that was configured as the storage volume is not deleted. You can reuse the local
 * disk to create another storage volume.
 *
 * </p
 *
 * Before you delete a volume, make sure there are no iSCSI connections to the volume you are deleting. You should also
 * make sure there is no snapshot in progress. You can use the Amazon Elastic Compute Cloud (Amazon EC2) API to query
 * snapshots on the volume you are deleting and check the snapshot status. For more information, go to <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
 * in the <i>Amazon Elastic Compute Cloud API
 *
 * Reference</i>>
 *
 * In the request, you must provide the Amazon Resource Name (ARN) of the storage volume you want to
 */
DeleteVolumeResponse * StorageGatewayClient::deleteVolume(const DeleteVolumeRequest &request)
{
    return qobject_cast<DeleteVolumeResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DescribeBandwidthRateLimitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the bandwidth rate limits of a gateway. By default, these limits are not set, which means no bandwidth rate
 * limiting is in
 *
 * effect>
 *
 * This operation only returns a value for a bandwidth rate limit only if the limit is set. If no limits are set for the
 * gateway, then this operation returns only the gateway ARN in the response body. To specify which gateway to describe,
 * use the Amazon Resource Name (ARN) of the gateway in your
 */
DescribeBandwidthRateLimitResponse * StorageGatewayClient::describeBandwidthRateLimit(const DescribeBandwidthRateLimitRequest &request)
{
    return qobject_cast<DescribeBandwidthRateLimitResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DescribeCacheResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the cache of a gateway. This operation is only supported in the cached volume, tape and file
 * gateway
 *
 * types>
 *
 * The response includes disk IDs that are configured as cache, and it includes the amount of cache allocated and
 */
DescribeCacheResponse * StorageGatewayClient::describeCache(const DescribeCacheRequest &request)
{
    return qobject_cast<DescribeCacheResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DescribeCachediSCSIVolumesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of the gateway volumes specified in the request. This operation is only supported in the cached
 * volume gateway
 *
 * types>
 *
 * The list of gateway volumes in the request must be from one gateway. In the response Amazon Storage Gateway returns
 * volume information sorted by volume Amazon Resource Name
 */
DescribeCachediSCSIVolumesResponse * StorageGatewayClient::describeCachediSCSIVolumes(const DescribeCachediSCSIVolumesRequest &request)
{
    return qobject_cast<DescribeCachediSCSIVolumesResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DescribeChapCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of Challenge-Handshake Authentication Protocol (CHAP) credentials information for a specified iSCSI
 * target, one for each target-initiator
 */
DescribeChapCredentialsResponse * StorageGatewayClient::describeChapCredentials(const DescribeChapCredentialsRequest &request)
{
    return qobject_cast<DescribeChapCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DescribeGatewayInformationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata about a gateway such as its name, network interfaces, configured time zone, and the state (whether the
 * gateway is running or not). To specify which gateway to describe, use the Amazon Resource Name (ARN) of the gateway in
 * your
 */
DescribeGatewayInformationResponse * StorageGatewayClient::describeGatewayInformation(const DescribeGatewayInformationRequest &request)
{
    return qobject_cast<DescribeGatewayInformationResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DescribeMaintenanceStartTimeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns your gateway's weekly maintenance start time including the day and time of the week. Note that values are in
 * terms of the gateway's time
 */
DescribeMaintenanceStartTimeResponse * StorageGatewayClient::describeMaintenanceStartTime(const DescribeMaintenanceStartTimeRequest &request)
{
    return qobject_cast<DescribeMaintenanceStartTimeResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DescribeNFSFileSharesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a description for one or more file shares from a file gateway. This operation is only supported in the file gateway
 */
DescribeNFSFileSharesResponse * StorageGatewayClient::describeNFSFileShares(const DescribeNFSFileSharesRequest &request)
{
    return qobject_cast<DescribeNFSFileSharesResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DescribeSnapshotScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the snapshot schedule for the specified gateway volume. The snapshot schedule information includes intervals
 * at which snapshots are automatically initiated on the volume. This operation is only supported in the cached volume and
 * stored volume
 */
DescribeSnapshotScheduleResponse * StorageGatewayClient::describeSnapshotSchedule(const DescribeSnapshotScheduleRequest &request)
{
    return qobject_cast<DescribeSnapshotScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DescribeStorediSCSIVolumesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the description of the gateway volumes specified in the request. The list of gateway volumes in the request must
 * be from one gateway. In the response Amazon Storage Gateway returns volume information sorted by volume ARNs. This
 * operation is only supported in stored volume gateway
 */
DescribeStorediSCSIVolumesResponse * StorageGatewayClient::describeStorediSCSIVolumes(const DescribeStorediSCSIVolumesRequest &request)
{
    return qobject_cast<DescribeStorediSCSIVolumesResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DescribeTapeArchivesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of specified virtual tapes in the virtual tape shelf (VTS). This operation is only supported in
 * the tape gateway
 *
 * type>
 *
 * If a specific <code>TapeARN</code> is not specified, AWS Storage Gateway returns a description of all virtual tapes
 * found in the VTS associated with your
 */
DescribeTapeArchivesResponse * StorageGatewayClient::describeTapeArchives(const DescribeTapeArchivesRequest &request)
{
    return qobject_cast<DescribeTapeArchivesResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DescribeTapeRecoveryPointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of virtual tape recovery points that are available for the specified tape
 *
 * gateway>
 *
 * A recovery point is a point-in-time view of a virtual tape at which all the data on the virtual tape is consistent. If
 * your gateway crashes, virtual tapes that have recovery points can be recovered to a new gateway. This operation is only
 * supported in the tape gateway
 */
DescribeTapeRecoveryPointsResponse * StorageGatewayClient::describeTapeRecoveryPoints(const DescribeTapeRecoveryPointsRequest &request)
{
    return qobject_cast<DescribeTapeRecoveryPointsResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DescribeTapesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of the specified Amazon Resource Name (ARN) of virtual tapes. If a <code>TapeARN</code> is not
 * specified, returns a description of all virtual tapes associated with the specified gateway. This operation is only
 * supported in the tape gateway
 */
DescribeTapesResponse * StorageGatewayClient::describeTapes(const DescribeTapesRequest &request)
{
    return qobject_cast<DescribeTapesResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DescribeUploadBufferResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the upload buffer of a gateway. This operation is supported for the stored volume, cached
 * volume and tape gateway
 *
 * types>
 *
 * The response includes disk IDs that are configured as upload buffer space, and it includes the amount of upload buffer
 * space allocated and
 */
DescribeUploadBufferResponse * StorageGatewayClient::describeUploadBuffer(const DescribeUploadBufferRequest &request)
{
    return qobject_cast<DescribeUploadBufferResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DescribeVTLDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of virtual tape library (VTL) devices for the specified tape gateway. In the response, AWS Storage
 * Gateway returns VTL device
 *
 * information>
 *
 * This operation is only supported in the tape gateway
 */
DescribeVTLDevicesResponse * StorageGatewayClient::describeVTLDevices(const DescribeVTLDevicesRequest &request)
{
    return qobject_cast<DescribeVTLDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DescribeWorkingStorageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the working storage of a gateway. This operation is only supported in the stored volumes
 * gateway type. This operation is deprecated in cached volumes API version (20120630). Use DescribeUploadBuffer
 *
 * instead> <note>
 *
 * Working storage is also referred to as upload buffer. You can also use the DescribeUploadBuffer operation to add upload
 * buffer to a stored volume
 *
 * gateway> </note>
 *
 * The response includes disk IDs that are configured as working storage, and it includes the amount of working storage
 * allocated and
 */
DescribeWorkingStorageResponse * StorageGatewayClient::describeWorkingStorage(const DescribeWorkingStorageRequest &request)
{
    return qobject_cast<DescribeWorkingStorageResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * DisableGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables a tape gateway when the gateway is no longer functioning. For example, if your gateway VM is damaged, you can
 * disable the gateway so you can recover virtual
 *
 * tapes>
 *
 * Use this operation for a tape gateway that is not reachable or not functioning. This operation is only supported in the
 * tape gateway
 *
 * type> <b>
 *
 * Once a gateway is disabled it cannot be
 */
DisableGatewayResponse * StorageGatewayClient::disableGateway(const DisableGatewayRequest &request)
{
    return qobject_cast<DisableGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * ListFileSharesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the file shares for a specific file gateway, or the list of file shares that belong to the calling user
 * account. This operation is only supported in the file gateway
 */
ListFileSharesResponse * StorageGatewayClient::listFileShares(const ListFileSharesRequest &request)
{
    return qobject_cast<ListFileSharesResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * ListGatewaysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists gateways owned by an AWS account in a region specified in the request. The returned list is ordered by gateway
 * Amazon Resource Name
 *
 * (ARN)>
 *
 * By default, the operation returns a maximum of 100 gateways. This operation supports pagination that allows you to
 * optionally reduce the number of gateways returned in a
 *
 * response>
 *
 * If you have more gateways than are returned in a response (that is, the response returns only a truncated list of your
 * gateways), the response contains a marker that you can specify in your next request to fetch the next page of
 */
ListGatewaysResponse * StorageGatewayClient::listGateways(const ListGatewaysRequest &request)
{
    return qobject_cast<ListGatewaysResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * ListLocalDisksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the gateway's local disks. To specify which gateway to describe, you use the Amazon Resource Name
 * (ARN) of the gateway in the body of the
 *
 * request>
 *
 * The request returns a list of all disks, specifying which are configured as working storage, cache storage, or stored
 * volume or not configured at all. The response includes a <code>DiskStatus</code> field. This field can have a value of
 * present (the disk is available to use), missing (the disk is no longer connected to the gateway), or mismatch (the disk
 * node is occupied by a disk that has incorrect metadata or the disk content is
 */
ListLocalDisksResponse * StorageGatewayClient::listLocalDisks(const ListLocalDisksRequest &request)
{
    return qobject_cast<ListLocalDisksResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags that have been added to the specified resource. This operation is only supported in the cached volume,
 * stored volume and tape gateway
 */
ListTagsForResourceResponse * StorageGatewayClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * ListTapesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists virtual tapes in your virtual tape library (VTL) and your virtual tape shelf (VTS). You specify the tapes to list
 * by specifying one or more tape Amazon Resource Names (ARNs). If you don't specify a tape ARN, the operation lists all
 * virtual tapes in both your VTL and
 *
 * VTS>
 *
 * This operation supports pagination. By default, the operation returns a maximum of up to 100 tapes. You can optionally
 * specify the <code>Limit</code> parameter in the body to limit the number of tapes in the response. If the number of
 * tapes returned in the response is truncated, the response includes a <code>Marker</code> element that you can use in
 * your subsequent request to retrieve the next set of tapes. This operation is only supported in the tape gateway
 */
ListTapesResponse * StorageGatewayClient::listTapes(const ListTapesRequest &request)
{
    return qobject_cast<ListTapesResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * ListVolumeInitiatorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists iSCSI initiators that are connected to a volume. You can use this operation to determine whether a volume is being
 * used or not. This operation is only supported in the cached volume and stored volume gateway
 */
ListVolumeInitiatorsResponse * StorageGatewayClient::listVolumeInitiators(const ListVolumeInitiatorsRequest &request)
{
    return qobject_cast<ListVolumeInitiatorsResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * ListVolumeRecoveryPointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the recovery points for a specified gateway. This operation is only supported in the cached volume gateway
 *
 * type>
 *
 * Each cache volume has one recovery point. A volume recovery point is a point in time at which all data of the volume is
 * consistent and from which you can create a snapshot or clone a new cached volume from a source volume. To create a
 * snapshot from a volume recovery point use the <a>CreateSnapshotFromVolumeRecoveryPoint</a>
 */
ListVolumeRecoveryPointsResponse * StorageGatewayClient::listVolumeRecoveryPoints(const ListVolumeRecoveryPointsRequest &request)
{
    return qobject_cast<ListVolumeRecoveryPointsResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * ListVolumesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the iSCSI stored volumes of a gateway. Results are sorted by volume ARN. The response includes only the volume
 * ARNs. If you want additional volume information, use the <a>DescribeStorediSCSIVolumes</a> or the
 * <a>DescribeCachediSCSIVolumes</a>
 *
 * API>
 *
 * The operation supports pagination. By default, the operation returns a maximum of up to 100 volumes. You can optionally
 * specify the <code>Limit</code> field in the body to limit the number of volumes in the response. If the number of
 * volumes returned in the response is truncated, the response includes a Marker field. You can use this Marker value in
 * your subsequent request to retrieve the next set of volumes. This operation is only supported in the cached volume and
 * stored volume gateway
 */
ListVolumesResponse * StorageGatewayClient::listVolumes(const ListVolumesRequest &request)
{
    return qobject_cast<ListVolumesResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * NotifyWhenUploadedResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends you notification through CloudWatch Events when all files written to your NFS file share have been uploaded to
 * Amazon
 *
 * S3>
 *
 * AWS Storage Gateway can send a notification through Amazon CloudWatch Events when all files written to your file share
 * up to that point in time have been uploaded to Amazon S3. These files include files written to the NFS file share up to
 * the time that you make a request for notification. When the upload is done, Storage Gateway sends you notification
 * through an Amazon CloudWatch Event. You can configure CloudWatch Events to send the notification through event targets
 * such as Amazon SNS or AWS Lambda function. This operation is only supported in the file gateway
 *
 * type>
 *
 * For more information, see Getting File Upload Notification in the Storage Gateway User Guide
 * (https://docs.aws.amazon.com/storagegateway/latest/userguide/monitoring-file-gateway.html#get-upload-notification).
 */
NotifyWhenUploadedResponse * StorageGatewayClient::notifyWhenUploaded(const NotifyWhenUploadedRequest &request)
{
    return qobject_cast<NotifyWhenUploadedResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * RefreshCacheResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Refreshes the cache for the specified file share. This operation finds objects in the Amazon S3 bucket that were added,
 * removed or replaced since the gateway last listed the bucket's contents and cached the results. This operation is only
 * supported in the file gateway
 */
RefreshCacheResponse * StorageGatewayClient::refreshCache(const RefreshCacheRequest &request)
{
    return qobject_cast<RefreshCacheResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * RemoveTagsFromResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from the specified resource. This operation is only supported in the cached volume, stored
 * volume and tape gateway
 */
RemoveTagsFromResourceResponse * StorageGatewayClient::removeTagsFromResource(const RemoveTagsFromResourceRequest &request)
{
    return qobject_cast<RemoveTagsFromResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * ResetCacheResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resets all cache disks that have encountered a error and makes the disks available for reconfiguration as cache storage.
 * If your cache disk encounters a error, the gateway prevents read and write operations on virtual tapes in the gateway.
 * For example, an error can occur when a disk is corrupted or removed from the gateway. When a cache is reset, the gateway
 * loses its cache storage. At this point you can reconfigure the disks as cache disks. This operation is only supported in
 * the cached volume and tape
 *
 * types> <b>
 *
 * If the cache disk you are resetting contains data that has not been uploaded to Amazon S3 yet, that data can be lost.
 * After you reset cache disks, there will be no configured cache disks left in the gateway, so you must configure at least
 * one new cache disk for your gateway to function
 */
ResetCacheResponse * StorageGatewayClient::resetCache(const ResetCacheRequest &request)
{
    return qobject_cast<ResetCacheResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * RetrieveTapeArchiveResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an archived virtual tape from the virtual tape shelf (VTS) to a tape gateway. Virtual tapes archived in the
 * VTS are not associated with any gateway. However after a tape is retrieved, it is associated with a gateway, even though
 * it is also listed in the VTS, that is, archive. This operation is only supported in the tape gateway
 *
 * type>
 *
 * Once a tape is successfully retrieved to a gateway, it cannot be retrieved again to another gateway. You must archive
 * the tape again before you can retrieve it to another gateway. This operation is only supported in the tape gateway
 */
RetrieveTapeArchiveResponse * StorageGatewayClient::retrieveTapeArchive(const RetrieveTapeArchiveRequest &request)
{
    return qobject_cast<RetrieveTapeArchiveResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * RetrieveTapeRecoveryPointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the recovery point for the specified virtual tape. This operation is only supported in the tape gateway
 *
 * type>
 *
 * A recovery point is a point in time view of a virtual tape at which all the data on the tape is consistent. If your
 * gateway crashes, virtual tapes that have recovery points can be recovered to a new
 *
 * gateway> <note>
 *
 * The virtual tape can be retrieved to only one gateway. The retrieved tape is read-only. The virtual tape can be
 * retrieved to only a tape gateway. There is no charge for retrieving recovery
 */
RetrieveTapeRecoveryPointResponse * StorageGatewayClient::retrieveTapeRecoveryPoint(const RetrieveTapeRecoveryPointRequest &request)
{
    return qobject_cast<RetrieveTapeRecoveryPointResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * SetLocalConsolePasswordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the password for your VM local console. When you log in to the local console for the first time, you log in to the
 * VM with the default credentials. We recommend that you set a new password. You don't need to know the default password
 * to set a new
 */
SetLocalConsolePasswordResponse * StorageGatewayClient::setLocalConsolePassword(const SetLocalConsolePasswordRequest &request)
{
    return qobject_cast<SetLocalConsolePasswordResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * ShutdownGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Shuts down a gateway. To specify which gateway to shut down, use the Amazon Resource Name (ARN) of the gateway in the
 * body of your
 *
 * request>
 *
 * The operation shuts down the gateway service component running in the gateway's virtual machine (VM) and not the host
 *
 * VM> <note>
 *
 * If you want to shut down the VM, it is recommended that you first shut down the gateway component in the VM to avoid
 * unpredictable
 *
 * conditions> </note>
 *
 * After the gateway is shutdown, you cannot call any other API except <a>StartGateway</a>,
 * <a>DescribeGatewayInformation</a>, and <a>ListGateways</a>. For more information, see <a>ActivateGateway</a>. Your
 * applications cannot read from or write to the gateway's storage volumes, and there are no snapshots
 *
 * taken> <note>
 *
 * When you make a shutdown request, you will get a <code>200 OK</code> success response immediately. However, it might
 * take some time for the gateway to shut down. You can call the <a>DescribeGatewayInformation</a> API to check the status.
 * For more information, see
 *
 * <a>ActivateGateway</a>> </note>
 *
 * If do not intend to use the gateway again, you must delete the gateway (using <a>DeleteGateway</a>) to no longer pay
 * software charges associated with the
 */
ShutdownGatewayResponse * StorageGatewayClient::shutdownGateway(const ShutdownGatewayRequest &request)
{
    return qobject_cast<ShutdownGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * StartGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a gateway that you previously shut down (see <a>ShutdownGateway</a>). After the gateway starts, you can then make
 * other API calls, your applications can read from or write to the gateway's storage volumes and you will be able to take
 * snapshot
 *
 * backups> <note>
 *
 * When you make a request, you will get a 200 OK success response immediately. However, it might take some time for the
 * gateway to be ready. You should call <a>DescribeGatewayInformation</a> and check the status before making any additional
 * API calls. For more information, see
 *
 * <a>ActivateGateway</a>> </note>
 *
 * To specify which gateway to start, use the Amazon Resource Name (ARN) of the gateway in your
 */
StartGatewayResponse * StorageGatewayClient::startGateway(const StartGatewayRequest &request)
{
    return qobject_cast<StartGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * UpdateBandwidthRateLimitResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the bandwidth rate limits of a gateway. You can update both the upload and download bandwidth rate limit or
 * specify only one of the two. If you don't set a bandwidth rate limit, the existing rate limit
 *
 * remains>
 *
 * By default, a gateway's bandwidth rate limits are not set. If you don't set any limit, the gateway does not have any
 * limitations on its bandwidth usage and could potentially use the maximum available
 *
 * bandwidth>
 *
 * To specify which gateway to update, use the Amazon Resource Name (ARN) of the gateway in your
 */
UpdateBandwidthRateLimitResponse * StorageGatewayClient::updateBandwidthRateLimit(const UpdateBandwidthRateLimitRequest &request)
{
    return qobject_cast<UpdateBandwidthRateLimitResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * UpdateChapCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the Challenge-Handshake Authentication Protocol (CHAP) credentials for a specified iSCSI target. By default, a
 * gateway does not have CHAP enabled; however, for added security, you might use
 *
 * it> <b>
 *
 * When you update CHAP credentials, all existing connections on the target are closed and initiators must reconnect with
 * the new
 */
UpdateChapCredentialsResponse * StorageGatewayClient::updateChapCredentials(const UpdateChapCredentialsRequest &request)
{
    return qobject_cast<UpdateChapCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * UpdateGatewayInformationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a gateway's metadata, which includes the gateway's name and time zone. To specify which gateway to update, use
 * the Amazon Resource Name (ARN) of the gateway in your
 *
 * request> <note>
 *
 * For Gateways activated after September 2, 2015, the gateway's ARN contains the gateway ID rather than the gateway name.
 * However, changing the name of the gateway has no effect on the gateway's
 */
UpdateGatewayInformationResponse * StorageGatewayClient::updateGatewayInformation(const UpdateGatewayInformationRequest &request)
{
    return qobject_cast<UpdateGatewayInformationResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * UpdateGatewaySoftwareNowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the gateway virtual machine (VM) software. The request immediately triggers the software
 *
 * update> <note>
 *
 * When you make this request, you get a <code>200 OK</code> success response immediately. However, it might take some time
 * for the update to complete. You can call <a>DescribeGatewayInformation</a> to verify the gateway is in the
 * <code>STATE_RUNNING</code>
 *
 * state> </note> <b>
 *
 * A software update forces a system restart of your gateway. You can minimize the chance of any disruption to your
 * applications by increasing your iSCSI Initiators' timeouts. For more information about increasing iSCSI Initiator
 * timeouts for Windows and Linux, see <a
 * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/ConfiguringiSCSIClientInitiatorWindowsClient.html#CustomizeWindowsiSCSISettings">Customizing
 * Your Windows iSCSI Settings</a> and <a
 * href="http://docs.aws.amazon.com/storagegateway/latest/userguide/ConfiguringiSCSIClientInitiatorRedHatClient.html#CustomizeLinuxiSCSISettings">Customizing
 * Your Linux iSCSI Settings</a>,
 */
UpdateGatewaySoftwareNowResponse * StorageGatewayClient::updateGatewaySoftwareNow(const UpdateGatewaySoftwareNowRequest &request)
{
    return qobject_cast<UpdateGatewaySoftwareNowResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * UpdateMaintenanceStartTimeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a gateway's weekly maintenance start time information, including day and time of the week. The maintenance time
 * is the time in your gateway's time
 */
UpdateMaintenanceStartTimeResponse * StorageGatewayClient::updateMaintenanceStartTime(const UpdateMaintenanceStartTimeRequest &request)
{
    return qobject_cast<UpdateMaintenanceStartTimeResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * UpdateNFSFileShareResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a file share. This operation is only supported in the file gateway
 *
 * type> <note>
 *
 * To leave a file share field unchanged, set the corresponding input field to
 *
 * null> </note>
 *
 * Updates the following file share
 *
 * setting> <ul> <li>
 *
 * Default storage class for your S3
 *
 * bucke> </li> <li>
 *
 * Metadata defaults for your S3
 *
 * bucke> </li> <li>
 *
 * Allowed NFS clients for your file
 *
 * shar> </li> <li>
 *
 * Squash
 *
 * setting> </li> <li>
 *
 * Write status of your file
 *
 * shar> </li> </ul> <note>
 *
 * To leave a file share field unchanged, set the corresponding input field to null. This operation is only supported in
 * file
 */
UpdateNFSFileShareResponse * StorageGatewayClient::updateNFSFileShare(const UpdateNFSFileShareRequest &request)
{
    return qobject_cast<UpdateNFSFileShareResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * UpdateSnapshotScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a snapshot schedule configured for a gateway volume. This operation is only supported in the cached volume and
 * stored volume gateway
 *
 * types>
 *
 * The default snapshot schedule for volume is once every 24 hours, starting at the creation time of the volume. You can
 * use this API to change the snapshot schedule configured for the
 *
 * volume>
 *
 * In the request you must identify the gateway volume whose snapshot schedule you want to update, and the schedule
 * information, including when you want the snapshot to begin on a day and the frequency (in hours) of
 */
UpdateSnapshotScheduleResponse * StorageGatewayClient::updateSnapshotSchedule(const UpdateSnapshotScheduleRequest &request)
{
    return qobject_cast<UpdateSnapshotScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the StorageGatewayClient service, and returns a pointer to an
 * UpdateVTLDeviceTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the type of medium changer in a tape gateway. When you activate a tape gateway, you select a medium changer type
 * for the tape gateway. This operation enables you to select a different type of medium changer after a tape gateway is
 * activated. This operation is only supported in the tape gateway
 */
UpdateVTLDeviceTypeResponse * StorageGatewayClient::updateVTLDeviceType(const UpdateVTLDeviceTypeRequest &request)
{
    return qobject_cast<UpdateVTLDeviceTypeResponse *>(send(request));
}

/*!
 * \class QtAws::StorageGateway::StorageGatewayClientPrivate
 * \brief The StorageGatewayClientPrivate class provides private implementation for StorageGatewayClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsStorageGateway
 */

/*!
 * Constructs a StorageGatewayClientPrivate object with public implementation \a q.
 */
StorageGatewayClientPrivate::StorageGatewayClientPrivate(StorageGatewayClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace StorageGateway
} // namespace QtAws
