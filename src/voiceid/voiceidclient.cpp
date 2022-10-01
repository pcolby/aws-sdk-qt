// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "voiceidclient.h"
#include "voiceidclient_p.h"

#include "core/awssignaturev4.h"
#include "createdomainrequest.h"
#include "createdomainresponse.h"
#include "deletedomainrequest.h"
#include "deletedomainresponse.h"
#include "deletefraudsterrequest.h"
#include "deletefraudsterresponse.h"
#include "deletespeakerrequest.h"
#include "deletespeakerresponse.h"
#include "describedomainrequest.h"
#include "describedomainresponse.h"
#include "describefraudsterrequest.h"
#include "describefraudsterresponse.h"
#include "describefraudsterregistrationjobrequest.h"
#include "describefraudsterregistrationjobresponse.h"
#include "describespeakerrequest.h"
#include "describespeakerresponse.h"
#include "describespeakerenrollmentjobrequest.h"
#include "describespeakerenrollmentjobresponse.h"
#include "evaluatesessionrequest.h"
#include "evaluatesessionresponse.h"
#include "listdomainsrequest.h"
#include "listdomainsresponse.h"
#include "listfraudsterregistrationjobsrequest.h"
#include "listfraudsterregistrationjobsresponse.h"
#include "listspeakerenrollmentjobsrequest.h"
#include "listspeakerenrollmentjobsresponse.h"
#include "listspeakersrequest.h"
#include "listspeakersresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "optoutspeakerrequest.h"
#include "optoutspeakerresponse.h"
#include "startfraudsterregistrationjobrequest.h"
#include "startfraudsterregistrationjobresponse.h"
#include "startspeakerenrollmentjobrequest.h"
#include "startspeakerenrollmentjobresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedomainrequest.h"
#include "updatedomainresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::VoiceId
 * \brief Contains classess for accessing Amazon Voice ID.
 *
 * \inmodule QtAwsVoiceId
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::VoiceIdClient
 * \brief The VoiceIdClient class provides access to the Amazon Voice ID service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 */

/*!
 * \brief Constructs a VoiceIdClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
VoiceIdClient::VoiceIdClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new VoiceIdClientPrivate(this), parent)
{
    Q_D(VoiceIdClient);
    d->apiVersion = QStringLiteral("2021-09-27");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("voiceid");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Voice ID");
    d->serviceName = QStringLiteral("voiceid");
}

/*!
 * \overload VoiceIdClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
VoiceIdClient::VoiceIdClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new VoiceIdClientPrivate(this), parent)
{
    Q_D(VoiceIdClient);
    d->apiVersion = QStringLiteral("2021-09-27");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("voiceid");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Voice ID");
    d->serviceName = QStringLiteral("voiceid");
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * CreateDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a domain that contains all Amazon Connect Voice ID data, such as speakers, fraudsters, customer audio, and
 * voiceprints.
 */
