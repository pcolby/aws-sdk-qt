// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "qldbclient.h"
#include "qldbclient_p.h"

#include "core/awssignaturev4.h"
#include "canceljournalkinesisstreamrequest.h"
#include "canceljournalkinesisstreamresponse.h"
#include "createledgerrequest.h"
#include "createledgerresponse.h"
#include "deleteledgerrequest.h"
#include "deleteledgerresponse.h"
#include "describejournalkinesisstreamrequest.h"
#include "describejournalkinesisstreamresponse.h"
#include "describejournals3exportrequest.h"
#include "describejournals3exportresponse.h"
#include "describeledgerrequest.h"
#include "describeledgerresponse.h"
#include "exportjournaltos3request.h"
#include "exportjournaltos3response.h"
#include "getblockrequest.h"
#include "getblockresponse.h"
#include "getdigestrequest.h"
#include "getdigestresponse.h"
#include "getrevisionrequest.h"
#include "getrevisionresponse.h"
#include "listjournalkinesisstreamsforledgerrequest.h"
#include "listjournalkinesisstreamsforledgerresponse.h"
#include "listjournals3exportsrequest.h"
#include "listjournals3exportsresponse.h"
#include "listjournals3exportsforledgerrequest.h"
#include "listjournals3exportsforledgerresponse.h"
#include "listledgersrequest.h"
#include "listledgersresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "streamjournaltokinesisrequest.h"
#include "streamjournaltokinesisresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateledgerrequest.h"
#include "updateledgerresponse.h"
#include "updateledgerpermissionsmoderequest.h"
#include "updateledgerpermissionsmoderesponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Qldb
 * \brief Contains classess for accessing Amazon QLDB.
 *
 * \inmodule QtAwsQldb
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::QldbClient
 * \brief The QldbClient class provides access to the Amazon QLDB service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 */

/*!
 * \brief Constructs a QldbClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
QldbClient::QldbClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new QldbClientPrivate(this), parent)
{
    Q_D(QldbClient);
    d->apiVersion = QStringLiteral("2019-01-02");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("qldb");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon QLDB");
    d->serviceName = QStringLiteral("qldb");
}

/*!
 * \overload QldbClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
QldbClient::QldbClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new QldbClientPrivate(this), parent)
{
    Q_D(QldbClient);
    d->apiVersion = QStringLiteral("2019-01-02");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("qldb");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon QLDB");
    d->serviceName = QStringLiteral("qldb");
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * CancelJournalKinesisStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Ends a given Amazon QLDB journal stream. Before a stream can be canceled, its current status must be
 *
 * <code>ACTIVE</code>>
 *
 * You can't restart a stream after you cancel it. Canceled QLDB stream resources are subject to a 7-day retention period,
 * so they are automatically deleted after this limit
 */
