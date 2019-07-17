/*
    Copyright 2013-2019 Paul Colby

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

#include "firehoseclient.h"
#include "firehoseclient_p.h"

#include "core/awssignaturev4.h"
#include "createdeliverystreamrequest.h"
#include "createdeliverystreamresponse.h"
#include "deletedeliverystreamrequest.h"
#include "deletedeliverystreamresponse.h"
#include "describedeliverystreamrequest.h"
#include "describedeliverystreamresponse.h"
#include "listdeliverystreamsrequest.h"
#include "listdeliverystreamsresponse.h"
#include "listtagsfordeliverystreamrequest.h"
#include "listtagsfordeliverystreamresponse.h"
#include "putrecordrequest.h"
#include "putrecordresponse.h"
#include "putrecordbatchrequest.h"
#include "putrecordbatchresponse.h"
#include "startdeliverystreamencryptionrequest.h"
#include "startdeliverystreamencryptionresponse.h"
#include "stopdeliverystreamencryptionrequest.h"
#include "stopdeliverystreamencryptionresponse.h"
#include "tagdeliverystreamrequest.h"
#include "tagdeliverystreamresponse.h"
#include "untagdeliverystreamrequest.h"
#include "untagdeliverystreamresponse.h"
#include "updatedestinationrequest.h"
#include "updatedestinationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Firehose
 * \brief Contains classess for accessing Amazon Kinesis Firehose.
 *
 * \inmodule QtAwsFirehose
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::FirehoseClient
 * \brief The FirehoseClient class provides access to the Amazon Kinesis Firehose service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 */

/*!
 * \brief Constructs a FirehoseClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
FirehoseClient::FirehoseClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new FirehoseClientPrivate(this), parent)
{
    Q_D(FirehoseClient);
    d->apiVersion = QStringLiteral("2015-08-04");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("firehose");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Firehose");
    d->serviceName = QStringLiteral("firehose");
}

/*!
 * \overload FirehoseClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
FirehoseClient::FirehoseClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new FirehoseClientPrivate(this), parent)
{
    Q_D(FirehoseClient);
    d->apiVersion = QStringLiteral("2015-08-04");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("firehose");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Kinesis Firehose");
    d->serviceName = QStringLiteral("firehose");
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * CreateDeliveryStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Kinesis Data Firehose delivery
 *
 * stream>
 *
 * By default, you can create up to 50 delivery streams per AWS
 *
 * Region>
 *
 * This is an asynchronous operation that immediately returns. The initial status of the delivery stream is
 * <code>CREATING</code>. After the delivery stream is created, its status is <code>ACTIVE</code> and it now accepts data.
 * Attempts to send data to a delivery stream that is not in the <code>ACTIVE</code> state cause an exception. To check the
 * state of a delivery stream, use
 *
 * <a>DescribeDeliveryStream</a>>
 *
 * A Kinesis Data Firehose delivery stream can be configured to receive records directly from providers using
 * <a>PutRecord</a> or <a>PutRecordBatch</a>, or it can be configured to use an existing Kinesis stream as its source. To
 * specify a Kinesis data stream as input, set the <code>DeliveryStreamType</code> parameter to
 * <code>KinesisStreamAsSource</code>, and provide the Kinesis stream Amazon Resource Name (ARN) and role ARN in the
 * <code>KinesisStreamSourceConfiguration</code>
 *
 * parameter>
 *
 * A delivery stream is configured with a single destination: Amazon S3, Amazon ES, Amazon Redshift, or Splunk. You must
 * specify only one of the following destination configuration parameters: <code>ExtendedS3DestinationConfiguration</code>,
 * <code>S3DestinationConfiguration</code>, <code>ElasticsearchDestinationConfiguration</code>,
 * <code>RedshiftDestinationConfiguration</code>, or
 *
 * <code>SplunkDestinationConfiguration</code>>
 *
 * When you specify <code>S3DestinationConfiguration</code>, you can also provide the following optional values:
 * BufferingHints, <code>EncryptionConfiguration</code>, and <code>CompressionFormat</code>. By default, if no
 * <code>BufferingHints</code> value is provided, Kinesis Data Firehose buffers data up to 5 MB or for 5 minutes, whichever
 * condition is satisfied first. <code>BufferingHints</code> is a hint, so there are some cases where the service cannot
 * adhere to these conditions strictly. For example, record boundaries might be such that the size is a little over or
 * under the configured buffering size. By default, no encryption is performed. We strongly recommend that you enable
 * encryption to ensure secure data storage in Amazon
 *
 * S3>
 *
 * A few notes about Amazon Redshift as a
 *
 * destination> <ul> <li>
 *
 * An Amazon Redshift destination requires an S3 bucket as intermediate location. Kinesis Data Firehose first delivers data
 * to Amazon S3 and then uses <code>COPY</code> syntax to load data into an Amazon Redshift table. This is specified in the
 * <code>RedshiftDestinationConfiguration.S3Configuration</code>
 *
 * parameter> </li> <li>
 *
 * The compression formats <code>SNAPPY</code> or <code>ZIP</code> cannot be specified in
 * <code>RedshiftDestinationConfiguration.S3Configuration</code> because the Amazon Redshift <code>COPY</code> operation
 * that reads from the S3 bucket doesn't support these compression
 *
 * formats> </li> <li>
 *
 * We strongly recommend that you use the user name and password you provide exclusively with Kinesis Data Firehose, and
 * that the permissions for the account are restricted for Amazon Redshift <code>INSERT</code>
 *
 * permissions> </li> </ul>
 *
 * Kinesis Data Firehose assumes the IAM role that is configured as part of the destination. The role should allow the
 * Kinesis Data Firehose principal to assume the role, and the role should have permissions that allow the service to
 * deliver the data. For more information, see <a
 * href="http://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Grant Kinesis Data Firehose
 * Access to an Amazon S3 Destination</a> in the <i>Amazon Kinesis Data Firehose Developer
 */
