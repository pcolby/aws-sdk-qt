// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FISCLIENT_H
#define QTAWS_FISCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsfisglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Fis {

class FisClientPrivate;
class CreateExperimentTemplateRequest;
class CreateExperimentTemplateResponse;
class DeleteExperimentTemplateRequest;
class DeleteExperimentTemplateResponse;
class GetActionRequest;
class GetActionResponse;
class GetExperimentRequest;
class GetExperimentResponse;
class GetExperimentTemplateRequest;
class GetExperimentTemplateResponse;
class GetTargetResourceTypeRequest;
class GetTargetResourceTypeResponse;
class ListActionsRequest;
class ListActionsResponse;
class ListExperimentTemplatesRequest;
class ListExperimentTemplatesResponse;
class ListExperimentsRequest;
class ListExperimentsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTargetResourceTypesRequest;
class ListTargetResourceTypesResponse;
class StartExperimentRequest;
class StartExperimentResponse;
class StopExperimentRequest;
class StopExperimentResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateExperimentTemplateRequest;
class UpdateExperimentTemplateResponse;

class QTAWSFIS_EXPORT FisClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    FisClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit FisClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateExperimentTemplateResponse * createExperimentTemplate(const CreateExperimentTemplateRequest &request);
    DeleteExperimentTemplateResponse * deleteExperimentTemplate(const DeleteExperimentTemplateRequest &request);
    GetActionResponse * getAction(const GetActionRequest &request);
    GetExperimentResponse * getExperiment(const GetExperimentRequest &request);
    GetExperimentTemplateResponse * getExperimentTemplate(const GetExperimentTemplateRequest &request);
    GetTargetResourceTypeResponse * getTargetResourceType(const GetTargetResourceTypeRequest &request);
    ListActionsResponse * listActions(const ListActionsRequest &request);
    ListExperimentTemplatesResponse * listExperimentTemplates(const ListExperimentTemplatesRequest &request);
    ListExperimentsResponse * listExperiments(const ListExperimentsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTargetResourceTypesResponse * listTargetResourceTypes(const ListTargetResourceTypesRequest &request);
    StartExperimentResponse * startExperiment(const StartExperimentRequest &request);
    StopExperimentResponse * stopExperiment(const StopExperimentRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateExperimentTemplateResponse * updateExperimentTemplate(const UpdateExperimentTemplateRequest &request);

private:
    Q_DECLARE_PRIVATE(FisClient)
    Q_DISABLE_COPY(FisClient)

};

} // namespace Fis
} // namespace QtAws

#endif
