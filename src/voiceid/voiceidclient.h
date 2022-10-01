// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VOICEIDCLIENT_H
#define QTAWS_VOICEIDCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsvoiceidglobal.h"

class QNetworkReply;

namespace QtAws {
namespace VoiceId {

class VoiceIdClientPrivate;
class CreateDomainRequest;
class CreateDomainResponse;
class DeleteDomainRequest;
class DeleteDomainResponse;
class DeleteFraudsterRequest;
class DeleteFraudsterResponse;
class DeleteSpeakerRequest;
class DeleteSpeakerResponse;
class DescribeDomainRequest;
class DescribeDomainResponse;
class DescribeFraudsterRequest;
class DescribeFraudsterResponse;
class DescribeFraudsterRegistrationJobRequest;
class DescribeFraudsterRegistrationJobResponse;
class DescribeSpeakerRequest;
class DescribeSpeakerResponse;
class DescribeSpeakerEnrollmentJobRequest;
class DescribeSpeakerEnrollmentJobResponse;
class EvaluateSessionRequest;
class EvaluateSessionResponse;
class ListDomainsRequest;
class ListDomainsResponse;
class ListFraudsterRegistrationJobsRequest;
class ListFraudsterRegistrationJobsResponse;
class ListSpeakerEnrollmentJobsRequest;
class ListSpeakerEnrollmentJobsResponse;
class ListSpeakersRequest;
class ListSpeakersResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class OptOutSpeakerRequest;
class OptOutSpeakerResponse;
class StartFraudsterRegistrationJobRequest;
class StartFraudsterRegistrationJobResponse;
class StartSpeakerEnrollmentJobRequest;
class StartSpeakerEnrollmentJobResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDomainRequest;
class UpdateDomainResponse;

class QTAWSVOICEID_EXPORT VoiceIdClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    VoiceIdClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit VoiceIdClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateDomainResponse * createDomain(const CreateDomainRequest &request);
    DeleteDomainResponse * deleteDomain(const DeleteDomainRequest &request);
    DeleteFraudsterResponse * deleteFraudster(const DeleteFraudsterRequest &request);
    DeleteSpeakerResponse * deleteSpeaker(const DeleteSpeakerRequest &request);
    DescribeDomainResponse * describeDomain(const DescribeDomainRequest &request);
    DescribeFraudsterResponse * describeFraudster(const DescribeFraudsterRequest &request);
    DescribeFraudsterRegistrationJobResponse * describeFraudsterRegistrationJob(const DescribeFraudsterRegistrationJobRequest &request);
    DescribeSpeakerResponse * describeSpeaker(const DescribeSpeakerRequest &request);
    DescribeSpeakerEnrollmentJobResponse * describeSpeakerEnrollmentJob(const DescribeSpeakerEnrollmentJobRequest &request);
    EvaluateSessionResponse * evaluateSession(const EvaluateSessionRequest &request);
    ListDomainsResponse * listDomains(const ListDomainsRequest &request);
    ListFraudsterRegistrationJobsResponse * listFraudsterRegistrationJobs(const ListFraudsterRegistrationJobsRequest &request);
    ListSpeakerEnrollmentJobsResponse * listSpeakerEnrollmentJobs(const ListSpeakerEnrollmentJobsRequest &request);
    ListSpeakersResponse * listSpeakers(const ListSpeakersRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    OptOutSpeakerResponse * optOutSpeaker(const OptOutSpeakerRequest &request);
    StartFraudsterRegistrationJobResponse * startFraudsterRegistrationJob(const StartFraudsterRegistrationJobRequest &request);
    StartSpeakerEnrollmentJobResponse * startSpeakerEnrollmentJob(const StartSpeakerEnrollmentJobRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDomainResponse * updateDomain(const UpdateDomainRequest &request);

private:
    Q_DECLARE_PRIVATE(VoiceIdClient)
    Q_DISABLE_COPY(VoiceIdClient)

};

} // namespace VoiceId
} // namespace QtAws

#endif