CancelJournalKinesisStreamResponse * QldbClient::cancelJournalKinesisStream(const CancelJournalKinesisStreamRequest &request)
{
    return qobject_cast<CancelJournalKinesisStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * CreateLedgerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new ledger in your Amazon Web Services account in the current
 */
CreateLedgerResponse * QldbClient::createLedger(const CreateLedgerRequest &request)
{
    return qobject_cast<CreateLedgerResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * DeleteLedgerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a ledger and all of its contents. This action is
 *
 * irreversible>
 *
 * If deletion protection is enabled, you must first disable it before you can delete the ledger. You can disable it by
 * calling the <code>UpdateLedger</code> operation to set the flag to
 */
DeleteLedgerResponse * QldbClient::deleteLedger(const DeleteLedgerRequest &request)
{
    return qobject_cast<DeleteLedgerResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * DescribeJournalKinesisStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns detailed information about a given Amazon QLDB journal stream. The output includes the Amazon Resource Name
 * (ARN), stream name, current status, creation time, and the parameters of the original stream creation
 *
 * request>
 *
 * This action does not return any expired journal streams. For more information, see <a
 * href="https://docs.aws.amazon.com/qldb/latest/developerguide/streams.create.html#streams.create.states.expiration">Expiration
 * for terminal streams</a> in the <i>Amazon QLDB Developer
 */
DescribeJournalKinesisStreamResponse * QldbClient::describeJournalKinesisStream(const DescribeJournalKinesisStreamRequest &request)
{
    return qobject_cast<DescribeJournalKinesisStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * DescribeJournalS3ExportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a journal export job, including the ledger name, export ID, creation time, current status, and
 * the parameters of the original export creation
 *
 * request>
 *
 * This action does not return any expired export jobs. For more information, see <a
 * href="https://docs.aws.amazon.com/qldb/latest/developerguide/export-journal.request.html#export-journal.request.expiration">Export
 * job expiration</a> in the <i>Amazon QLDB Developer
 *
 * Guide</i>>
 *
 * If the export job with the given <code>ExportId</code> doesn't exist, then throws
 *
 * <code>ResourceNotFoundException</code>>
 *
 * If the ledger with the given <code>Name</code> doesn't exist, then throws
 */
DescribeJournalS3ExportResponse * QldbClient::describeJournalS3Export(const DescribeJournalS3ExportRequest &request)
{
    return qobject_cast<DescribeJournalS3ExportResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * DescribeLedgerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a ledger, including its state, permissions mode, encryption at rest settings, and when it was
 */
DescribeLedgerResponse * QldbClient::describeLedger(const DescribeLedgerRequest &request)
{
    return qobject_cast<DescribeLedgerResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * ExportJournalToS3Response object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports journal contents within a date and time range from a ledger into a specified Amazon Simple Storage Service
 * (Amazon S3) bucket. A journal export job can write the data objects in either the text or binary representation of
 * Amazon Ion format, or in <i>JSON Lines</i> text
 *
 * format>
 *
 * In JSON Lines format, each journal block in the exported data object is a valid JSON object that is delimited by a
 * newline. You can use this format to easily integrate JSON exports with analytics tools such as Glue and Amazon Athena
 * because these services can parse newline-delimited JSON automatically. For more information about the format, see <a
 * href="https://jsonlines.org/">JSON
 *
 * Lines</a>>
 *
 * If the ledger with the given <code>Name</code> doesn't exist, then throws
 *
 * <code>ResourceNotFoundException</code>>
 *
 * If the ledger with the given <code>Name</code> is in <code>CREATING</code> status, then throws
 *
 * <code>ResourcePreconditionNotMetException</code>>
 *
 * You can initiate up to two concurrent journal export requests for each ledger. Beyond this limit, journal export
 * requests throw
 */
ExportJournalToS3Response * QldbClient::exportJournalToS3(const ExportJournalToS3Request &request)
{
    return qobject_cast<ExportJournalToS3Response *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * GetBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a block object at a specified address in a journal. Also returns a proof of the specified block for verification
 * if <code>DigestTipAddress</code> is
 *
 * provided>
 *
 * For information about the data contents in a block, see <a
 * href="https://docs.aws.amazon.com/qldb/latest/developerguide/journal-contents.html">Journal contents</a> in the
 * <i>Amazon QLDB Developer
 *
 * Guide</i>>
 *
 * If the specified ledger doesn't exist or is in <code>DELETING</code> status, then throws
 *
 * <code>ResourceNotFoundException</code>>
 *
 * If the specified ledger is in <code>CREATING</code> status, then throws
 *
 * <code>ResourcePreconditionNotMetException</code>>
 *
 * If no block exists with the specified address, then throws
 */
GetBlockResponse * QldbClient::getBlock(const GetBlockRequest &request)
{
    return qobject_cast<GetBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * GetDigestResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the digest of a ledger at the latest committed block in the journal. The response includes a 256-bit hash value
 * and a block
 */
GetDigestResponse * QldbClient::getDigest(const GetDigestRequest &request)
{
    return qobject_cast<GetDigestResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * GetRevisionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a revision data object for a specified document ID and block address. Also returns a proof of the specified
 * revision for verification if <code>DigestTipAddress</code> is
 */
GetRevisionResponse * QldbClient::getRevision(const GetRevisionRequest &request)
{
    return qobject_cast<GetRevisionResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * ListJournalKinesisStreamsForLedgerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of all Amazon QLDB journal stream descriptors for a given ledger. The output of each stream descriptor
 * includes the same details that are returned by
 *
 * <code>DescribeJournalKinesisStream</code>>
 *
 * This action does not return any expired journal streams. For more information, see <a
 * href="https://docs.aws.amazon.com/qldb/latest/developerguide/streams.create.html#streams.create.states.expiration">Expiration
 * for terminal streams</a> in the <i>Amazon QLDB Developer
 *
 * Guide</i>>
 *
 * This action returns a maximum of <code>MaxResults</code> items. It is paginated so that you can retrieve all the items
 * by calling <code>ListJournalKinesisStreamsForLedger</code> multiple
 */
ListJournalKinesisStreamsForLedgerResponse * QldbClient::listJournalKinesisStreamsForLedger(const ListJournalKinesisStreamsForLedgerRequest &request)
{
    return qobject_cast<ListJournalKinesisStreamsForLedgerResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * ListJournalS3ExportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of journal export job descriptions for all ledgers that are associated with the current Amazon Web
 * Services account and
 *
 * Region>
 *
 * This action returns a maximum of <code>MaxResults</code> items, and is paginated so that you can retrieve all the items
 * by calling <code>ListJournalS3Exports</code> multiple
 *
 * times>
 *
 * This action does not return any expired export jobs. For more information, see <a
 * href="https://docs.aws.amazon.com/qldb/latest/developerguide/export-journal.request.html#export-journal.request.expiration">Export
 * job expiration</a> in the <i>Amazon QLDB Developer
 */
ListJournalS3ExportsResponse * QldbClient::listJournalS3Exports(const ListJournalS3ExportsRequest &request)
{
    return qobject_cast<ListJournalS3ExportsResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * ListJournalS3ExportsForLedgerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of journal export job descriptions for a specified
 *
 * ledger>
 *
 * This action returns a maximum of <code>MaxResults</code> items, and is paginated so that you can retrieve all the items
 * by calling <code>ListJournalS3ExportsForLedger</code> multiple
 *
 * times>
 *
 * This action does not return any expired export jobs. For more information, see <a
 * href="https://docs.aws.amazon.com/qldb/latest/developerguide/export-journal.request.html#export-journal.request.expiration">Export
 * job expiration</a> in the <i>Amazon QLDB Developer
 */
ListJournalS3ExportsForLedgerResponse * QldbClient::listJournalS3ExportsForLedger(const ListJournalS3ExportsForLedgerRequest &request)
{
    return qobject_cast<ListJournalS3ExportsForLedgerResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * ListLedgersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of ledger summaries that are associated with the current Amazon Web Services account and
 *
 * Region>
 *
 * This action returns a maximum of 100 items and is paginated so that you can retrieve all the items by calling
 * <code>ListLedgers</code> multiple
 */
ListLedgersResponse * QldbClient::listLedgers(const ListLedgersRequest &request)
{
    return qobject_cast<ListLedgersResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all tags for a specified Amazon QLDB
 */
ListTagsForResourceResponse * QldbClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * StreamJournalToKinesisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a journal stream for a given Amazon QLDB ledger. The stream captures every document revision that is committed
 * to the ledger's journal and delivers the data to a specified Amazon Kinesis Data Streams
 */
StreamJournalToKinesisResponse * QldbClient::streamJournalToKinesis(const StreamJournalToKinesisRequest &request)
{
    return qobject_cast<StreamJournalToKinesisResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to a specified Amazon QLDB
 *
 * resource>
 *
 * A resource can have up to 50 tags. If you try to create more than 50 tags for a resource, your request fails and returns
 * an
 */
TagResourceResponse * QldbClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from a specified Amazon QLDB resource. You can specify up to 50 tag keys to
 */
UntagResourceResponse * QldbClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * UpdateLedgerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates properties on a
 */
UpdateLedgerResponse * QldbClient::updateLedger(const UpdateLedgerRequest &request)
{
    return qobject_cast<UpdateLedgerResponse *>(send(request));
}

/*!
 * Sends \a request to the QldbClient service, and returns a pointer to an
 * UpdateLedgerPermissionsModeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the permissions mode of a
 *
 * ledger> <b>
 *
 * Before you switch to the <code>STANDARD</code> permissions mode, you must first create all required IAM policies and
 * table tags to avoid disruption to your users. To learn more, see <a
 * href="https://docs.aws.amazon.com/qldb/latest/developerguide/ledger-management.basics.html#ledger-mgmt.basics.update-permissions.migrating">Migrating
 * to the standard permissions mode</a> in the <i>Amazon QLDB Developer
 */
UpdateLedgerPermissionsModeResponse * QldbClient::updateLedgerPermissionsMode(const UpdateLedgerPermissionsModeRequest &request)
{
    return qobject_cast<UpdateLedgerPermissionsModeResponse *>(send(request));
}

/*!
 * \class QtAws::Qldb::QldbClientPrivate
 * \brief The QldbClientPrivate class provides private implementation for QldbClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a QldbClientPrivate object with public implementation \a q.
 */
QldbClientPrivate::QldbClientPrivate(QldbClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Qldb
} // namespace QtAws
