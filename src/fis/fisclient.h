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

#ifndef QTAWS_FISCLIENT_H
#define QTAWS_FISCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsfisglobal.h"

class QNetworkReply;

namespace QtAws {
namespace FIS {

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
class ListActionsRequest;
class ListActionsResponse;
class ListExperimentTemplatesRequest;
class ListExperimentTemplatesResponse;
class ListExperimentsRequest;
class ListExperimentsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
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
    ListActionsResponse * listActions(const ListActionsRequest &request);
    ListExperimentTemplatesResponse * listExperimentTemplates(const ListExperimentTemplatesRequest &request);
    ListExperimentsResponse * listExperiments(const ListExperimentsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartExperimentResponse * startExperiment(const StartExperimentRequest &request);
    StopExperimentResponse * stopExperiment(const StopExperimentRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateExperimentTemplateResponse * updateExperimentTemplate(const UpdateExperimentTemplateRequest &request);

private:
    Q_DECLARE_PRIVATE(FisClient)
    Q_DISABLE_COPY(FisClient)

};

} // namespace FIS
} // namespace QtAws

#endif
