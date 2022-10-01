// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EMRSERVERLESSCLIENT_H
#define QTAWS_EMRSERVERLESSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsemrserverlessglobal.h"

class QNetworkReply;

namespace QtAws {
namespace EmrServerless {

class EmrServerlessClientPrivate;
class CancelJobRunRequest;
class CancelJobRunResponse;
class CreateApplicationRequest;
class CreateApplicationResponse;
class DeleteApplicationRequest;
class DeleteApplicationResponse;
class GetApplicationRequest;
class GetApplicationResponse;
class GetJobRunRequest;
class GetJobRunResponse;
class ListApplicationsRequest;
class ListApplicationsResponse;
class ListJobRunsRequest;
class ListJobRunsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StartApplicationRequest;
class StartApplicationResponse;
class StartJobRunRequest;
class StartJobRunResponse;
class StopApplicationRequest;
class StopApplicationResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateApplicationRequest;
class UpdateApplicationResponse;

class QTAWSEMRSERVERLESS_EXPORT EmrServerlessClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    EmrServerlessClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit EmrServerlessClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelJobRunResponse * cancelJobRun(const CancelJobRunRequest &request);
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    GetApplicationResponse * getApplication(const GetApplicationRequest &request);
    GetJobRunResponse * getJobRun(const GetJobRunRequest &request);
    ListApplicationsResponse * listApplications(const ListApplicationsRequest &request);
    ListJobRunsResponse * listJobRuns(const ListJobRunsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartApplicationResponse * startApplication(const StartApplicationRequest &request);
    StartJobRunResponse * startJobRun(const StartJobRunRequest &request);
    StopApplicationResponse * stopApplication(const StopApplicationRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);

private:
    Q_DECLARE_PRIVATE(EmrServerlessClient)
    Q_DISABLE_COPY(EmrServerlessClient)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
