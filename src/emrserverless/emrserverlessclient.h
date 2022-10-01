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