CreateDomainResponse * VoiceIdClient::createDomain(const CreateDomainRequest &request)
{
    return qobject_cast<CreateDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * DeleteDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified domain from Voice
 */
DeleteDomainResponse * VoiceIdClient::deleteDomain(const DeleteDomainRequest &request)
{
    return qobject_cast<DeleteDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * DeleteFraudsterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified fraudster from Voice
 */
DeleteFraudsterResponse * VoiceIdClient::deleteFraudster(const DeleteFraudsterRequest &request)
{
    return qobject_cast<DeleteFraudsterResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * DeleteSpeakerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified speaker from Voice
 */
DeleteSpeakerResponse * VoiceIdClient::deleteSpeaker(const DeleteSpeakerRequest &request)
{
    return qobject_cast<DeleteSpeakerResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * DescribeDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified
 */
DescribeDomainResponse * VoiceIdClient::describeDomain(const DescribeDomainRequest &request)
{
    return qobject_cast<DescribeDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * DescribeFraudsterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified
 */
DescribeFraudsterResponse * VoiceIdClient::describeFraudster(const DescribeFraudsterRequest &request)
{
    return qobject_cast<DescribeFraudsterResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * DescribeFraudsterRegistrationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified fraudster registration
 */
DescribeFraudsterRegistrationJobResponse * VoiceIdClient::describeFraudsterRegistrationJob(const DescribeFraudsterRegistrationJobRequest &request)
{
    return qobject_cast<DescribeFraudsterRegistrationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * DescribeSpeakerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified
 */
DescribeSpeakerResponse * VoiceIdClient::describeSpeaker(const DescribeSpeakerRequest &request)
{
    return qobject_cast<DescribeSpeakerResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * DescribeSpeakerEnrollmentJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified speaker enrollment
 */
DescribeSpeakerEnrollmentJobResponse * VoiceIdClient::describeSpeakerEnrollmentJob(const DescribeSpeakerEnrollmentJobRequest &request)
{
    return qobject_cast<DescribeSpeakerEnrollmentJobResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * EvaluateSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Evaluates a specified session based on audio data accumulated during a streaming Amazon Connect Voice ID
 */
EvaluateSessionResponse * VoiceIdClient::evaluateSession(const EvaluateSessionRequest &request)
{
    return qobject_cast<EvaluateSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * ListDomainsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the domains in the Amazon Web Services account.
 */
ListDomainsResponse * VoiceIdClient::listDomains(const ListDomainsRequest &request)
{
    return qobject_cast<ListDomainsResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * ListFraudsterRegistrationJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the fraudster registration jobs in the domain with the given <code>JobStatus</code>. If <code>JobStatus</code>
 * is not provided, this lists all fraudster registration jobs in the given domain.
 */
ListFraudsterRegistrationJobsResponse * VoiceIdClient::listFraudsterRegistrationJobs(const ListFraudsterRegistrationJobsRequest &request)
{
    return qobject_cast<ListFraudsterRegistrationJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * ListSpeakerEnrollmentJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the speaker enrollment jobs in the domain with the specified <code>JobStatus</code>. If <code>JobStatus</code>
 * is not provided, this lists all jobs with all possible speaker enrollment job
 */
ListSpeakerEnrollmentJobsResponse * VoiceIdClient::listSpeakerEnrollmentJobs(const ListSpeakerEnrollmentJobsRequest &request)
{
    return qobject_cast<ListSpeakerEnrollmentJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * ListSpeakersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all speakers in a specified
 */
ListSpeakersResponse * VoiceIdClient::listSpeakers(const ListSpeakersRequest &request)
{
    return qobject_cast<ListSpeakersResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags associated with a specified Voice ID
 */
ListTagsForResourceResponse * VoiceIdClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * OptOutSpeakerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Opts out a speaker from Voice ID. A speaker can be opted out regardless of whether or not they already exist in Voice
 * ID. If they don't yet exist, a new speaker is created in an opted out state. If they already exist, their existing
 * status is overridden and they are opted out. Enrollment and evaluation authentication requests are rejected for opted
 * out speakers, and opted out speakers have no voice embeddings stored in Voice
 */
OptOutSpeakerResponse * VoiceIdClient::optOutSpeaker(const OptOutSpeakerRequest &request)
{
    return qobject_cast<OptOutSpeakerResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * StartFraudsterRegistrationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a new batch fraudster registration job using provided
 */
StartFraudsterRegistrationJobResponse * VoiceIdClient::startFraudsterRegistrationJob(const StartFraudsterRegistrationJobRequest &request)
{
    return qobject_cast<StartFraudsterRegistrationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * StartSpeakerEnrollmentJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a new batch speaker enrollment job using specified
 */
StartSpeakerEnrollmentJobResponse * VoiceIdClient::startSpeakerEnrollmentJob(const StartSpeakerEnrollmentJobRequest &request)
{
    return qobject_cast<StartSpeakerEnrollmentJobResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tags a Voice ID resource with the provided list of
 */
TagResourceResponse * VoiceIdClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes specified tags from a specified Amazon Connect Voice ID
 */
UntagResourceResponse * VoiceIdClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the VoiceIdClient service, and returns a pointer to an
 * UpdateDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified domain. This API has clobber behavior, and clears and replaces all attributes. If an optional
 * field, such as 'Description' is not provided, it is removed from the
 */
UpdateDomainResponse * VoiceIdClient::updateDomain(const UpdateDomainRequest &request)
{
    return qobject_cast<UpdateDomainResponse *>(send(request));
}

/*!
 * \class QtAws::VoiceId::VoiceIdClientPrivate
 * \brief The VoiceIdClientPrivate class provides private implementation for VoiceIdClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a VoiceIdClientPrivate object with public implementation \a q.
 */
VoiceIdClientPrivate::VoiceIdClientPrivate(VoiceIdClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace VoiceId
} // namespace QtAws
