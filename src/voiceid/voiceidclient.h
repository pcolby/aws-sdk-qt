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