CreateDeliveryStreamResponse * FirehoseClient::createDeliveryStream(const CreateDeliveryStreamRequest &request)
{
    return qobject_cast<CreateDeliveryStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * DeleteDeliveryStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a delivery stream and its
 *
 * data>
 *
 * You can delete a delivery stream only if it is in <code>ACTIVE</code> or <code>DELETING</code> state, and not in the
 * <code>CREATING</code> state. While the deletion request is in process, the delivery stream is in the
 * <code>DELETING</code>
 *
 * state>
 *
 * To check the state of a delivery stream, use
 *
 * <a>DescribeDeliveryStream</a>>
 *
 * While the delivery stream is <code>DELETING</code> state, the service might continue to accept the records, but it
 * doesn't make any guarantees with respect to delivering the data. Therefore, as a best practice, you should first stop
 * any applications that are sending records before deleting a delivery
 */
DeleteDeliveryStreamResponse * FirehoseClient::deleteDeliveryStream(const DeleteDeliveryStreamRequest &request)
{
    return qobject_cast<DeleteDeliveryStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * DescribeDeliveryStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified delivery stream and gets the status. For example, after your delivery stream is created, call
 * <code>DescribeDeliveryStream</code> to see whether the delivery stream is <code>ACTIVE</code> and therefore ready for
 * data to be sent to
 */
DescribeDeliveryStreamResponse * FirehoseClient::describeDeliveryStream(const DescribeDeliveryStreamRequest &request)
{
    return qobject_cast<DescribeDeliveryStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * ListDeliveryStreamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your delivery streams in alphabetical order of their
 *
 * names>
 *
 * The number of delivery streams might be too large to return using a single call to <code>ListDeliveryStreams</code>. You
 * can limit the number of delivery streams returned, using the <code>Limit</code> parameter. To determine whether there
 * are more delivery streams to list, check the value of <code>HasMoreDeliveryStreams</code> in the output. If there are
 * more delivery streams to list, you can request them by calling this operation again and setting the
 * <code>ExclusiveStartDeliveryStreamName</code> parameter to the name of the last delivery stream returned in the last
 */
ListDeliveryStreamsResponse * FirehoseClient::listDeliveryStreams(const ListDeliveryStreamsRequest &request)
{
    return qobject_cast<ListDeliveryStreamsResponse *>(send(request));
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * ListTagsForDeliveryStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the specified delivery stream. This operation has a limit of five transactions per second per
 * account.
 */
ListTagsForDeliveryStreamResponse * FirehoseClient::listTagsForDeliveryStream(const ListTagsForDeliveryStreamRequest &request)
{
    return qobject_cast<ListTagsForDeliveryStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * PutRecordResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Writes a single data record into an Amazon Kinesis Data Firehose delivery stream. To write multiple data records into a
 * delivery stream, use <a>PutRecordBatch</a>. Applications using these operations are referred to as
 *
 * producers>
 *
 * By default, each delivery stream can take in up to 2,000 transactions per second, 5,000 records per second, or 5 MB per
 * second. If you use <a>PutRecord</a> and <a>PutRecordBatch</a>, the limits are an aggregate across these two operations
 * for each delivery stream. For more information about limits and how to request an increase, see <a
 * href="http://docs.aws.amazon.com/firehose/latest/dev/limits.html">Amazon Kinesis Data Firehose Limits</a>.
 *
 * </p
 *
 * You must specify the name of the delivery stream and the data record when using <a>PutRecord</a>. The data record
 * consists of a data blob that can be up to 1,000 KB in size, and any kind of data. For example, it can be a segment from
 * a log file, geographic location data, website clickstream data, and so
 *
 * on>
 *
 * Kinesis Data Firehose buffers records before delivering them to the destination. To disambiguate the data blobs at the
 * destination, a common solution is to use delimiters in the data, such as a newline (<code>\n</code>) or some other
 * character unique within the data. This allows the consumer application to parse individual data items when reading the
 * data from the
 *
 * destination>
 *
 * The <code>PutRecord</code> operation returns a <code>RecordId</code>, which is a unique string assigned to each record.
 * Producer applications can use this ID for purposes such as auditability and
 *
 * investigation>
 *
 * If the <code>PutRecord</code> operation throws a <code>ServiceUnavailableException</code>, back off and retry. If the
 * exception persists, it is possible that the throughput limits have been exceeded for the delivery stream.
 *
 * </p
 *
 * Data records sent to Kinesis Data Firehose are stored for 24 hours from the time they are added to a delivery stream as
 * it tries to send the records to the destination. If the destination is unreachable for more than 24 hours, the data is
 * no longer
 *
 * available> <b>
 *
 * Don't concatenate two or more base64 strings to form the data fields of your records. Instead, concatenate the raw data,
 * then perform base64
 */
PutRecordResponse * FirehoseClient::putRecord(const PutRecordRequest &request)
{
    return qobject_cast<PutRecordResponse *>(send(request));
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * PutRecordBatchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Writes multiple data records into a delivery stream in a single call, which can achieve higher throughput per producer
 * than when writing single records. To write single data records into a delivery stream, use <a>PutRecord</a>.
 * Applications using these operations are referred to as
 *
 * producers>
 *
 * By default, each delivery stream can take in up to 2,000 transactions per second, 5,000 records per second, or 5 MB per
 * second. If you use <a>PutRecord</a> and <a>PutRecordBatch</a>, the limits are an aggregate across these two operations
 * for each delivery stream. For more information about limits, see <a
 * href="http://docs.aws.amazon.com/firehose/latest/dev/limits.html">Amazon Kinesis Data Firehose
 *
 * Limits</a>>
 *
 * Each <a>PutRecordBatch</a> request supports up to 500 records. Each record in the request can be as large as 1,000 KB
 * (before 64-bit encoding), up to a limit of 4 MB for the entire request. These limits cannot be
 *
 * changed>
 *
 * You must specify the name of the delivery stream and the data record when using <a>PutRecord</a>. The data record
 * consists of a data blob that can be up to 1,000 KB in size, and any kind of data. For example, it could be a segment
 * from a log file, geographic location data, website clickstream data, and so
 *
 * on>
 *
 * Kinesis Data Firehose buffers records before delivering them to the destination. To disambiguate the data blobs at the
 * destination, a common solution is to use delimiters in the data, such as a newline (<code>\n</code>) or some other
 * character unique within the data. This allows the consumer application to parse individual data items when reading the
 * data from the
 *
 * destination>
 *
 * The <a>PutRecordBatch</a> response includes a count of failed records, <code>FailedPutCount</code>, and an array of
 * responses, <code>RequestResponses</code>. Even if the <a>PutRecordBatch</a> call succeeds, the value of
 * <code>FailedPutCount</code> may be greater than 0, indicating that there are records for which the operation didn't
 * succeed. Each entry in the <code>RequestResponses</code> array provides additional information about the processed
 * record. It directly correlates with a record in the request array using the same ordering, from the top to the bottom.
 * The response array always includes the same number of records as the request array. <code>RequestResponses</code>
 * includes both successfully and unsuccessfully processed records. Kinesis Data Firehose tries to process all records in
 * each <a>PutRecordBatch</a> request. A single record failure does not stop the processing of subsequent records.
 *
 * </p
 *
 * A successfully processed record includes a <code>RecordId</code> value, which is unique for the record. An
 * unsuccessfully processed record includes <code>ErrorCode</code> and <code>ErrorMessage</code> values.
 * <code>ErrorCode</code> reflects the type of error, and is one of the following values:
 * <code>ServiceUnavailableException</code> or <code>InternalFailure</code>. <code>ErrorMessage</code> provides more
 * detailed information about the
 *
 * error>
 *
 * If there is an internal server error or a timeout, the write might have completed or it might have failed. If
 * <code>FailedPutCount</code> is greater than 0, retry the request, resending only those records that might have failed
 * processing. This minimizes the possible duplicate records and also reduces the total bytes sent (and corresponding
 * charges). We recommend that you handle any duplicates at the
 *
 * destination>
 *
 * If <a>PutRecordBatch</a> throws <code>ServiceUnavailableException</code>, back off and retry. If the exception persists,
 * it is possible that the throughput limits have been exceeded for the delivery
 *
 * stream>
 *
 * Data records sent to Kinesis Data Firehose are stored for 24 hours from the time they are added to a delivery stream as
 * it attempts to send the records to the destination. If the destination is unreachable for more than 24 hours, the data
 * is no longer
 *
 * available> <b>
 *
 * Don't concatenate two or more base64 strings to form the data fields of your records. Instead, concatenate the raw data,
 * then perform base64
 */
PutRecordBatchResponse * FirehoseClient::putRecordBatch(const PutRecordBatchRequest &request)
{
    return qobject_cast<PutRecordBatchResponse *>(send(request));
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * StartDeliveryStreamEncryptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables server-side encryption (SSE) for the delivery stream.
 *
 * </p
 *
 * This operation is asynchronous. It returns immediately. When you invoke it, Kinesis Data Firehose first sets the status
 * of the stream to <code>ENABLING</code>, and then to <code>ENABLED</code>. You can continue to read and write data to
 * your stream while its status is <code>ENABLING</code>, but the data is not encrypted. It can take up to 5 seconds after
 * the encryption status changes to <code>ENABLED</code> before all records written to the delivery stream are encrypted.
 * To find out whether a record or a batch of records was encrypted, check the response elements
 * <a>PutRecordOutput$Encrypted</a> and <a>PutRecordBatchOutput$Encrypted</a>,
 *
 * respectively>
 *
 * To check the encryption state of a delivery stream, use
 *
 * <a>DescribeDeliveryStream</a>>
 *
 * You can only enable SSE for a delivery stream that uses <code>DirectPut</code> as its source.
 *
 * </p
 *
 * The <code>StartDeliveryStreamEncryption</code> and <code>StopDeliveryStreamEncryption</code> operations have a combined
 * limit of 25 calls per delivery stream per 24 hours. For example, you reach the limit if you call
 * <code>StartDeliveryStreamEncryption</code> 13 times and <code>StopDeliveryStreamEncryption</code> 12 times for the same
 * delivery stream in a 24-hour
 */
StartDeliveryStreamEncryptionResponse * FirehoseClient::startDeliveryStreamEncryption(const StartDeliveryStreamEncryptionRequest &request)
{
    return qobject_cast<StartDeliveryStreamEncryptionResponse *>(send(request));
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * StopDeliveryStreamEncryptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables server-side encryption (SSE) for the delivery stream.
 *
 * </p
 *
 * This operation is asynchronous. It returns immediately. When you invoke it, Kinesis Data Firehose first sets the status
 * of the stream to <code>DISABLING</code>, and then to <code>DISABLED</code>. You can continue to read and write data to
 * your stream while its status is <code>DISABLING</code>. It can take up to 5 seconds after the encryption status changes
 * to <code>DISABLED</code> before all records written to the delivery stream are no longer subject to encryption. To find
 * out whether a record or a batch of records was encrypted, check the response elements <a>PutRecordOutput$Encrypted</a>
 * and <a>PutRecordBatchOutput$Encrypted</a>,
 *
 * respectively>
 *
 * To check the encryption state of a delivery stream, use <a>DescribeDeliveryStream</a>.
 *
 * </p
 *
 * The <code>StartDeliveryStreamEncryption</code> and <code>StopDeliveryStreamEncryption</code> operations have a combined
 * limit of 25 calls per delivery stream per 24 hours. For example, you reach the limit if you call
 * <code>StartDeliveryStreamEncryption</code> 13 times and <code>StopDeliveryStreamEncryption</code> 12 times for the same
 * delivery stream in a 24-hour
 */
StopDeliveryStreamEncryptionResponse * FirehoseClient::stopDeliveryStreamEncryption(const StopDeliveryStreamEncryptionRequest &request)
{
    return qobject_cast<StopDeliveryStreamEncryptionResponse *>(send(request));
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * TagDeliveryStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates tags for the specified delivery stream. A tag is a key-value pair that you can define and assign to AWS
 * resources. If you specify a tag that already exists, the tag value is replaced with the value that you specify in the
 * request. Tags are metadata. For example, you can add friendly names and descriptions or other types of information that
 * can help you distinguish the delivery stream. For more information about tags, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using Cost Allocation Tags</a>
 * in the <i>AWS Billing and Cost Management User Guide</i>.
 *
 * </p
 *
 * Each delivery stream can have up to 50 tags.
 *
 * </p
 *
 * This operation has a limit of five transactions per second per account.
 */
TagDeliveryStreamResponse * FirehoseClient::tagDeliveryStream(const TagDeliveryStreamRequest &request)
{
    return qobject_cast<TagDeliveryStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * UntagDeliveryStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from the specified delivery stream. Removed tags are deleted, and you can't recover them after this
 * operation successfully
 *
 * completes>
 *
 * If you specify a tag that doesn't exist, the operation ignores
 *
 * it>
 *
 * This operation has a limit of five transactions per second per account.
 */
UntagDeliveryStreamResponse * FirehoseClient::untagDeliveryStream(const UntagDeliveryStreamRequest &request)
{
    return qobject_cast<UntagDeliveryStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the FirehoseClient service, and returns a pointer to an
 * UpdateDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified destination of the specified delivery
 *
 * stream>
 *
 * Use this operation to change the destination type (for example, to replace the Amazon S3 destination with Amazon
 * Redshift) or change the parameters associated with a destination (for example, to change the bucket name of the Amazon
 * S3 destination). The update might not occur immediately. The target delivery stream remains active while the
 * configurations are updated, so data writes to the delivery stream can continue during this process. The updated
 * configurations are usually effective within a few
 *
 * minutes>
 *
 * Switching between Amazon ES and other services is not supported. For an Amazon ES destination, you can only update to
 * another Amazon ES
 *
 * destination>
 *
 * If the destination type is the same, Kinesis Data Firehose merges the configuration parameters specified with the
 * destination configuration that already exists on the delivery stream. If any of the parameters are not specified in the
 * call, the existing values are retained. For example, in the Amazon S3 destination, if <a>EncryptionConfiguration</a> is
 * not specified, then the existing <code>EncryptionConfiguration</code> is maintained on the
 *
 * destination>
 *
 * If the destination type is not the same, for example, changing the destination from Amazon S3 to Amazon Redshift,
 * Kinesis Data Firehose does not merge any parameters. In this case, all parameters must be
 *
 * specified>
 *
 * Kinesis Data Firehose uses <code>CurrentDeliveryStreamVersionId</code> to avoid race conditions and conflicting merges.
 * This is a required field, and the service updates the configuration only if the existing configuration has a version ID
 * that matches. After the update is applied successfully, the version ID is updated, and can be retrieved using
 * <a>DescribeDeliveryStream</a>. Use the new version ID to set <code>CurrentDeliveryStreamVersionId</code> in the next
 */
UpdateDestinationResponse * FirehoseClient::updateDestination(const UpdateDestinationRequest &request)
{
    return qobject_cast<UpdateDestinationResponse *>(send(request));
}

/*!
 * \class QtAws::Firehose::FirehoseClientPrivate
 * \brief The FirehoseClientPrivate class provides private implementation for FirehoseClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a FirehoseClientPrivate object with public implementation \a q.
 */
FirehoseClientPrivate::FirehoseClientPrivate(FirehoseClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Firehose
} // namespace QtAws
