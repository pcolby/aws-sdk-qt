/*
    Copyright 2013-2016 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CODEDEPLOYCLIENT_H
#define QTAWS_CODEDEPLOYCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class CodeDeployClientPrivate;

class QTAWS_EXPORT CodeDeployClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CodeDeployClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CodeDeployClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CodeDeployAddTagsToOnPremisesInstancesResponse * addTagsToOnPremisesInstances(const CodeDeployAddTagsToOnPremisesInstancesRequest &request);
    CodeDeployBatchGetApplicationRevisionsResponse * batchGetApplicationRevisions(const CodeDeployBatchGetApplicationRevisionsRequest &request);
    CodeDeployBatchGetApplicationsResponse * batchGetApplications(const CodeDeployBatchGetApplicationsRequest &request);
    CodeDeployBatchGetDeploymentGroupsResponse * batchGetDeploymentGroups(const CodeDeployBatchGetDeploymentGroupsRequest &request);
    CodeDeployBatchGetDeploymentInstancesResponse * batchGetDeploymentInstances(const CodeDeployBatchGetDeploymentInstancesRequest &request);
    CodeDeployBatchGetDeploymentsResponse * batchGetDeployments(const CodeDeployBatchGetDeploymentsRequest &request);
    CodeDeployBatchGetOnPremisesInstancesResponse * batchGetOnPremisesInstances(const CodeDeployBatchGetOnPremisesInstancesRequest &request);
    CodeDeployCreateApplicationResponse * createApplication(const CodeDeployCreateApplicationRequest &request);
    CodeDeployCreateDeploymentResponse * createDeployment(const CodeDeployCreateDeploymentRequest &request);
    CodeDeployCreateDeploymentConfigResponse * createDeploymentConfig(const CodeDeployCreateDeploymentConfigRequest &request);
    CodeDeployCreateDeploymentGroupResponse * createDeploymentGroup(const CodeDeployCreateDeploymentGroupRequest &request);
    CodeDeployDeleteApplicationResponse * deleteApplication(const CodeDeployDeleteApplicationRequest &request);
    CodeDeployDeleteDeploymentConfigResponse * deleteDeploymentConfig(const CodeDeployDeleteDeploymentConfigRequest &request);
    CodeDeployDeleteDeploymentGroupResponse * deleteDeploymentGroup(const CodeDeployDeleteDeploymentGroupRequest &request);
    CodeDeployDeregisterOnPremisesInstanceResponse * deregisterOnPremisesInstance(const CodeDeployDeregisterOnPremisesInstanceRequest &request);
    CodeDeployGetApplicationResponse * getApplication(const CodeDeployGetApplicationRequest &request);
    CodeDeployGetApplicationRevisionResponse * getApplicationRevision(const CodeDeployGetApplicationRevisionRequest &request);
    CodeDeployGetDeploymentResponse * getDeployment(const CodeDeployGetDeploymentRequest &request);
    CodeDeployGetDeploymentConfigResponse * getDeploymentConfig(const CodeDeployGetDeploymentConfigRequest &request);
    CodeDeployGetDeploymentGroupResponse * getDeploymentGroup(const CodeDeployGetDeploymentGroupRequest &request);
    CodeDeployGetDeploymentInstanceResponse * getDeploymentInstance(const CodeDeployGetDeploymentInstanceRequest &request);
    CodeDeployGetOnPremisesInstanceResponse * getOnPremisesInstance(const CodeDeployGetOnPremisesInstanceRequest &request);
    CodeDeployListApplicationRevisionsResponse * listApplicationRevisions(const CodeDeployListApplicationRevisionsRequest &request);
    CodeDeployListApplicationsResponse * listApplications(const CodeDeployListApplicationsRequest &request);
    CodeDeployListDeploymentConfigsResponse * listDeploymentConfigs(const CodeDeployListDeploymentConfigsRequest &request);
    CodeDeployListDeploymentGroupsResponse * listDeploymentGroups(const CodeDeployListDeploymentGroupsRequest &request);
    CodeDeployListDeploymentInstancesResponse * listDeploymentInstances(const CodeDeployListDeploymentInstancesRequest &request);
    CodeDeployListDeploymentsResponse * listDeployments(const CodeDeployListDeploymentsRequest &request);
    CodeDeployListOnPremisesInstancesResponse * listOnPremisesInstances(const CodeDeployListOnPremisesInstancesRequest &request);
    CodeDeployRegisterApplicationRevisionResponse * registerApplicationRevision(const CodeDeployRegisterApplicationRevisionRequest &request);
    CodeDeployRegisterOnPremisesInstanceResponse * registerOnPremisesInstance(const CodeDeployRegisterOnPremisesInstanceRequest &request);
    CodeDeployRemoveTagsFromOnPremisesInstancesResponse * removeTagsFromOnPremisesInstances(const CodeDeployRemoveTagsFromOnPremisesInstancesRequest &request);
    CodeDeployStopDeploymentResponse * stopDeployment(const CodeDeployStopDeploymentRequest &request);
    CodeDeployUpdateApplicationResponse * updateApplication(const CodeDeployUpdateApplicationRequest &request);
    CodeDeployUpdateDeploymentGroupResponse * updateDeploymentGroup(const CodeDeployUpdateDeploymentGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(CodeDeployClient)
    Q_DISABLE_COPY(CodeDeployClient)

};

QTAWS_END_NAMESPACE

#endif
