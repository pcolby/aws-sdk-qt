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

#include "sagemakerclient.h"
#include "sagemakerclient_p.h"

#include "core/awssignaturev4.h"
#include "addassociationrequest.h"
#include "addassociationresponse.h"
#include "addtagsrequest.h"
#include "addtagsresponse.h"
#include "associatetrialcomponentrequest.h"
#include "associatetrialcomponentresponse.h"
#include "createactionrequest.h"
#include "createactionresponse.h"
#include "createalgorithmrequest.h"
#include "createalgorithmresponse.h"
#include "createapprequest.h"
#include "createappresponse.h"
#include "createappimageconfigrequest.h"
#include "createappimageconfigresponse.h"
#include "createartifactrequest.h"
#include "createartifactresponse.h"
#include "createautomljobrequest.h"
#include "createautomljobresponse.h"
#include "createcoderepositoryrequest.h"
#include "createcoderepositoryresponse.h"
#include "createcompilationjobrequest.h"
#include "createcompilationjobresponse.h"
#include "createcontextrequest.h"
#include "createcontextresponse.h"
#include "createdataqualityjobdefinitionrequest.h"
#include "createdataqualityjobdefinitionresponse.h"
#include "createdevicefleetrequest.h"
#include "createdevicefleetresponse.h"
#include "createdomainrequest.h"
#include "createdomainresponse.h"
#include "createedgepackagingjobrequest.h"
#include "createedgepackagingjobresponse.h"
#include "createendpointrequest.h"
#include "createendpointresponse.h"
#include "createendpointconfigrequest.h"
#include "createendpointconfigresponse.h"
#include "createexperimentrequest.h"
#include "createexperimentresponse.h"
#include "createfeaturegrouprequest.h"
#include "createfeaturegroupresponse.h"
#include "createflowdefinitionrequest.h"
#include "createflowdefinitionresponse.h"
#include "createhumantaskuirequest.h"
#include "createhumantaskuiresponse.h"
#include "createhyperparametertuningjobrequest.h"
#include "createhyperparametertuningjobresponse.h"
#include "createimagerequest.h"
#include "createimageresponse.h"
#include "createimageversionrequest.h"
#include "createimageversionresponse.h"
#include "createlabelingjobrequest.h"
#include "createlabelingjobresponse.h"
#include "createmodelrequest.h"
#include "createmodelresponse.h"
#include "createmodelbiasjobdefinitionrequest.h"
#include "createmodelbiasjobdefinitionresponse.h"
#include "createmodelexplainabilityjobdefinitionrequest.h"
#include "createmodelexplainabilityjobdefinitionresponse.h"
#include "createmodelpackagerequest.h"
#include "createmodelpackageresponse.h"
#include "createmodelpackagegrouprequest.h"
#include "createmodelpackagegroupresponse.h"
#include "createmodelqualityjobdefinitionrequest.h"
#include "createmodelqualityjobdefinitionresponse.h"
#include "createmonitoringschedulerequest.h"
#include "createmonitoringscheduleresponse.h"
#include "createnotebookinstancerequest.h"
#include "createnotebookinstanceresponse.h"
#include "createnotebookinstancelifecycleconfigrequest.h"
#include "createnotebookinstancelifecycleconfigresponse.h"
#include "createpipelinerequest.h"
#include "createpipelineresponse.h"
#include "createpresigneddomainurlrequest.h"
#include "createpresigneddomainurlresponse.h"
#include "createpresignednotebookinstanceurlrequest.h"
#include "createpresignednotebookinstanceurlresponse.h"
#include "createprocessingjobrequest.h"
#include "createprocessingjobresponse.h"
#include "createprojectrequest.h"
#include "createprojectresponse.h"
#include "createtrainingjobrequest.h"
#include "createtrainingjobresponse.h"
#include "createtransformjobrequest.h"
#include "createtransformjobresponse.h"
#include "createtrialrequest.h"
#include "createtrialresponse.h"
#include "createtrialcomponentrequest.h"
#include "createtrialcomponentresponse.h"
#include "createuserprofilerequest.h"
#include "createuserprofileresponse.h"
#include "createworkforcerequest.h"
#include "createworkforceresponse.h"
#include "createworkteamrequest.h"
#include "createworkteamresponse.h"
#include "deleteactionrequest.h"
#include "deleteactionresponse.h"
#include "deletealgorithmrequest.h"
#include "deletealgorithmresponse.h"
#include "deleteapprequest.h"
#include "deleteappresponse.h"
#include "deleteappimageconfigrequest.h"
#include "deleteappimageconfigresponse.h"
#include "deleteartifactrequest.h"
#include "deleteartifactresponse.h"
#include "deleteassociationrequest.h"
#include "deleteassociationresponse.h"
#include "deletecoderepositoryrequest.h"
#include "deletecoderepositoryresponse.h"
#include "deletecontextrequest.h"
#include "deletecontextresponse.h"
#include "deletedataqualityjobdefinitionrequest.h"
#include "deletedataqualityjobdefinitionresponse.h"
#include "deletedevicefleetrequest.h"
#include "deletedevicefleetresponse.h"
#include "deletedomainrequest.h"
#include "deletedomainresponse.h"
#include "deleteendpointrequest.h"
#include "deleteendpointresponse.h"
#include "deleteendpointconfigrequest.h"
#include "deleteendpointconfigresponse.h"
#include "deleteexperimentrequest.h"
#include "deleteexperimentresponse.h"
#include "deletefeaturegrouprequest.h"
#include "deletefeaturegroupresponse.h"
#include "deleteflowdefinitionrequest.h"
#include "deleteflowdefinitionresponse.h"
#include "deletehumantaskuirequest.h"
#include "deletehumantaskuiresponse.h"
#include "deleteimagerequest.h"
#include "deleteimageresponse.h"
#include "deleteimageversionrequest.h"
#include "deleteimageversionresponse.h"
#include "deletemodelrequest.h"
#include "deletemodelresponse.h"
#include "deletemodelbiasjobdefinitionrequest.h"
#include "deletemodelbiasjobdefinitionresponse.h"
#include "deletemodelexplainabilityjobdefinitionrequest.h"
#include "deletemodelexplainabilityjobdefinitionresponse.h"
#include "deletemodelpackagerequest.h"
#include "deletemodelpackageresponse.h"
#include "deletemodelpackagegrouprequest.h"
#include "deletemodelpackagegroupresponse.h"
#include "deletemodelpackagegrouppolicyrequest.h"
#include "deletemodelpackagegrouppolicyresponse.h"
#include "deletemodelqualityjobdefinitionrequest.h"
#include "deletemodelqualityjobdefinitionresponse.h"
#include "deletemonitoringschedulerequest.h"
#include "deletemonitoringscheduleresponse.h"
#include "deletenotebookinstancerequest.h"
#include "deletenotebookinstanceresponse.h"
#include "deletenotebookinstancelifecycleconfigrequest.h"
#include "deletenotebookinstancelifecycleconfigresponse.h"
#include "deletepipelinerequest.h"
#include "deletepipelineresponse.h"
#include "deleteprojectrequest.h"
#include "deleteprojectresponse.h"
#include "deletetagsrequest.h"
#include "deletetagsresponse.h"
#include "deletetrialrequest.h"
#include "deletetrialresponse.h"
#include "deletetrialcomponentrequest.h"
#include "deletetrialcomponentresponse.h"
#include "deleteuserprofilerequest.h"
#include "deleteuserprofileresponse.h"
#include "deleteworkforcerequest.h"
#include "deleteworkforceresponse.h"
#include "deleteworkteamrequest.h"
#include "deleteworkteamresponse.h"
#include "deregisterdevicesrequest.h"
#include "deregisterdevicesresponse.h"
#include "describeactionrequest.h"
#include "describeactionresponse.h"
#include "describealgorithmrequest.h"
#include "describealgorithmresponse.h"
#include "describeapprequest.h"
#include "describeappresponse.h"
#include "describeappimageconfigrequest.h"
#include "describeappimageconfigresponse.h"
#include "describeartifactrequest.h"
#include "describeartifactresponse.h"
#include "describeautomljobrequest.h"
#include "describeautomljobresponse.h"
#include "describecoderepositoryrequest.h"
#include "describecoderepositoryresponse.h"
#include "describecompilationjobrequest.h"
#include "describecompilationjobresponse.h"
#include "describecontextrequest.h"
#include "describecontextresponse.h"
#include "describedataqualityjobdefinitionrequest.h"
#include "describedataqualityjobdefinitionresponse.h"
#include "describedevicerequest.h"
#include "describedeviceresponse.h"
#include "describedevicefleetrequest.h"
#include "describedevicefleetresponse.h"
#include "describedomainrequest.h"
#include "describedomainresponse.h"
#include "describeedgepackagingjobrequest.h"
#include "describeedgepackagingjobresponse.h"
#include "describeendpointrequest.h"
#include "describeendpointresponse.h"
#include "describeendpointconfigrequest.h"
#include "describeendpointconfigresponse.h"
#include "describeexperimentrequest.h"
#include "describeexperimentresponse.h"
#include "describefeaturegrouprequest.h"
#include "describefeaturegroupresponse.h"
#include "describeflowdefinitionrequest.h"
#include "describeflowdefinitionresponse.h"
#include "describehumantaskuirequest.h"
#include "describehumantaskuiresponse.h"
#include "describehyperparametertuningjobrequest.h"
#include "describehyperparametertuningjobresponse.h"
#include "describeimagerequest.h"
#include "describeimageresponse.h"
#include "describeimageversionrequest.h"
#include "describeimageversionresponse.h"
#include "describelabelingjobrequest.h"
#include "describelabelingjobresponse.h"
#include "describemodelrequest.h"
#include "describemodelresponse.h"
#include "describemodelbiasjobdefinitionrequest.h"
#include "describemodelbiasjobdefinitionresponse.h"
#include "describemodelexplainabilityjobdefinitionrequest.h"
#include "describemodelexplainabilityjobdefinitionresponse.h"
#include "describemodelpackagerequest.h"
#include "describemodelpackageresponse.h"
#include "describemodelpackagegrouprequest.h"
#include "describemodelpackagegroupresponse.h"
#include "describemodelqualityjobdefinitionrequest.h"
#include "describemodelqualityjobdefinitionresponse.h"
#include "describemonitoringschedulerequest.h"
#include "describemonitoringscheduleresponse.h"
#include "describenotebookinstancerequest.h"
#include "describenotebookinstanceresponse.h"
#include "describenotebookinstancelifecycleconfigrequest.h"
#include "describenotebookinstancelifecycleconfigresponse.h"
#include "describepipelinerequest.h"
#include "describepipelineresponse.h"
#include "describepipelinedefinitionforexecutionrequest.h"
#include "describepipelinedefinitionforexecutionresponse.h"
#include "describepipelineexecutionrequest.h"
#include "describepipelineexecutionresponse.h"
#include "describeprocessingjobrequest.h"
#include "describeprocessingjobresponse.h"
#include "describeprojectrequest.h"
#include "describeprojectresponse.h"
#include "describesubscribedworkteamrequest.h"
#include "describesubscribedworkteamresponse.h"
#include "describetrainingjobrequest.h"
#include "describetrainingjobresponse.h"
#include "describetransformjobrequest.h"
#include "describetransformjobresponse.h"
#include "describetrialrequest.h"
#include "describetrialresponse.h"
#include "describetrialcomponentrequest.h"
#include "describetrialcomponentresponse.h"
#include "describeuserprofilerequest.h"
#include "describeuserprofileresponse.h"
#include "describeworkforcerequest.h"
#include "describeworkforceresponse.h"
#include "describeworkteamrequest.h"
#include "describeworkteamresponse.h"
#include "disablesagemakerservicecatalogportfoliorequest.h"
#include "disablesagemakerservicecatalogportfolioresponse.h"
#include "disassociatetrialcomponentrequest.h"
#include "disassociatetrialcomponentresponse.h"
#include "enablesagemakerservicecatalogportfoliorequest.h"
#include "enablesagemakerservicecatalogportfolioresponse.h"
#include "getdevicefleetreportrequest.h"
#include "getdevicefleetreportresponse.h"
#include "getmodelpackagegrouppolicyrequest.h"
#include "getmodelpackagegrouppolicyresponse.h"
#include "getsagemakerservicecatalogportfoliostatusrequest.h"
#include "getsagemakerservicecatalogportfoliostatusresponse.h"
#include "getsearchsuggestionsrequest.h"
#include "getsearchsuggestionsresponse.h"
#include "listactionsrequest.h"
#include "listactionsresponse.h"
#include "listalgorithmsrequest.h"
#include "listalgorithmsresponse.h"
#include "listappimageconfigsrequest.h"
#include "listappimageconfigsresponse.h"
#include "listappsrequest.h"
#include "listappsresponse.h"
#include "listartifactsrequest.h"
#include "listartifactsresponse.h"
#include "listassociationsrequest.h"
#include "listassociationsresponse.h"
#include "listautomljobsrequest.h"
#include "listautomljobsresponse.h"
#include "listcandidatesforautomljobrequest.h"
#include "listcandidatesforautomljobresponse.h"
#include "listcoderepositoriesrequest.h"
#include "listcoderepositoriesresponse.h"
#include "listcompilationjobsrequest.h"
#include "listcompilationjobsresponse.h"
#include "listcontextsrequest.h"
#include "listcontextsresponse.h"
#include "listdataqualityjobdefinitionsrequest.h"
#include "listdataqualityjobdefinitionsresponse.h"
#include "listdevicefleetsrequest.h"
#include "listdevicefleetsresponse.h"
#include "listdevicesrequest.h"
#include "listdevicesresponse.h"
#include "listdomainsrequest.h"
#include "listdomainsresponse.h"
#include "listedgepackagingjobsrequest.h"
#include "listedgepackagingjobsresponse.h"
#include "listendpointconfigsrequest.h"
#include "listendpointconfigsresponse.h"
#include "listendpointsrequest.h"
#include "listendpointsresponse.h"
#include "listexperimentsrequest.h"
#include "listexperimentsresponse.h"
#include "listfeaturegroupsrequest.h"
#include "listfeaturegroupsresponse.h"
#include "listflowdefinitionsrequest.h"
#include "listflowdefinitionsresponse.h"
#include "listhumantaskuisrequest.h"
#include "listhumantaskuisresponse.h"
#include "listhyperparametertuningjobsrequest.h"
#include "listhyperparametertuningjobsresponse.h"
#include "listimageversionsrequest.h"
#include "listimageversionsresponse.h"
#include "listimagesrequest.h"
#include "listimagesresponse.h"
#include "listlabelingjobsrequest.h"
#include "listlabelingjobsresponse.h"
#include "listlabelingjobsforworkteamrequest.h"
#include "listlabelingjobsforworkteamresponse.h"
#include "listmodelbiasjobdefinitionsrequest.h"
#include "listmodelbiasjobdefinitionsresponse.h"
#include "listmodelexplainabilityjobdefinitionsrequest.h"
#include "listmodelexplainabilityjobdefinitionsresponse.h"
#include "listmodelpackagegroupsrequest.h"
#include "listmodelpackagegroupsresponse.h"
#include "listmodelpackagesrequest.h"
#include "listmodelpackagesresponse.h"
#include "listmodelqualityjobdefinitionsrequest.h"
#include "listmodelqualityjobdefinitionsresponse.h"
#include "listmodelsrequest.h"
#include "listmodelsresponse.h"
#include "listmonitoringexecutionsrequest.h"
#include "listmonitoringexecutionsresponse.h"
#include "listmonitoringschedulesrequest.h"
#include "listmonitoringschedulesresponse.h"
#include "listnotebookinstancelifecycleconfigsrequest.h"
#include "listnotebookinstancelifecycleconfigsresponse.h"
#include "listnotebookinstancesrequest.h"
#include "listnotebookinstancesresponse.h"
#include "listpipelineexecutionstepsrequest.h"
#include "listpipelineexecutionstepsresponse.h"
#include "listpipelineexecutionsrequest.h"
#include "listpipelineexecutionsresponse.h"
#include "listpipelineparametersforexecutionrequest.h"
#include "listpipelineparametersforexecutionresponse.h"
#include "listpipelinesrequest.h"
#include "listpipelinesresponse.h"
#include "listprocessingjobsrequest.h"
#include "listprocessingjobsresponse.h"
#include "listprojectsrequest.h"
#include "listprojectsresponse.h"
#include "listsubscribedworkteamsrequest.h"
#include "listsubscribedworkteamsresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "listtrainingjobsrequest.h"
#include "listtrainingjobsresponse.h"
#include "listtrainingjobsforhyperparametertuningjobrequest.h"
#include "listtrainingjobsforhyperparametertuningjobresponse.h"
#include "listtransformjobsrequest.h"
#include "listtransformjobsresponse.h"
#include "listtrialcomponentsrequest.h"
#include "listtrialcomponentsresponse.h"
#include "listtrialsrequest.h"
#include "listtrialsresponse.h"
#include "listuserprofilesrequest.h"
#include "listuserprofilesresponse.h"
#include "listworkforcesrequest.h"
#include "listworkforcesresponse.h"
#include "listworkteamsrequest.h"
#include "listworkteamsresponse.h"
#include "putmodelpackagegrouppolicyrequest.h"
#include "putmodelpackagegrouppolicyresponse.h"
#include "registerdevicesrequest.h"
#include "registerdevicesresponse.h"
#include "renderuitemplaterequest.h"
#include "renderuitemplateresponse.h"
#include "searchrequest.h"
#include "searchresponse.h"
#include "sendpipelineexecutionstepfailurerequest.h"
#include "sendpipelineexecutionstepfailureresponse.h"
#include "sendpipelineexecutionstepsuccessrequest.h"
#include "sendpipelineexecutionstepsuccessresponse.h"
#include "startmonitoringschedulerequest.h"
#include "startmonitoringscheduleresponse.h"
#include "startnotebookinstancerequest.h"
#include "startnotebookinstanceresponse.h"
#include "startpipelineexecutionrequest.h"
#include "startpipelineexecutionresponse.h"
#include "stopautomljobrequest.h"
#include "stopautomljobresponse.h"
#include "stopcompilationjobrequest.h"
#include "stopcompilationjobresponse.h"
#include "stopedgepackagingjobrequest.h"
#include "stopedgepackagingjobresponse.h"
#include "stophyperparametertuningjobrequest.h"
#include "stophyperparametertuningjobresponse.h"
#include "stoplabelingjobrequest.h"
#include "stoplabelingjobresponse.h"
#include "stopmonitoringschedulerequest.h"
#include "stopmonitoringscheduleresponse.h"
#include "stopnotebookinstancerequest.h"
#include "stopnotebookinstanceresponse.h"
#include "stoppipelineexecutionrequest.h"
#include "stoppipelineexecutionresponse.h"
#include "stopprocessingjobrequest.h"
#include "stopprocessingjobresponse.h"
#include "stoptrainingjobrequest.h"
#include "stoptrainingjobresponse.h"
#include "stoptransformjobrequest.h"
#include "stoptransformjobresponse.h"
#include "updateactionrequest.h"
#include "updateactionresponse.h"
#include "updateappimageconfigrequest.h"
#include "updateappimageconfigresponse.h"
#include "updateartifactrequest.h"
#include "updateartifactresponse.h"
#include "updatecoderepositoryrequest.h"
#include "updatecoderepositoryresponse.h"
#include "updatecontextrequest.h"
#include "updatecontextresponse.h"
#include "updatedevicefleetrequest.h"
#include "updatedevicefleetresponse.h"
#include "updatedevicesrequest.h"
#include "updatedevicesresponse.h"
#include "updatedomainrequest.h"
#include "updatedomainresponse.h"
#include "updateendpointrequest.h"
#include "updateendpointresponse.h"
#include "updateendpointweightsandcapacitiesrequest.h"
#include "updateendpointweightsandcapacitiesresponse.h"
#include "updateexperimentrequest.h"
#include "updateexperimentresponse.h"
#include "updateimagerequest.h"
#include "updateimageresponse.h"
#include "updatemodelpackagerequest.h"
#include "updatemodelpackageresponse.h"
#include "updatemonitoringschedulerequest.h"
#include "updatemonitoringscheduleresponse.h"
#include "updatenotebookinstancerequest.h"
#include "updatenotebookinstanceresponse.h"
#include "updatenotebookinstancelifecycleconfigrequest.h"
#include "updatenotebookinstancelifecycleconfigresponse.h"
#include "updatepipelinerequest.h"
#include "updatepipelineresponse.h"
#include "updatepipelineexecutionrequest.h"
#include "updatepipelineexecutionresponse.h"
#include "updatetrainingjobrequest.h"
#include "updatetrainingjobresponse.h"
#include "updatetrialrequest.h"
#include "updatetrialresponse.h"
#include "updatetrialcomponentrequest.h"
#include "updatetrialcomponentresponse.h"
#include "updateuserprofilerequest.h"
#include "updateuserprofileresponse.h"
#include "updateworkforcerequest.h"
#include "updateworkforceresponse.h"
#include "updateworkteamrequest.h"
#include "updateworkteamresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SageMaker
 * \brief Contains classess for accessing Amazon SageMaker Service.
 *
 * \inmodule QtAwsSageMaker
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::SageMakerClient
 * \brief The SageMakerClient class provides access to the Amazon SageMaker Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 */

/*!
 * \brief Constructs a SageMakerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SageMakerClient::SageMakerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-07-24"),
    QStringLiteral("api.sagemaker"),
    QStringLiteral("Amazon SageMaker Service"),
    QStringLiteral("sagemaker"),
    parent), d_ptr(new SageMakerClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload SageMakerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SageMakerClient::SageMakerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-07-24"),
    QStringLiteral("api.sagemaker"),
    QStringLiteral("Amazon SageMaker Service"),
    QStringLiteral("sagemaker"),
    parent), d_ptr(new SageMakerClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * AddAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an <i>association</i> between the source and the destination. A source can be associated with multiple
 * destinations, and a destination can be associated with multiple sources. An association is a lineage tracking entity.
 * For more information, see <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/lineage-tracking.html">Amazon
 * SageMaker ML Lineage
 */
AddAssociationResponse * SageMakerClient::addAssociation(const AddAssociationRequest &request)
{
    return qobject_cast<AddAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * AddTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or overwrites one or more tags for the specified Amazon SageMaker resource. You can add tags to notebook instances,
 * training jobs, hyperparameter tuning jobs, batch transform jobs, models, labeling jobs, work teams, endpoint
 * configurations, and
 *
 * endpoints>
 *
 * Each tag consists of a key and an optional value. Tag keys must be unique per resource. For more information about tags,
 * see For more information, see <a href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
 * Tagging
 *
 * Strategies</a>> <note>
 *
 * Tags that you add to a hyperparameter tuning job by calling this API are also added to any training jobs that the
 * hyperparameter tuning job launches after you call this API, but not to training jobs that the hyperparameter tuning job
 * launched before you called this API. To make sure that the tags associated with a hyperparameter tuning job are also
 * added to all training jobs that the hyperparameter tuning job launches, add the tags when you first create the tuning
 * job by specifying them in the <code>Tags</code> parameter of <a>CreateHyperParameterTuningJob</a>
 *
 * </p </note> <note>
 *
 * Tags that you add to a SageMaker Studio Domain or User Profile by calling this API are also added to any Apps that the
 * Domain or User Profile launches after you call this API, but not to Apps that the Domain or User Profile launched before
 * you called this API. To make sure that the tags associated with a Domain or User Profile are also added to all Apps that
 * the Domain or User Profile launches, add the tags when you first create the Domain or User Profile by specifying them in
 * the <code>Tags</code> parameter of <a>CreateDomain</a> or
 */
AddTagsResponse * SageMakerClient::addTags(const AddTagsRequest &request)
{
    return qobject_cast<AddTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * AssociateTrialComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a trial component with a trial. A trial component can be associated with multiple trials. To disassociate a
 * trial component from a trial, call the <a>DisassociateTrialComponent</a>
 */
AssociateTrialComponentResponse * SageMakerClient::associateTrialComponent(const AssociateTrialComponentRequest &request)
{
    return qobject_cast<AssociateTrialComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an <i>action</i>. An action is a lineage tracking entity that represents an action or activity. For example, a
 * model deployment or an HPO job. Generally, an action involves at least one input or output artifact. For more
 * information, see <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/lineage-tracking.html">Amazon SageMaker ML
 * Lineage
 *
 * Tracking</a>> <note>
 *
 * <code>CreateAction</code> can only be invoked from within an SageMaker managed environment. This includes SageMaker
 * training jobs, processing jobs, transform jobs, and SageMaker notebooks. A call to <code>CreateAction</code> from
 * outside one of these environments results in an
 */
CreateActionResponse * SageMakerClient::createAction(const CreateActionRequest &request)
{
    return qobject_cast<CreateActionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateAlgorithmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a machine learning algorithm that you can use in Amazon SageMaker and list in the AWS
 */
CreateAlgorithmResponse * SageMakerClient::createAlgorithm(const CreateAlgorithmRequest &request)
{
    return qobject_cast<CreateAlgorithmResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a running app for the specified UserProfile. Supported apps are <code>JupyterServer</code> and
 * <code>KernelGateway</code>. This operation is automatically invoked by Amazon SageMaker Studio upon access to the
 * associated Domain, and when new kernel configurations are selected by the user. A user may have multiple Apps active
 */
CreateAppResponse * SageMakerClient::createApp(const CreateAppRequest &request)
{
    return qobject_cast<CreateAppResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateAppImageConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a configuration for running a SageMaker image as a KernelGateway app. The configuration specifies the Amazon
 * Elastic File System (EFS) storage volume on the image, and a list of the kernels in the
 */
CreateAppImageConfigResponse * SageMakerClient::createAppImageConfig(const CreateAppImageConfigRequest &request)
{
    return qobject_cast<CreateAppImageConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateArtifactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an <i>artifact</i>. An artifact is a lineage tracking entity that represents a URI addressable object or data.
 * Some examples are the S3 URI of a dataset and the ECR registry path of an image. For more information, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/lineage-tracking.html">Amazon SageMaker ML Lineage
 *
 * Tracking</a>> <note>
 *
 * <code>CreateArtifact</code> can only be invoked from within an SageMaker managed environment. This includes SageMaker
 * training jobs, processing jobs, transform jobs, and SageMaker notebooks. A call to <code>CreateArtifact</code> from
 * outside one of these environments results in an
 */
CreateArtifactResponse * SageMakerClient::createArtifact(const CreateArtifactRequest &request)
{
    return qobject_cast<CreateArtifactResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateAutoMLJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Autopilot
 *
 * job>
 *
 * Find the best performing model after you run an Autopilot job by calling
 *
 * >
 *
 * For information about how to use Autopilot, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-automate-model-development.html">Automate Model
 * Development with Amazon SageMaker
 */
CreateAutoMLJobResponse * SageMakerClient::createAutoMLJob(const CreateAutoMLJobRequest &request)
{
    return qobject_cast<CreateAutoMLJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateCodeRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Git repository as a resource in your Amazon SageMaker account. You can associate the repository with notebook
 * instances so that you can use Git source control for the notebooks you create. The Git repository is a resource in your
 * Amazon SageMaker account, so it can be associated with more than one notebook instance, and it persists independently
 * from the lifecycle of any notebook instances it is associated
 *
 * with>
 *
 * The repository can be hosted either in <a
 * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS CodeCommit</a> or in any other Git
 */
CreateCodeRepositoryResponse * SageMakerClient::createCodeRepository(const CreateCodeRepositoryRequest &request)
{
    return qobject_cast<CreateCodeRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateCompilationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a model compilation job. After the model has been compiled, Amazon SageMaker saves the resulting model artifacts
 * to an Amazon Simple Storage Service (Amazon S3) bucket that you specify.
 *
 * </p
 *
 * If you choose to host your model using Amazon SageMaker hosting services, you can use the resulting model artifacts as
 * part of the model. You can also use the artifacts with AWS IoT Greengrass. In that case, deploy them as an ML
 *
 * resource>
 *
 * In the request body, you provide the
 *
 * following> <ul> <li>
 *
 * A name for the compilation
 *
 * jo> </li> <li>
 *
 * Information about the input model artifacts
 *
 * </p </li> <li>
 *
 * The output location for the compiled model and the device (target) that the model runs on
 *
 * </p </li> <li>
 *
 * The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker assumes to perform the model compilation job.
 *
 * </p </li> </ul>
 *
 * You can also provide a <code>Tag</code> to track the model compilation job's resource use and costs. The response body
 * contains the <code>CompilationJobArn</code> for the compiled
 *
 * job>
 *
 * To stop a model compilation job, use <a>StopCompilationJob</a>. To get information about a particular model compilation
 * job, use <a>DescribeCompilationJob</a>. To get information about multiple model compilation jobs, use
 */
CreateCompilationJobResponse * SageMakerClient::createCompilationJob(const CreateCompilationJobRequest &request)
{
    return qobject_cast<CreateCompilationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateContextResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <i>context</i>. A context is a lineage tracking entity that represents a logical grouping of other tracking or
 * experiment entities. Some examples are an endpoint and a model package. For more information, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/lineage-tracking.html">Amazon SageMaker ML Lineage
 *
 * Tracking</a>> <note>
 *
 * <code>CreateContext</code> can only be invoked from within an SageMaker managed environment. This includes SageMaker
 * training jobs, processing jobs, transform jobs, and SageMaker notebooks. A call to <code>CreateContext</code> from
 * outside one of these environments results in an
 */
CreateContextResponse * SageMakerClient::createContext(const CreateContextRequest &request)
{
    return qobject_cast<CreateContextResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateDataQualityJobDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a definition for a job that monitors data quality and drift. For information about model monitor, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor.html">Amazon SageMaker Model
 */
CreateDataQualityJobDefinitionResponse * SageMakerClient::createDataQualityJobDefinition(const CreateDataQualityJobDefinitionRequest &request)
{
    return qobject_cast<CreateDataQualityJobDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateDeviceFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a device
 */
CreateDeviceFleetResponse * SageMakerClient::createDeviceFleet(const CreateDeviceFleetRequest &request)
{
    return qobject_cast<CreateDeviceFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <code>Domain</code> used by Amazon SageMaker Studio. A domain consists of an associated Amazon Elastic File
 * System (EFS) volume, a list of authorized users, and a variety of security, application, policy, and Amazon Virtual
 * Private Cloud (VPC) configurations. An AWS account is limited to one domain per region. Users within a domain can share
 * notebook files and other artifacts with each
 *
 * other>
 *
 * <b>EFS storage</b>
 *
 * </p
 *
 * When a domain is created, an EFS volume is created for use by all of the users within the domain. Each user receives a
 * private home directory within the EFS volume for notebooks, Git repositories, and data
 *
 * files>
 *
 * SageMaker uses the AWS Key Management Service (AWS KMS) to encrypt the EFS volume attached to the domain with an AWS
 * managed customer master key (CMK) by default. For more control, you can specify a customer managed CMK. For more
 * information, see <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/encryption-at-rest.html">Protect Data at Rest
 * Using
 *
 * Encryption</a>>
 *
 * <b>VPC configuration</b>
 *
 * </p
 *
 * All SageMaker Studio traffic between the domain and the EFS volume is through the specified VPC and subnets. For other
 * Studio traffic, you can specify the <code>AppNetworkAccessType</code> parameter. <code>AppNetworkAccessType</code>
 * corresponds to the network access type that you choose when you onboard to Studio. The following options are
 *
 * available> <ul> <li>
 *
 * <code>PublicInternetOnly</code> - Non-EFS traffic goes through a VPC managed by Amazon SageMaker, which allows internet
 * access. This is the default
 *
 * value> </li> <li>
 *
 * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and subnets. Internet access is disabled by
 * default. To allow internet access, you must specify a NAT
 *
 * gateway>
 *
 * When internet access is disabled, you won't be able to run a Studio notebook or to train or host models unless your VPC
 * has an interface endpoint to the SageMaker API and runtime or a NAT gateway and your security groups allow outbound
 *
 * connections> </li> </ul>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/studio-notebooks-and-internet-access.html">Connect SageMaker
 * Studio Notebooks to Resources in a
 */
CreateDomainResponse * SageMakerClient::createDomain(const CreateDomainRequest &request)
{
    return qobject_cast<CreateDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateEdgePackagingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a SageMaker Edge Manager model packaging job. Edge Manager will use the model artifacts from the Amazon Simple
 * Storage Service bucket that you specify. After the model has been packaged, Amazon SageMaker saves the resulting
 * artifacts to an S3 bucket that you
 */
CreateEdgePackagingJobResponse * SageMakerClient::createEdgePackagingJob(const CreateEdgePackagingJobRequest &request)
{
    return qobject_cast<CreateEdgePackagingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an endpoint using the endpoint configuration specified in the request. Amazon SageMaker uses the endpoint to
 * provision resources and deploy models. You create the endpoint configuration with the <a>CreateEndpointConfig</a> API.
 *
 * </p
 *
 * Use this API to deploy models using Amazon SageMaker hosting services.
 *
 * </p
 *
 * For an example that calls this method when deploying a model to Amazon SageMaker hosting services, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1-deploy-model.html#ex1-deploy-model-boto">Deploy the Model to
 * Amazon SageMaker Hosting Services (AWS SDK for Python (Boto 3)).</a>
 *
 * </p <note>
 *
 * You must not delete an <code>EndpointConfig</code> that is in use by an endpoint that is live or while the
 * <code>UpdateEndpoint</code> or <code>CreateEndpoint</code> operations are being performed on the endpoint. To update an
 * endpoint, you must create a new
 *
 * <code>EndpointConfig</code>> </note>
 *
 * The endpoint name must be unique within an AWS Region in your AWS account.
 *
 * </p
 *
 * When it receives the request, Amazon SageMaker creates the endpoint, launches the resources (ML compute instances), and
 * deploys the model(s) on them.
 *
 * </p <note>
 *
 * When you call <a>CreateEndpoint</a>, a load call is made to DynamoDB to verify that your endpoint configuration exists.
 * When you read data from a DynamoDB table supporting <a
 * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadConsistency.html">
 * <code>Eventually Consistent Reads</code> </a>, the response might not reflect the results of a recently completed write
 * operation. The response might include some stale data. If the dependent entities are not yet in DynamoDB, this causes a
 * validation error. If you repeat your read request after a short time, the response should return the latest data. So
 * retry logic is recommended to handle these possible issues. We also recommend that customers call
 * <a>DescribeEndpointConfig</a> before calling <a>CreateEndpoint</a> to minimize the potential impact of a DynamoDB
 * eventually consistent
 *
 * read> </note>
 *
 * When Amazon SageMaker receives the request, it sets the endpoint status to <code>Creating</code>. After it creates the
 * endpoint, it sets the status to <code>InService</code>. Amazon SageMaker can then process incoming requests for
 * inferences. To check the status of an endpoint, use the <a>DescribeEndpoint</a>
 *
 * API>
 *
 * If any of the models hosted at this endpoint get model data from an Amazon S3 location, Amazon SageMaker uses AWS
 * Security Token Service to download model artifacts from the S3 path you provided. AWS STS is activated in your IAM user
 * account by default. If you previously deactivated AWS STS for a region, you need to reactivate AWS STS for that region.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating and
 * Deactivating AWS STS in an AWS Region</a> in the <i>AWS Identity and Access Management User
 *
 * Guide</i>> <note>
 *
 * To add the IAM role policies for using this API operation, go to the <a href="https://console.aws.amazon.com/iam/">IAM
 * console</a>, and choose Roles in the left navigation pane. Search the IAM role that you want to grant access to use the
 * <a>CreateEndpoint</a> and <a>CreateEndpointConfig</a> API operations, add the following policies to the role.
 *
 * </p <ul> <li>
 *
 * Option 1: For a full Amazon SageMaker access, search and attach the <code>AmazonSageMakerFullAccess</code>
 *
 * policy> </li> <li>
 *
 * Option 2: For granting a limited access to an IAM role, paste the following Action elements manually into the JSON file
 * of the IAM role:
 *
 * </p
 *
 * <code>"Action": ["sagemaker:CreateEndpoint", "sagemaker:CreateEndpointConfig"]</code>
 *
 * </p
 *
 * <code>"Resource": [</code>
 *
 * </p
 *
 * <code>"arn:aws:sagemaker:region:account-id:endpoint/endpointName"</code>
 *
 * </p
 *
 * <code>"arn:aws:sagemaker:region:account-id:endpoint-config/endpointConfigName"</code>
 *
 * </p
 *
 * <code>]</code>
 *
 * </p
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/api-permissions-reference.html">Amazon SageMaker API Permissions:
 * Actions, Permissions, and Resources
 */
CreateEndpointResponse * SageMakerClient::createEndpoint(const CreateEndpointRequest &request)
{
    return qobject_cast<CreateEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateEndpointConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an endpoint configuration that Amazon SageMaker hosting services uses to deploy models. In the configuration,
 * you identify one or more models, created using the <code>CreateModel</code> API, to deploy and the resources that you
 * want Amazon SageMaker to provision. Then you call the <a>CreateEndpoint</a>
 *
 * API> <note>
 *
 * Use this API if you want to use Amazon SageMaker hosting services to deploy models into production.
 *
 * </p </note>
 *
 * In the request, you define a <code>ProductionVariant</code>, for each model that you want to deploy. Each
 * <code>ProductionVariant</code> parameter also describes the resources that you want Amazon SageMaker to provision. This
 * includes the number and type of ML compute instances to deploy.
 *
 * </p
 *
 * If you are hosting multiple models, you also assign a <code>VariantWeight</code> to specify how much traffic you want to
 * allocate to each model. For example, suppose that you want to host two models, A and B, and you assign traffic weight 2
 * for model A and 1 for model B. Amazon SageMaker distributes two-thirds of the traffic to Model A, and one-third to model
 * B.
 *
 * </p
 *
 * For an example that calls this method when deploying a model to Amazon SageMaker hosting services, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1-deploy-model.html#ex1-deploy-model-boto">Deploy the Model to
 * Amazon SageMaker Hosting Services (AWS SDK for Python (Boto 3)).</a>
 *
 * </p <note>
 *
 * When you call <a>CreateEndpoint</a>, a load call is made to DynamoDB to verify that your endpoint configuration exists.
 * When you read data from a DynamoDB table supporting <a
 * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadConsistency.html">
 * <code>Eventually Consistent Reads</code> </a>, the response might not reflect the results of a recently completed write
 * operation. The response might include some stale data. If the dependent entities are not yet in DynamoDB, this causes a
 * validation error. If you repeat your read request after a short time, the response should return the latest data. So
 * retry logic is recommended to handle these possible issues. We also recommend that customers call
 * <a>DescribeEndpointConfig</a> before calling <a>CreateEndpoint</a> to minimize the potential impact of a DynamoDB
 * eventually consistent
 */
CreateEndpointConfigResponse * SageMakerClient::createEndpointConfig(const CreateEndpointConfigRequest &request)
{
    return qobject_cast<CreateEndpointConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateExperimentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an SageMaker <i>experiment</i>. An experiment is a collection of <i>trials</i> that are observed, compared and
 * evaluated as a group. A trial is a set of steps, called <i>trial components</i>, that produce a machine learning
 *
 * model>
 *
 * The goal of an experiment is to determine the components that produce the best model. Multiple trials are performed,
 * each one isolating and measuring the impact of a change to one or more inputs, while keeping the remaining inputs
 *
 * constant>
 *
 * When you use SageMaker Studio or the SageMaker Python SDK, all experiments, trials, and trial components are
 * automatically tracked, logged, and indexed. When you use the AWS SDK for Python (Boto), you must use the logging APIs
 * provided by the
 *
 * SDK>
 *
 * You can add tags to experiments, trials, trial components and then use the <a>Search</a> API to search for the
 *
 * tags>
 *
 * To add a description to an experiment, specify the optional <code>Description</code> parameter. To add a description
 * later, or to change the description, call the <a>UpdateExperiment</a>
 *
 * API>
 *
 * To get a list of all your experiments, call the <a>ListExperiments</a> API. To view an experiment's properties, call the
 * <a>DescribeExperiment</a> API. To get a list of all the trials associated with an experiment, call the <a>ListTrials</a>
 * API. To create a trial call the <a>CreateTrial</a>
 */
CreateExperimentResponse * SageMakerClient::createExperiment(const CreateExperimentRequest &request)
{
    return qobject_cast<CreateExperimentResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateFeatureGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new <code>FeatureGroup</code>. A <code>FeatureGroup</code> is a group of <code>Features</code> defined in the
 * <code>FeatureStore</code> to describe a <code>Record</code>.
 *
 * </p
 *
 * The <code>FeatureGroup</code> defines the schema and features contained in the FeatureGroup. A <code>FeatureGroup</code>
 * definition is composed of a list of <code>Features</code>, a <code>RecordIdentifierFeatureName</code>, an
 * <code>EventTimeFeatureName</code> and configurations for its <code>OnlineStore</code> and <code>OfflineStore</code>.
 * Check <a href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html">AWS service quotas</a> to see the
 * <code>FeatureGroup</code>s quota for your AWS
 *
 * account> <b>
 *
 * You must include at least one of <code>OnlineStoreConfig</code> and <code>OfflineStoreConfig</code> to create a
 */
CreateFeatureGroupResponse * SageMakerClient::createFeatureGroup(const CreateFeatureGroupRequest &request)
{
    return qobject_cast<CreateFeatureGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateFlowDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a flow
 */
CreateFlowDefinitionResponse * SageMakerClient::createFlowDefinition(const CreateFlowDefinitionRequest &request)
{
    return qobject_cast<CreateFlowDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateHumanTaskUiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Defines the settings you will use for the human review workflow user interface. Reviewers will see a three-panel
 * interface with an instruction area, the item to review, and an input
 */
CreateHumanTaskUiResponse * SageMakerClient::createHumanTaskUi(const CreateHumanTaskUiRequest &request)
{
    return qobject_cast<CreateHumanTaskUiResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateHyperParameterTuningJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a hyperparameter tuning job. A hyperparameter tuning job finds the best version of a model by running many
 * training jobs on your dataset using the algorithm you choose and values for hyperparameters within ranges that you
 * specify. It then chooses the hyperparameter values that result in a model that performs the best, as measured by an
 * objective metric that you
 */
CreateHyperParameterTuningJobResponse * SageMakerClient::createHyperParameterTuningJob(const CreateHyperParameterTuningJobRequest &request)
{
    return qobject_cast<CreateHyperParameterTuningJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a custom SageMaker image. A SageMaker image is a set of image versions. Each image version represents a
 * container image stored in Amazon Container Registry (ECR). For more information, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/studio-byoi.html">Bring your own SageMaker
 */
CreateImageResponse * SageMakerClient::createImage(const CreateImageRequest &request)
{
    return qobject_cast<CreateImageResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateImageVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a version of the SageMaker image specified by <code>ImageName</code>. The version represents the Amazon
 * Container Registry (ECR) container image specified by
 */
CreateImageVersionResponse * SageMakerClient::createImageVersion(const CreateImageVersionRequest &request)
{
    return qobject_cast<CreateImageVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateLabelingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a job that uses workers to label the data objects in your input dataset. You can use the labeled data to train
 * machine learning models.
 *
 * </p
 *
 * You can select your workforce from one of three
 *
 * providers> <ul> <li>
 *
 * A private workforce that you create. It can include employees, contractors, and outside experts. Use a private workforce
 * when want the data to stay within your organization or when a specific set of skills is
 *
 * required> </li> <li>
 *
 * One or more vendors that you select from the AWS Marketplace. Vendors provide expertise in specific areas.
 *
 * </p </li> <li>
 *
 * The Amazon Mechanical Turk workforce. This is the largest workforce, but it should only be used for public data or data
 * that has been stripped of any personally identifiable
 *
 * information> </li> </ul>
 *
 * You can also use <i>automated data labeling</i> to reduce the number of data objects that need to be labeled by a human.
 * Automated data labeling uses <i>active learning</i> to determine if a data object can be labeled by machine or if it
 * needs to be sent to a human worker. For more information, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-automated-labeling.html">Using Automated Data
 *
 * Labeling</a>>
 *
 * The data objects to be labeled are contained in an Amazon S3 bucket. You create a <i>manifest file</i> that describes
 * the location of each object. For more information, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-data.html">Using Input and Output
 *
 * Data</a>>
 *
 * The output can be used as the manifest file for another labeling job or as training data for your machine learning
 *
 * models>
 *
 * You can use this operation to create a static labeling job or a streaming labeling job. A static labeling job stops if
 * all data objects in the input manifest file identified in <code>ManifestS3Uri</code> have been labeled. A streaming
 * labeling job runs perpetually until it is manually stopped, or remains idle for 10 days. You can send new data objects
 * to an active (<code>InProgress</code>) streaming labeling job in real time. To learn how to create a static labeling
 * job, see <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-create-labeling-job-api.html">Create a Labeling
 * Job (API) </a> in the Amazon SageMaker Developer Guide. To learn how to create a streaming labeling job, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-streaming-create-job.html">Create a Streaming Labeling
 */
CreateLabelingJobResponse * SageMakerClient::createLabelingJob(const CreateLabelingJobRequest &request)
{
    return qobject_cast<CreateLabelingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a model in Amazon SageMaker. In the request, you name the model and describe a primary container. For the
 * primary container, you specify the Docker image that contains inference code, artifacts (from prior training), and a
 * custom environment map that the inference code uses when you deploy the model for
 *
 * predictions>
 *
 * Use this API to create a model if you want to use Amazon SageMaker hosting services or run a batch transform
 *
 * job>
 *
 * To host your model, you create an endpoint configuration with the <code>CreateEndpointConfig</code> API, and then create
 * an endpoint with the <code>CreateEndpoint</code> API. Amazon SageMaker then deploys all of the containers that you
 * defined for the model in the hosting environment.
 *
 * </p
 *
 * For an example that calls this method when deploying a model to Amazon SageMaker hosting services, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1-deploy-model.html#ex1-deploy-model-boto">Deploy the Model to
 * Amazon SageMaker Hosting Services (AWS SDK for Python (Boto 3)).</a>
 *
 * </p
 *
 * To run a batch transform using your model, you start a job with the <code>CreateTransformJob</code> API. Amazon
 * SageMaker uses your model and your dataset to get inferences which are then saved to a specified S3
 *
 * location>
 *
 * In the <code>CreateModel</code> request, you must define a container with the <code>PrimaryContainer</code>
 *
 * parameter>
 *
 * In the request, you also provide an IAM role that Amazon SageMaker can assume to access model artifacts and docker image
 * for deployment on ML compute hosting instances or for batch transform jobs. In addition, you also use the IAM role to
 * manage permissions the inference code needs. For example, if the inference code access any other AWS resources, you
 * grant necessary permissions via this
 */
CreateModelResponse * SageMakerClient::createModel(const CreateModelRequest &request)
{
    return qobject_cast<CreateModelResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateModelBiasJobDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the definition for a model bias
 */
CreateModelBiasJobDefinitionResponse * SageMakerClient::createModelBiasJobDefinition(const CreateModelBiasJobDefinitionRequest &request)
{
    return qobject_cast<CreateModelBiasJobDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateModelExplainabilityJobDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the definition for a model explainability
 */
CreateModelExplainabilityJobDefinitionResponse * SageMakerClient::createModelExplainabilityJobDefinition(const CreateModelExplainabilityJobDefinitionRequest &request)
{
    return qobject_cast<CreateModelExplainabilityJobDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateModelPackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a model package that you can use to create Amazon SageMaker models or list on AWS Marketplace, or a versioned
 * model that is part of a model group. Buyers can subscribe to model packages listed on AWS Marketplace to create models
 * in Amazon
 *
 * SageMaker>
 *
 * To create a model package by specifying a Docker container that contains your inference code and the Amazon S3 location
 * of your model artifacts, provide values for <code>InferenceSpecification</code>. To create a model from an algorithm
 * resource that you created or subscribed to in AWS Marketplace, provide a value for
 *
 * <code>SourceAlgorithmSpecification</code>> <note>
 *
 * There are two types of model
 *
 * packages> <ul> <li>
 *
 * Versioned - a model that is part of a model group in the model
 *
 * registry> </li> <li>
 *
 * Unversioned - a model package that is not part of a model
 */
CreateModelPackageResponse * SageMakerClient::createModelPackage(const CreateModelPackageRequest &request)
{
    return qobject_cast<CreateModelPackageResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateModelPackageGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a model group. A model group contains a group of model
 */
CreateModelPackageGroupResponse * SageMakerClient::createModelPackageGroup(const CreateModelPackageGroupRequest &request)
{
    return qobject_cast<CreateModelPackageGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateModelQualityJobDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a definition for a job that monitors model quality and drift. For information about model monitor, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor.html">Amazon SageMaker Model
 */
CreateModelQualityJobDefinitionResponse * SageMakerClient::createModelQualityJobDefinition(const CreateModelQualityJobDefinitionRequest &request)
{
    return qobject_cast<CreateModelQualityJobDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateMonitoringScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a schedule that regularly starts Amazon SageMaker Processing Jobs to monitor the data captured for an Amazon
 * SageMaker
 */
CreateMonitoringScheduleResponse * SageMakerClient::createMonitoringSchedule(const CreateMonitoringScheduleRequest &request)
{
    return qobject_cast<CreateMonitoringScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateNotebookInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon SageMaker notebook instance. A notebook instance is a machine learning (ML) compute instance running
 * on a Jupyter notebook.
 *
 * </p
 *
 * In a <code>CreateNotebookInstance</code> request, specify the type of ML compute instance that you want to run. Amazon
 * SageMaker launches the instance, installs common libraries that you can use to explore datasets for model training, and
 * attaches an ML storage volume to the notebook instance.
 *
 * </p
 *
 * Amazon SageMaker also provides a set of example notebooks. Each notebook demonstrates how to use Amazon SageMaker with a
 * specific algorithm or with a machine learning framework.
 *
 * </p
 *
 * After receiving the request, Amazon SageMaker does the
 *
 * following> <ol> <li>
 *
 * Creates a network interface in the Amazon SageMaker
 *
 * VPC> </li> <li>
 *
 * (Option) If you specified <code>SubnetId</code>, Amazon SageMaker creates a network interface in your own VPC, which is
 * inferred from the subnet ID that you provide in the input. When creating this network interface, Amazon SageMaker
 * attaches the security group that you specified in the request to the network interface that it creates in your
 *
 * VPC> </li> <li>
 *
 * Launches an EC2 instance of the type specified in the request in the Amazon SageMaker VPC. If you specified
 * <code>SubnetId</code> of your VPC, Amazon SageMaker specifies both network interfaces when launching this instance. This
 * enables inbound traffic from your own VPC to the notebook instance, assuming that the security groups allow
 *
 * it> </li> </ol>
 *
 * After creating the notebook instance, Amazon SageMaker returns its Amazon Resource Name (ARN). You can't change the name
 * of a notebook instance after you create
 *
 * it>
 *
 * After Amazon SageMaker creates the notebook instance, you can connect to the Jupyter server and work in Jupyter
 * notebooks. For example, you can write code to explore a dataset that you can use for model training, train a model, host
 * models by creating Amazon SageMaker endpoints, and validate hosted models.
 *
 * </p
 *
 * For more information, see <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It Works</a>.
 */
CreateNotebookInstanceResponse * SageMakerClient::createNotebookInstance(const CreateNotebookInstanceRequest &request)
{
    return qobject_cast<CreateNotebookInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateNotebookInstanceLifecycleConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a lifecycle configuration that you can associate with a notebook instance. A <i>lifecycle configuration</i> is a
 * collection of shell scripts that run when you create or start a notebook
 *
 * instance>
 *
 * Each lifecycle configuration script has a limit of 16384
 *
 * characters>
 *
 * The value of the <code>$PATH</code> environment variable that is available to both scripts is
 *
 * <code>/sbin:bin:/usr/sbin:/usr/bin</code>>
 *
 * View CloudWatch Logs for notebook instance lifecycle configurations in log group
 * <code>/aws/sagemaker/NotebookInstances</code> in log stream
 *
 * <code>[notebook-instance-name]/[LifecycleConfigHook]</code>>
 *
 * Lifecycle configuration scripts cannot run for longer than 5 minutes. If a script runs for longer than 5 minutes, it
 * fails and the notebook instance is not created or
 *
 * started>
 *
 * For information about notebook instance lifestyle configurations, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step 2.1: (Optional) Customize a
 * Notebook
 */
CreateNotebookInstanceLifecycleConfigResponse * SageMakerClient::createNotebookInstanceLifecycleConfig(const CreateNotebookInstanceLifecycleConfigRequest &request)
{
    return qobject_cast<CreateNotebookInstanceLifecycleConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreatePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a pipeline using a JSON pipeline
 */
CreatePipelineResponse * SageMakerClient::createPipeline(const CreatePipelineRequest &request)
{
    return qobject_cast<CreatePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreatePresignedDomainUrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a URL for a specified UserProfile in a Domain. When accessed in a web browser, the user will be automatically
 * signed in to Amazon SageMaker Studio, and granted access to all of the Apps and files associated with the Domain's
 * Amazon Elastic File System (EFS) volume. This operation can only be called when the authentication mode equals IAM.
 *
 * </p <note>
 *
 * The URL that you get from a call to <code>CreatePresignedDomainUrl</code> has a default timeout of 5 minutes. You can
 * configure this value using <code>ExpiresInSeconds</code>. If you try to use the URL after the timeout limit expires, you
 * are directed to the AWS console sign-in
 */
CreatePresignedDomainUrlResponse * SageMakerClient::createPresignedDomainUrl(const CreatePresignedDomainUrlRequest &request)
{
    return qobject_cast<CreatePresignedDomainUrlResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreatePresignedNotebookInstanceUrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a URL that you can use to connect to the Jupyter server from a notebook instance. In the Amazon SageMaker
 * console, when you choose <code>Open</code> next to a notebook instance, Amazon SageMaker opens a new tab showing the
 * Jupyter server home page from the notebook instance. The console uses this API to get the URL and show the
 *
 * page>
 *
 * The IAM role or user used to call this API defines the permissions to access the notebook instance. Once the presigned
 * URL is created, no additional permission is required to access this URL. IAM authorization policies for this API are
 * also enforced for every HTTP request and WebSocket frame that attempts to connect to the notebook
 *
 * instance>
 *
 * You can restrict access to this API and to the URL that it returns to a list of IP addresses that you specify. Use the
 * <code>NotIpAddress</code> condition operator and the <code>aws:SourceIP</code> condition context key to specify the list
 * of IP addresses that you want to have access to the notebook instance. For more information, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/security_iam_id-based-policy-examples.html#nbi-ip-filter">Limit
 * Access to a Notebook Instance by IP
 *
 * Address</a>> <note>
 *
 * The URL that you get from a call to <a>CreatePresignedNotebookInstanceUrl</a> is valid only for 5 minutes. If you try to
 * use the URL after the 5-minute limit expires, you are directed to the AWS console sign-in
 */
CreatePresignedNotebookInstanceUrlResponse * SageMakerClient::createPresignedNotebookInstanceUrl(const CreatePresignedNotebookInstanceUrlRequest &request)
{
    return qobject_cast<CreatePresignedNotebookInstanceUrlResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateProcessingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a processing
 */
CreateProcessingJobResponse * SageMakerClient::createProcessingJob(const CreateProcessingJobRequest &request)
{
    return qobject_cast<CreateProcessingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a machine learning (ML) project that can contain one or more templates that set up an ML pipeline from training
 * to deploying an approved
 */
CreateProjectResponse * SageMakerClient::createProject(const CreateProjectRequest &request)
{
    return qobject_cast<CreateProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateTrainingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a model training job. After training completes, Amazon SageMaker saves the resulting model artifacts to an Amazon
 * S3 location that you specify.
 *
 * </p
 *
 * If you choose to host your model using Amazon SageMaker hosting services, you can use the resulting model artifacts as
 * part of the model. You can also use the artifacts in a machine learning service other than Amazon SageMaker, provided
 * that you know how to use them for inference.
 *
 * </p
 *
 * In the request body, you provide the following:
 *
 * </p <ul> <li>
 *
 * <code>AlgorithmSpecification</code> - Identifies the training algorithm to use.
 *
 * </p </li> <li>
 *
 * <code>HyperParameters</code> - Specify these algorithm-specific parameters to enable the estimation of model parameters
 * during training. Hyperparameters can be tuned to optimize this learning process. For a list of hyperparameters for each
 * training algorithm provided by Amazon SageMaker, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
 *
 * </p </li> <li>
 *
 * <code>InputDataConfig</code> - Describes the training dataset and the Amazon S3, EFS, or FSx location where it is
 *
 * stored> </li> <li>
 *
 * <code>OutputDataConfig</code> - Identifies the Amazon S3 bucket where you want Amazon SageMaker to save the results of
 * model training.
 *
 * </p </li> <li>
 *
 * <code>ResourceConfig</code> - Identifies the resources, ML compute instances, and ML storage volumes to deploy for model
 * training. In distributed training, you specify more than one instance.
 *
 * </p </li> <li>
 *
 * <code>EnableManagedSpotTraining</code> - Optimize the cost of training machine learning models by up to 80% by using
 * Amazon EC2 Spot instances. For more information, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-managed-spot-training.html">Managed Spot Training</a>.
 *
 * </p </li> <li>
 *
 * <code>RoleArn</code> - The Amazon Resource Name (ARN) that Amazon SageMaker assumes to perform tasks on your behalf
 * during model training. You must grant this role the necessary permissions so that Amazon SageMaker can successfully
 * complete model training.
 *
 * </p </li> <li>
 *
 * <code>StoppingCondition</code> - To help cap training costs, use <code>MaxRuntimeInSeconds</code> to set a time limit
 * for training. Use <code>MaxWaitTimeInSeconds</code> to specify how long a managed spot training job has to complete.
 *
 * </p </li> <li>
 *
 * <code>Environment</code> - The environment variables to set in the Docker
 *
 * container> </li> <li>
 *
 * <code>RetryStrategy</code> - The number of times to retry the job when the job fails due to an
 *
 * <code>InternalServerError</code>> </li> </ul>
 *
 * For more information about Amazon SageMaker, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It Works</a>.
 */
CreateTrainingJobResponse * SageMakerClient::createTrainingJob(const CreateTrainingJobRequest &request)
{
    return qobject_cast<CreateTrainingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateTransformJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a transform job. A transform job uses a trained model to get inferences on a dataset and saves these results to
 * an Amazon S3 location that you
 *
 * specify>
 *
 * To perform batch transformations, you create a transform job and use the data that you have readily
 *
 * available>
 *
 * In the request body, you provide the
 *
 * following> <ul> <li>
 *
 * <code>TransformJobName</code> - Identifies the transform job. The name must be unique within an AWS Region in an AWS
 *
 * account> </li> <li>
 *
 * <code>ModelName</code> - Identifies the model to use. <code>ModelName</code> must be the name of an existing Amazon
 * SageMaker model in the same AWS Region and AWS account. For information on creating a model, see
 *
 * <a>CreateModel</a>> </li> <li>
 *
 * <code>TransformInput</code> - Describes the dataset to be transformed and the Amazon S3 location where it is
 *
 * stored> </li> <li>
 *
 * <code>TransformOutput</code> - Identifies the Amazon S3 location where you want Amazon SageMaker to save the results
 * from the transform
 *
 * job> </li> <li>
 *
 * <code>TransformResources</code> - Identifies the ML compute instances for the transform
 *
 * job> </li> </ul>
 *
 * For more information about how batch transformation works, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform.html">Batch
 */
CreateTransformJobResponse * SageMakerClient::createTransformJob(const CreateTransformJobRequest &request)
{
    return qobject_cast<CreateTransformJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateTrialResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an SageMaker <i>trial</i>. A trial is a set of steps called <i>trial components</i> that produce a machine
 * learning model. A trial is part of a single SageMaker
 *
 * <i>experiment</i>>
 *
 * When you use SageMaker Studio or the SageMaker Python SDK, all experiments, trials, and trial components are
 * automatically tracked, logged, and indexed. When you use the AWS SDK for Python (Boto), you must use the logging APIs
 * provided by the
 *
 * SDK>
 *
 * You can add tags to a trial and then use the <a>Search</a> API to search for the
 *
 * tags>
 *
 * To get a list of all your trials, call the <a>ListTrials</a> API. To view a trial's properties, call the
 * <a>DescribeTrial</a> API. To create a trial component, call the <a>CreateTrialComponent</a>
 */
CreateTrialResponse * SageMakerClient::createTrial(const CreateTrialRequest &request)
{
    return qobject_cast<CreateTrialResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateTrialComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a <i>trial component</i>, which is a stage of a machine learning <i>trial</i>. A trial is composed of one or
 * more trial components. A trial component can be used in multiple
 *
 * trials>
 *
 * Trial components include pre-processing jobs, training jobs, and batch transform
 *
 * jobs>
 *
 * When you use SageMaker Studio or the SageMaker Python SDK, all experiments, trials, and trial components are
 * automatically tracked, logged, and indexed. When you use the AWS SDK for Python (Boto), you must use the logging APIs
 * provided by the
 *
 * SDK>
 *
 * You can add tags to a trial component and then use the <a>Search</a> API to search for the
 *
 * tags> <note>
 *
 * <code>CreateTrialComponent</code> can only be invoked from within an SageMaker managed environment. This includes
 * SageMaker training jobs, processing jobs, transform jobs, and SageMaker notebooks. A call to
 * <code>CreateTrialComponent</code> from outside one of these environments results in an
 */
CreateTrialComponentResponse * SageMakerClient::createTrialComponent(const CreateTrialComponentRequest &request)
{
    return qobject_cast<CreateTrialComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateUserProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a user profile. A user profile represents a single user within a domain, and is the main way to reference a
 * "person" for the purposes of sharing, reporting, and other user-oriented features. This entity is created when a user
 * onboards to Amazon SageMaker Studio. If an administrator invites a person by email or imports them from SSO, a user
 * profile is automatically created. A user profile is the primary holder of settings for an individual user and has a
 * reference to the user's private Amazon Elastic File System (EFS) home directory.
 */
CreateUserProfileResponse * SageMakerClient::createUserProfile(const CreateUserProfileRequest &request)
{
    return qobject_cast<CreateUserProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateWorkforceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this operation to create a workforce. This operation will return an error if a workforce already exists in the AWS
 * Region that you specify. You can only create one workforce in each AWS Region per AWS
 *
 * account>
 *
 * If you want to create a new workforce in an AWS Region where a workforce already exists, use the API operation to delete
 * the existing workforce and then use <code>CreateWorkforce</code> to create a new
 *
 * workforce>
 *
 * To create a private workforce using Amazon Cognito, you must specify a Cognito user pool in <code>CognitoConfig</code>.
 * You can also create an Amazon Cognito workforce using the Amazon SageMaker console. For more information, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html"> Create a Private Workforce
 * (Amazon
 *
 * Cognito)</a>>
 *
 * To create a private workforce using your own OIDC Identity Provider (IdP), specify your IdP configuration in
 * <code>OidcConfig</code>. Your OIDC IdP must support <i>groups</i> because groups are used by Ground Truth and Amazon A2I
 * to create work teams. For more information, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private-oidc.html"> Create a Private
 * Workforce (OIDC
 */
CreateWorkforceResponse * SageMakerClient::createWorkforce(const CreateWorkforceRequest &request)
{
    return qobject_cast<CreateWorkforceResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * CreateWorkteamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new work team for labeling your data. A work team is defined by one or more Amazon Cognito user pools. You
 * must first create the user pools before you can create a work
 *
 * team>
 *
 * You cannot create more than 25 work teams in an account and
 */
CreateWorkteamResponse * SageMakerClient::createWorkteam(const CreateWorkteamRequest &request)
{
    return qobject_cast<CreateWorkteamResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 */
DeleteActionResponse * SageMakerClient::deleteAction(const DeleteActionRequest &request)
{
    return qobject_cast<DeleteActionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteAlgorithmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified algorithm from your
 */
DeleteAlgorithmResponse * SageMakerClient::deleteAlgorithm(const DeleteAlgorithmRequest &request)
{
    return qobject_cast<DeleteAlgorithmResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used to stop and delete an
 */
DeleteAppResponse * SageMakerClient::deleteApp(const DeleteAppRequest &request)
{
    return qobject_cast<DeleteAppResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteAppImageConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 */
DeleteAppImageConfigResponse * SageMakerClient::deleteAppImageConfig(const DeleteAppImageConfigRequest &request)
{
    return qobject_cast<DeleteAppImageConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteArtifactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an artifact. Either <code>ArtifactArn</code> or <code>Source</code> must be
 */
DeleteArtifactResponse * SageMakerClient::deleteArtifact(const DeleteArtifactRequest &request)
{
    return qobject_cast<DeleteArtifactResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 */
DeleteAssociationResponse * SageMakerClient::deleteAssociation(const DeleteAssociationRequest &request)
{
    return qobject_cast<DeleteAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteCodeRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Git repository from your
 */
DeleteCodeRepositoryResponse * SageMakerClient::deleteCodeRepository(const DeleteCodeRepositoryRequest &request)
{
    return qobject_cast<DeleteCodeRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteContextResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 */
DeleteContextResponse * SageMakerClient::deleteContext(const DeleteContextRequest &request)
{
    return qobject_cast<DeleteContextResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteDataQualityJobDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a data quality monitoring job
 */
DeleteDataQualityJobDefinitionResponse * SageMakerClient::deleteDataQualityJobDefinition(const DeleteDataQualityJobDefinitionRequest &request)
{
    return qobject_cast<DeleteDataQualityJobDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteDeviceFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteDeviceFleetResponse * SageMakerClient::deleteDeviceFleet(const DeleteDeviceFleetRequest &request)
{
    return qobject_cast<DeleteDeviceFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used to delete a domain. If you onboarded with IAM mode, you will need to delete your domain to onboard again using SSO.
 * Use with caution. All of the members of the domain will lose access to their EFS volume, including data, notebooks, and
 * other artifacts.
 */
DeleteDomainResponse * SageMakerClient::deleteDomain(const DeleteDomainRequest &request)
{
    return qobject_cast<DeleteDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an endpoint. Amazon SageMaker frees up all of the resources that were deployed when the endpoint was created.
 *
 * </p
 *
 * Amazon SageMaker retires any custom KMS key grants associated with the endpoint, meaning you don't need to use the <a
 * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_RevokeGrant.html">RevokeGrant</a> API
 */
DeleteEndpointResponse * SageMakerClient::deleteEndpoint(const DeleteEndpointRequest &request)
{
    return qobject_cast<DeleteEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteEndpointConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an endpoint configuration. The <code>DeleteEndpointConfig</code> API deletes only the specified configuration.
 * It does not delete endpoints created using the configuration.
 *
 * </p
 *
 * You must not delete an <code>EndpointConfig</code> in use by an endpoint that is live or while the
 * <code>UpdateEndpoint</code> or <code>CreateEndpoint</code> operations are being performed on the endpoint. If you delete
 * the <code>EndpointConfig</code> of an endpoint that is active or being created or updated you may lose visibility into
 * the instance type the endpoint is using. The endpoint must be deleted in order to stop incurring
 */
DeleteEndpointConfigResponse * SageMakerClient::deleteEndpointConfig(const DeleteEndpointConfigRequest &request)
{
    return qobject_cast<DeleteEndpointConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteExperimentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an SageMaker experiment. All trials associated with the experiment must be deleted first. Use the
 * <a>ListTrials</a> API to get a list of the trials associated with the
 */
DeleteExperimentResponse * SageMakerClient::deleteExperiment(const DeleteExperimentRequest &request)
{
    return qobject_cast<DeleteExperimentResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteFeatureGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete the <code>FeatureGroup</code> and any data that was written to the <code>OnlineStore</code> of the
 * <code>FeatureGroup</code>. Data cannot be accessed from the <code>OnlineStore</code> immediately after
 * <code>DeleteFeatureGroup</code> is called.
 *
 * </p
 *
 * Data written into the <code>OfflineStore</code> will not be deleted. The AWS Glue database and tables that are
 * automatically created for your <code>OfflineStore</code> are not deleted.
 */
DeleteFeatureGroupResponse * SageMakerClient::deleteFeatureGroup(const DeleteFeatureGroupRequest &request)
{
    return qobject_cast<DeleteFeatureGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteFlowDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified flow
 */
DeleteFlowDefinitionResponse * SageMakerClient::deleteFlowDefinition(const DeleteFlowDefinitionRequest &request)
{
    return qobject_cast<DeleteFlowDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteHumanTaskUiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this operation to delete a human task user interface (worker task
 *
 * template)>
 *
 * To see a list of human task user interfaces (work task templates) in your account, use . When you delete a worker task
 * template, it no longer appears when you call
 */
DeleteHumanTaskUiResponse * SageMakerClient::deleteHumanTaskUi(const DeleteHumanTaskUiRequest &request)
{
    return qobject_cast<DeleteHumanTaskUiResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a SageMaker image and all versions of the image. The container images aren't
 */
DeleteImageResponse * SageMakerClient::deleteImage(const DeleteImageRequest &request)
{
    return qobject_cast<DeleteImageResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteImageVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a version of a SageMaker image. The container image the version represents isn't
 */
DeleteImageVersionResponse * SageMakerClient::deleteImageVersion(const DeleteImageVersionRequest &request)
{
    return qobject_cast<DeleteImageVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a model. The <code>DeleteModel</code> API deletes only the model entry that was created in Amazon SageMaker when
 * you called the <a>CreateModel</a> API. It does not delete model artifacts, inference code, or the IAM role that you
 * specified when creating the model.
 */
DeleteModelResponse * SageMakerClient::deleteModel(const DeleteModelRequest &request)
{
    return qobject_cast<DeleteModelResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteModelBiasJobDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon SageMaker model bias job
 */
DeleteModelBiasJobDefinitionResponse * SageMakerClient::deleteModelBiasJobDefinition(const DeleteModelBiasJobDefinitionRequest &request)
{
    return qobject_cast<DeleteModelBiasJobDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteModelExplainabilityJobDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon SageMaker model explainability job
 */
DeleteModelExplainabilityJobDefinitionResponse * SageMakerClient::deleteModelExplainabilityJobDefinition(const DeleteModelExplainabilityJobDefinitionRequest &request)
{
    return qobject_cast<DeleteModelExplainabilityJobDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteModelPackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a model
 *
 * package>
 *
 * A model package is used to create Amazon SageMaker models or list on AWS Marketplace. Buyers can subscribe to model
 * packages listed on AWS Marketplace to create models in Amazon
 */
DeleteModelPackageResponse * SageMakerClient::deleteModelPackage(const DeleteModelPackageRequest &request)
{
    return qobject_cast<DeleteModelPackageResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteModelPackageGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified model
 */
DeleteModelPackageGroupResponse * SageMakerClient::deleteModelPackageGroup(const DeleteModelPackageGroupRequest &request)
{
    return qobject_cast<DeleteModelPackageGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteModelPackageGroupPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a model group resource
 */
DeleteModelPackageGroupPolicyResponse * SageMakerClient::deleteModelPackageGroupPolicy(const DeleteModelPackageGroupPolicyRequest &request)
{
    return qobject_cast<DeleteModelPackageGroupPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteModelQualityJobDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the secified model quality monitoring job
 */
DeleteModelQualityJobDefinitionResponse * SageMakerClient::deleteModelQualityJobDefinition(const DeleteModelQualityJobDefinitionRequest &request)
{
    return qobject_cast<DeleteModelQualityJobDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteMonitoringScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a monitoring schedule. Also stops the schedule had not already been stopped. This does not delete the job
 * execution history of the monitoring schedule.
 */
DeleteMonitoringScheduleResponse * SageMakerClient::deleteMonitoringSchedule(const DeleteMonitoringScheduleRequest &request)
{
    return qobject_cast<DeleteMonitoringScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteNotebookInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon SageMaker notebook instance. Before you can delete a notebook instance, you must call the
 * <code>StopNotebookInstance</code> API.
 *
 * </p <b>
 *
 * When you delete a notebook instance, you lose all of your data. Amazon SageMaker removes the ML compute instance, and
 * deletes the ML storage volume and the network interface associated with the notebook instance.
 */
DeleteNotebookInstanceResponse * SageMakerClient::deleteNotebookInstance(const DeleteNotebookInstanceRequest &request)
{
    return qobject_cast<DeleteNotebookInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteNotebookInstanceLifecycleConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a notebook instance lifecycle
 */
DeleteNotebookInstanceLifecycleConfigResponse * SageMakerClient::deleteNotebookInstanceLifecycleConfig(const DeleteNotebookInstanceLifecycleConfigRequest &request)
{
    return qobject_cast<DeleteNotebookInstanceLifecycleConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeletePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a pipeline if there are no running instances of the pipeline. To delete a pipeline, you must stop all running
 * instances of the pipeline using the <code>StopPipelineExecution</code> API. When you delete a pipeline, all instances of
 * the pipeline are
 */
DeletePipelineResponse * SageMakerClient::deletePipeline(const DeletePipelineRequest &request)
{
    return qobject_cast<DeletePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete the specified
 */
DeleteProjectResponse * SageMakerClient::deleteProject(const DeleteProjectRequest &request)
{
    return qobject_cast<DeleteProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified tags from an Amazon SageMaker
 *
 * resource>
 *
 * To list a resource's tags, use the <code>ListTags</code> API.
 *
 * </p <note>
 *
 * When you call this API to delete tags from a hyperparameter tuning job, the deleted tags are not removed from training
 * jobs that the hyperparameter tuning job launched before you called this
 *
 * API> </note> <note>
 *
 * When you call this API to delete tags from a SageMaker Studio Domain or User Profile, the deleted tags are not removed
 * from Apps that the SageMaker Studio Domain or User Profile launched before you called this
 */
DeleteTagsResponse * SageMakerClient::deleteTags(const DeleteTagsRequest &request)
{
    return qobject_cast<DeleteTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteTrialResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified trial. All trial components that make up the trial must be deleted first. Use the
 * <a>DescribeTrialComponent</a> API to get the list of trial
 */
DeleteTrialResponse * SageMakerClient::deleteTrial(const DeleteTrialRequest &request)
{
    return qobject_cast<DeleteTrialResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteTrialComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified trial component. A trial component must be disassociated from all trials before the trial
 * component can be deleted. To disassociate a trial component from a trial, call the <a>DisassociateTrialComponent</a>
 */
DeleteTrialComponentResponse * SageMakerClient::deleteTrialComponent(const DeleteTrialComponentRequest &request)
{
    return qobject_cast<DeleteTrialComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteUserProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a user profile. When a user profile is deleted, the user loses access to their EFS volume, including data,
 * notebooks, and other
 */
DeleteUserProfileResponse * SageMakerClient::deleteUserProfile(const DeleteUserProfileRequest &request)
{
    return qobject_cast<DeleteUserProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteWorkforceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this operation to delete a
 *
 * workforce>
 *
 * If you want to create a new workforce in an AWS Region where a workforce already exists, use this operation to delete
 * the existing workforce and then use to create a new
 *
 * workforce> <b>
 *
 * If a private workforce contains one or more work teams, you must use the operation to delete all work teams before you
 * delete the workforce. If you try to delete a workforce that contains one or more work teams, you will recieve a
 * <code>ResourceInUse</code>
 */
DeleteWorkforceResponse * SageMakerClient::deleteWorkforce(const DeleteWorkforceRequest &request)
{
    return qobject_cast<DeleteWorkforceResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeleteWorkteamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing work team. This operation can't be
 */
DeleteWorkteamResponse * SageMakerClient::deleteWorkteam(const DeleteWorkteamRequest &request)
{
    return qobject_cast<DeleteWorkteamResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DeregisterDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters the specified devices. After you deregister a device, you will need to re-register the
 */
DeregisterDevicesResponse * SageMakerClient::deregisterDevices(const DeregisterDevicesRequest &request)
{
    return qobject_cast<DeregisterDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an
 */
DescribeActionResponse * SageMakerClient::describeAction(const DescribeActionRequest &request)
{
    return qobject_cast<DescribeActionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeAlgorithmResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of the specified algorithm that is in your
 */
DescribeAlgorithmResponse * SageMakerClient::describeAlgorithm(const DescribeAlgorithmRequest &request)
{
    return qobject_cast<DescribeAlgorithmResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the
 */
DescribeAppResponse * SageMakerClient::describeApp(const DescribeAppRequest &request)
{
    return qobject_cast<DescribeAppResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeAppImageConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an
 */
DescribeAppImageConfigResponse * SageMakerClient::describeAppImageConfig(const DescribeAppImageConfigRequest &request)
{
    return qobject_cast<DescribeAppImageConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeArtifactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an
 */
DescribeArtifactResponse * SageMakerClient::describeArtifact(const DescribeArtifactRequest &request)
{
    return qobject_cast<DescribeArtifactResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeAutoMLJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about an Amazon SageMaker AutoML
 */
DescribeAutoMLJobResponse * SageMakerClient::describeAutoMLJob(const DescribeAutoMLJobRequest &request)
{
    return qobject_cast<DescribeAutoMLJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeCodeRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details about the specified Git
 */
DescribeCodeRepositoryResponse * SageMakerClient::describeCodeRepository(const DescribeCodeRepositoryRequest &request)
{
    return qobject_cast<DescribeCodeRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeCompilationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a model compilation
 *
 * job>
 *
 * To create a model compilation job, use <a>CreateCompilationJob</a>. To get information about multiple model compilation
 * jobs, use
 */
DescribeCompilationJobResponse * SageMakerClient::describeCompilationJob(const DescribeCompilationJobRequest &request)
{
    return qobject_cast<DescribeCompilationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeContextResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a
 */
DescribeContextResponse * SageMakerClient::describeContext(const DescribeContextRequest &request)
{
    return qobject_cast<DescribeContextResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeDataQualityJobDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the details of a data quality monitoring job
 */
DescribeDataQualityJobDefinitionResponse * SageMakerClient::describeDataQualityJobDefinition(const DescribeDataQualityJobDefinitionRequest &request)
{
    return qobject_cast<DescribeDataQualityJobDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the
 */
DescribeDeviceResponse * SageMakerClient::describeDevice(const DescribeDeviceRequest &request)
{
    return qobject_cast<DescribeDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeDeviceFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A description of the fleet the device belongs
 */
DescribeDeviceFleetResponse * SageMakerClient::describeDeviceFleet(const DescribeDeviceFleetRequest &request)
{
    return qobject_cast<DescribeDeviceFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The description of the
 */
DescribeDomainResponse * SageMakerClient::describeDomain(const DescribeDomainRequest &request)
{
    return qobject_cast<DescribeDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeEdgePackagingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A description of edge packaging
 */
DescribeEdgePackagingJobResponse * SageMakerClient::describeEdgePackagingJob(const DescribeEdgePackagingJobRequest &request)
{
    return qobject_cast<DescribeEdgePackagingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the description of an
 */
DescribeEndpointResponse * SageMakerClient::describeEndpoint(const DescribeEndpointRequest &request)
{
    return qobject_cast<DescribeEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeEndpointConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the description of an endpoint configuration created using the <code>CreateEndpointConfig</code>
 */
DescribeEndpointConfigResponse * SageMakerClient::describeEndpointConfig(const DescribeEndpointConfigRequest &request)
{
    return qobject_cast<DescribeEndpointConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeExperimentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of an experiment's
 */
DescribeExperimentResponse * SageMakerClient::describeExperiment(const DescribeExperimentRequest &request)
{
    return qobject_cast<DescribeExperimentResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeFeatureGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this operation to describe a <code>FeatureGroup</code>. The response includes information on the creation time,
 * <code>FeatureGroup</code> name, the unique identifier for each <code>FeatureGroup</code>, and
 */
DescribeFeatureGroupResponse * SageMakerClient::describeFeatureGroup(const DescribeFeatureGroupRequest &request)
{
    return qobject_cast<DescribeFeatureGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeFlowDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified flow
 */
DescribeFlowDefinitionResponse * SageMakerClient::describeFlowDefinition(const DescribeFlowDefinitionRequest &request)
{
    return qobject_cast<DescribeFlowDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeHumanTaskUiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the requested human task user interface (worker task
 */
DescribeHumanTaskUiResponse * SageMakerClient::describeHumanTaskUi(const DescribeHumanTaskUiRequest &request)
{
    return qobject_cast<DescribeHumanTaskUiResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeHyperParameterTuningJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a description of a hyperparameter tuning
 */
DescribeHyperParameterTuningJobResponse * SageMakerClient::describeHyperParameterTuningJob(const DescribeHyperParameterTuningJobRequest &request)
{
    return qobject_cast<DescribeHyperParameterTuningJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a SageMaker
 */
DescribeImageResponse * SageMakerClient::describeImage(const DescribeImageRequest &request)
{
    return qobject_cast<DescribeImageResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeImageVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a version of a SageMaker
 */
DescribeImageVersionResponse * SageMakerClient::describeImageVersion(const DescribeImageVersionRequest &request)
{
    return qobject_cast<DescribeImageVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeLabelingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a labeling
 */
DescribeLabelingJobResponse * SageMakerClient::describeLabelingJob(const DescribeLabelingJobRequest &request)
{
    return qobject_cast<DescribeLabelingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeModelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a model that you created using the <code>CreateModel</code>
 */
DescribeModelResponse * SageMakerClient::describeModel(const DescribeModelRequest &request)
{
    return qobject_cast<DescribeModelResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeModelBiasJobDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of a model bias job
 */
DescribeModelBiasJobDefinitionResponse * SageMakerClient::describeModelBiasJobDefinition(const DescribeModelBiasJobDefinitionRequest &request)
{
    return qobject_cast<DescribeModelBiasJobDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeModelExplainabilityJobDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of a model explainability job
 */
DescribeModelExplainabilityJobDefinitionResponse * SageMakerClient::describeModelExplainabilityJobDefinition(const DescribeModelExplainabilityJobDefinitionRequest &request)
{
    return qobject_cast<DescribeModelExplainabilityJobDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeModelPackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of the specified model package, which is used to create Amazon SageMaker models or list them on
 * AWS
 *
 * Marketplace>
 *
 * To create models in Amazon SageMaker, buyers can subscribe to model packages listed on AWS
 */
DescribeModelPackageResponse * SageMakerClient::describeModelPackage(const DescribeModelPackageRequest &request)
{
    return qobject_cast<DescribeModelPackageResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeModelPackageGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a description for the specified model
 */
DescribeModelPackageGroupResponse * SageMakerClient::describeModelPackageGroup(const DescribeModelPackageGroupRequest &request)
{
    return qobject_cast<DescribeModelPackageGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeModelQualityJobDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of a model quality job
 */
DescribeModelQualityJobDefinitionResponse * SageMakerClient::describeModelQualityJobDefinition(const DescribeModelQualityJobDefinitionRequest &request)
{
    return qobject_cast<DescribeModelQualityJobDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeMonitoringScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the schedule for a monitoring
 */
DescribeMonitoringScheduleResponse * SageMakerClient::describeMonitoringSchedule(const DescribeMonitoringScheduleRequest &request)
{
    return qobject_cast<DescribeMonitoringScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeNotebookInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a notebook
 */
DescribeNotebookInstanceResponse * SageMakerClient::describeNotebookInstance(const DescribeNotebookInstanceRequest &request)
{
    return qobject_cast<DescribeNotebookInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeNotebookInstanceLifecycleConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of a notebook instance lifecycle
 *
 * configuration>
 *
 * For information about notebook instance lifestyle configurations, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step 2.1: (Optional) Customize a
 * Notebook
 */
DescribeNotebookInstanceLifecycleConfigResponse * SageMakerClient::describeNotebookInstanceLifecycleConfig(const DescribeNotebookInstanceLifecycleConfigRequest &request)
{
    return qobject_cast<DescribeNotebookInstanceLifecycleConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the details of a
 */
DescribePipelineResponse * SageMakerClient::describePipeline(const DescribePipelineRequest &request)
{
    return qobject_cast<DescribePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribePipelineDefinitionForExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the details of an execution's pipeline
 */
DescribePipelineDefinitionForExecutionResponse * SageMakerClient::describePipelineDefinitionForExecution(const DescribePipelineDefinitionForExecutionRequest &request)
{
    return qobject_cast<DescribePipelineDefinitionForExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribePipelineExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the details of a pipeline
 */
DescribePipelineExecutionResponse * SageMakerClient::describePipelineExecution(const DescribePipelineExecutionRequest &request)
{
    return qobject_cast<DescribePipelineExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeProcessingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of a processing
 */
DescribeProcessingJobResponse * SageMakerClient::describeProcessingJob(const DescribeProcessingJobRequest &request)
{
    return qobject_cast<DescribeProcessingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the details of a
 */
DescribeProjectResponse * SageMakerClient::describeProject(const DescribeProjectRequest &request)
{
    return qobject_cast<DescribeProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeSubscribedWorkteamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a work team provided by a vendor. It returns details about the subscription with a vendor in the
 * AWS
 */
DescribeSubscribedWorkteamResponse * SageMakerClient::describeSubscribedWorkteam(const DescribeSubscribedWorkteamRequest &request)
{
    return qobject_cast<DescribeSubscribedWorkteamResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeTrainingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a training job.
 *
 * </p
 *
 * Some of the attributes below only appear if the training job successfully starts. If the training job fails,
 * <code>TrainingJobStatus</code> is <code>Failed</code> and, depending on the <code>FailureReason</code>, attributes like
 * <code>TrainingStartTime</code>, <code>TrainingTimeInSeconds</code>, <code>TrainingEndTime</code>, and
 * <code>BillableTimeInSeconds</code> may not be present in the
 */
DescribeTrainingJobResponse * SageMakerClient::describeTrainingJob(const DescribeTrainingJobRequest &request)
{
    return qobject_cast<DescribeTrainingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeTransformJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a transform
 */
DescribeTransformJobResponse * SageMakerClient::describeTransformJob(const DescribeTransformJobRequest &request)
{
    return qobject_cast<DescribeTransformJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeTrialResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of a trial's
 */
DescribeTrialResponse * SageMakerClient::describeTrial(const DescribeTrialRequest &request)
{
    return qobject_cast<DescribeTrialResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeTrialComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of a trials component's
 */
DescribeTrialComponentResponse * SageMakerClient::describeTrialComponent(const DescribeTrialComponentRequest &request)
{
    return qobject_cast<DescribeTrialComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeUserProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a user profile. For more information, see
 */
DescribeUserProfileResponse * SageMakerClient::describeUserProfile(const DescribeUserProfileRequest &request)
{
    return qobject_cast<DescribeUserProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeWorkforceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists private workforce information, including workforce name, Amazon Resource Name (ARN), and, if applicable, allowed
 * IP address ranges (<a href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>). Allowable IP
 * address ranges are the IP addresses that workers can use to access tasks.
 *
 * </p <b>
 *
 * This operation applies only to private
 */
DescribeWorkforceResponse * SageMakerClient::describeWorkforce(const DescribeWorkforceRequest &request)
{
    return qobject_cast<DescribeWorkforceResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DescribeWorkteamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specific work team. You can see information such as the create date, the last updated date,
 * membership information, and the work team's Amazon Resource Name
 */
DescribeWorkteamResponse * SageMakerClient::describeWorkteam(const DescribeWorkteamRequest &request)
{
    return qobject_cast<DescribeWorkteamResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DisableSagemakerServicecatalogPortfolioResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables using Service Catalog in SageMaker. Service Catalog is used to create SageMaker
 */
DisableSagemakerServicecatalogPortfolioResponse * SageMakerClient::disableSagemakerServicecatalogPortfolio(const DisableSagemakerServicecatalogPortfolioRequest &request)
{
    return qobject_cast<DisableSagemakerServicecatalogPortfolioResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * DisassociateTrialComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a trial component from a trial. This doesn't effect other trials the component is associated with. Before
 * you can delete a component, you must disassociate the component from all trials it is associated with. To associate a
 * trial component with a trial, call the <a>AssociateTrialComponent</a>
 *
 * API>
 *
 * To get a list of the trials a component is associated with, use the <a>Search</a> API. Specify
 * <code>ExperimentTrialComponent</code> for the <code>Resource</code> parameter. The list appears in the response under
 */
DisassociateTrialComponentResponse * SageMakerClient::disassociateTrialComponent(const DisassociateTrialComponentRequest &request)
{
    return qobject_cast<DisassociateTrialComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * EnableSagemakerServicecatalogPortfolioResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables using Service Catalog in SageMaker. Service Catalog is used to create SageMaker
 */
EnableSagemakerServicecatalogPortfolioResponse * SageMakerClient::enableSagemakerServicecatalogPortfolio(const EnableSagemakerServicecatalogPortfolioRequest &request)
{
    return qobject_cast<EnableSagemakerServicecatalogPortfolioResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * GetDeviceFleetReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a
 */
GetDeviceFleetReportResponse * SageMakerClient::getDeviceFleetReport(const GetDeviceFleetReportRequest &request)
{
    return qobject_cast<GetDeviceFleetReportResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * GetModelPackageGroupPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a resource policy that manages access for a model group. For information about resource policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_identity-vs-resource.html">Identity-based
 * policies and resource-based policies</a> in the <i>AWS Identity and Access Management User
 */
GetModelPackageGroupPolicyResponse * SageMakerClient::getModelPackageGroupPolicy(const GetModelPackageGroupPolicyRequest &request)
{
    return qobject_cast<GetModelPackageGroupPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * GetSagemakerServicecatalogPortfolioStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the status of Service Catalog in SageMaker. Service Catalog is used to create SageMaker
 */
GetSagemakerServicecatalogPortfolioStatusResponse * SageMakerClient::getSagemakerServicecatalogPortfolioStatus(const GetSagemakerServicecatalogPortfolioStatusRequest &request)
{
    return qobject_cast<GetSagemakerServicecatalogPortfolioStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * GetSearchSuggestionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * An auto-complete API for the search functionality in the Amazon SageMaker console. It returns suggestions of possible
 * matches for the property name to use in <code>Search</code> queries. Provides suggestions for
 * <code>HyperParameters</code>, <code>Tags</code>, and
 */
GetSearchSuggestionsResponse * SageMakerClient::getSearchSuggestions(const GetSearchSuggestionsRequest &request)
{
    return qobject_cast<GetSearchSuggestionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the actions in your account and their
 */
ListActionsResponse * SageMakerClient::listActions(const ListActionsRequest &request)
{
    return qobject_cast<ListActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListAlgorithmsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the machine learning algorithms that have been
 */
ListAlgorithmsResponse * SageMakerClient::listAlgorithms(const ListAlgorithmsRequest &request)
{
    return qobject_cast<ListAlgorithmsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListAppImageConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the AppImageConfigs in your account and their properties. The list can be filtered by creation time or modified
 * time, and whether the AppImageConfig name contains a specified
 */
ListAppImageConfigsResponse * SageMakerClient::listAppImageConfigs(const ListAppImageConfigsRequest &request)
{
    return qobject_cast<ListAppImageConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListAppsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists
 */
ListAppsResponse * SageMakerClient::listApps(const ListAppsRequest &request)
{
    return qobject_cast<ListAppsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListArtifactsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the artifacts in your account and their
 */
ListArtifactsResponse * SageMakerClient::listArtifacts(const ListArtifactsRequest &request)
{
    return qobject_cast<ListArtifactsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the associations in your account and their
 */
ListAssociationsResponse * SageMakerClient::listAssociations(const ListAssociationsRequest &request)
{
    return qobject_cast<ListAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListAutoMLJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Request a list of
 */
ListAutoMLJobsResponse * SageMakerClient::listAutoMLJobs(const ListAutoMLJobsRequest &request)
{
    return qobject_cast<ListAutoMLJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListCandidatesForAutoMLJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the candidates created for the
 */
ListCandidatesForAutoMLJobResponse * SageMakerClient::listCandidatesForAutoMLJob(const ListCandidatesForAutoMLJobRequest &request)
{
    return qobject_cast<ListCandidatesForAutoMLJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListCodeRepositoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the Git repositories in your
 */
ListCodeRepositoriesResponse * SageMakerClient::listCodeRepositories(const ListCodeRepositoriesRequest &request)
{
    return qobject_cast<ListCodeRepositoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListCompilationJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists model compilation jobs that satisfy various
 *
 * filters>
 *
 * To create a model compilation job, use <a>CreateCompilationJob</a>. To get information about a particular model
 * compilation job you have created, use
 */
ListCompilationJobsResponse * SageMakerClient::listCompilationJobs(const ListCompilationJobsRequest &request)
{
    return qobject_cast<ListCompilationJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListContextsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the contexts in your account and their
 */
ListContextsResponse * SageMakerClient::listContexts(const ListContextsRequest &request)
{
    return qobject_cast<ListContextsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListDataQualityJobDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the data quality job definitions in your
 */
ListDataQualityJobDefinitionsResponse * SageMakerClient::listDataQualityJobDefinitions(const ListDataQualityJobDefinitionsRequest &request)
{
    return qobject_cast<ListDataQualityJobDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListDeviceFleetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of devices in the
 */
ListDeviceFleetsResponse * SageMakerClient::listDeviceFleets(const ListDeviceFleetsRequest &request)
{
    return qobject_cast<ListDeviceFleetsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A list of
 */
ListDevicesResponse * SageMakerClient::listDevices(const ListDevicesRequest &request)
{
    return qobject_cast<ListDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListDomainsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the
 */
ListDomainsResponse * SageMakerClient::listDomains(const ListDomainsRequest &request)
{
    return qobject_cast<ListDomainsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListEdgePackagingJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of edge packaging
 */
ListEdgePackagingJobsResponse * SageMakerClient::listEdgePackagingJobs(const ListEdgePackagingJobsRequest &request)
{
    return qobject_cast<ListEdgePackagingJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListEndpointConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists endpoint
 */
ListEndpointConfigsResponse * SageMakerClient::listEndpointConfigs(const ListEndpointConfigsRequest &request)
{
    return qobject_cast<ListEndpointConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists
 */
ListEndpointsResponse * SageMakerClient::listEndpoints(const ListEndpointsRequest &request)
{
    return qobject_cast<ListEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListExperimentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the experiments in your account. The list can be filtered to show only experiments that were created in a
 * specific time range. The list can be sorted by experiment name or creation
 */
ListExperimentsResponse * SageMakerClient::listExperiments(const ListExperimentsRequest &request)
{
    return qobject_cast<ListExperimentsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListFeatureGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List <code>FeatureGroup</code>s based on given filter and
 */
ListFeatureGroupsResponse * SageMakerClient::listFeatureGroups(const ListFeatureGroupsRequest &request)
{
    return qobject_cast<ListFeatureGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListFlowDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the flow definitions in your
 */
ListFlowDefinitionsResponse * SageMakerClient::listFlowDefinitions(const ListFlowDefinitionsRequest &request)
{
    return qobject_cast<ListFlowDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListHumanTaskUisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the human task user interfaces in your
 */
ListHumanTaskUisResponse * SageMakerClient::listHumanTaskUis(const ListHumanTaskUisRequest &request)
{
    return qobject_cast<ListHumanTaskUisResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListHyperParameterTuningJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of <a>HyperParameterTuningJobSummary</a> objects that describe the hyperparameter tuning jobs launched in
 * your
 */
ListHyperParameterTuningJobsResponse * SageMakerClient::listHyperParameterTuningJobs(const ListHyperParameterTuningJobsRequest &request)
{
    return qobject_cast<ListHyperParameterTuningJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListImageVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the versions of a specified image and their properties. The list can be filtered by creation time or modified
 */
ListImageVersionsResponse * SageMakerClient::listImageVersions(const ListImageVersionsRequest &request)
{
    return qobject_cast<ListImageVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the images in your account and their properties. The list can be filtered by creation time or modified time, and
 * whether the image name contains a specified
 */
ListImagesResponse * SageMakerClient::listImages(const ListImagesRequest &request)
{
    return qobject_cast<ListImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListLabelingJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of labeling
 */
ListLabelingJobsResponse * SageMakerClient::listLabelingJobs(const ListLabelingJobsRequest &request)
{
    return qobject_cast<ListLabelingJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListLabelingJobsForWorkteamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of labeling jobs assigned to a specified work
 */
ListLabelingJobsForWorkteamResponse * SageMakerClient::listLabelingJobsForWorkteam(const ListLabelingJobsForWorkteamRequest &request)
{
    return qobject_cast<ListLabelingJobsForWorkteamResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListModelBiasJobDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists model bias jobs definitions that satisfy various
 */
ListModelBiasJobDefinitionsResponse * SageMakerClient::listModelBiasJobDefinitions(const ListModelBiasJobDefinitionsRequest &request)
{
    return qobject_cast<ListModelBiasJobDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListModelExplainabilityJobDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists model explainability job definitions that satisfy various
 */
ListModelExplainabilityJobDefinitionsResponse * SageMakerClient::listModelExplainabilityJobDefinitions(const ListModelExplainabilityJobDefinitionsRequest &request)
{
    return qobject_cast<ListModelExplainabilityJobDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListModelPackageGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the model groups in your AWS
 */
ListModelPackageGroupsResponse * SageMakerClient::listModelPackageGroups(const ListModelPackageGroupsRequest &request)
{
    return qobject_cast<ListModelPackageGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListModelPackagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the model packages that have been
 */
ListModelPackagesResponse * SageMakerClient::listModelPackages(const ListModelPackagesRequest &request)
{
    return qobject_cast<ListModelPackagesResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListModelQualityJobDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of model quality monitoring job definitions in your
 */
ListModelQualityJobDefinitionsResponse * SageMakerClient::listModelQualityJobDefinitions(const ListModelQualityJobDefinitionsRequest &request)
{
    return qobject_cast<ListModelQualityJobDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListModelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists models created with the <a>CreateModel</a>
 */
ListModelsResponse * SageMakerClient::listModels(const ListModelsRequest &request)
{
    return qobject_cast<ListModelsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListMonitoringExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns list of all monitoring job
 */
ListMonitoringExecutionsResponse * SageMakerClient::listMonitoringExecutions(const ListMonitoringExecutionsRequest &request)
{
    return qobject_cast<ListMonitoringExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListMonitoringSchedulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns list of all monitoring
 */
ListMonitoringSchedulesResponse * SageMakerClient::listMonitoringSchedules(const ListMonitoringSchedulesRequest &request)
{
    return qobject_cast<ListMonitoringSchedulesResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListNotebookInstanceLifecycleConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists notebook instance lifestyle configurations created with the <a>CreateNotebookInstanceLifecycleConfig</a>
 */
ListNotebookInstanceLifecycleConfigsResponse * SageMakerClient::listNotebookInstanceLifecycleConfigs(const ListNotebookInstanceLifecycleConfigsRequest &request)
{
    return qobject_cast<ListNotebookInstanceLifecycleConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListNotebookInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the Amazon SageMaker notebook instances in the requester's account in an AWS Region.
 */
ListNotebookInstancesResponse * SageMakerClient::listNotebookInstances(const ListNotebookInstancesRequest &request)
{
    return qobject_cast<ListNotebookInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListPipelineExecutionStepsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of <code>PipeLineExecutionStep</code>
 */
ListPipelineExecutionStepsResponse * SageMakerClient::listPipelineExecutionSteps(const ListPipelineExecutionStepsRequest &request)
{
    return qobject_cast<ListPipelineExecutionStepsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListPipelineExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the pipeline
 */
ListPipelineExecutionsResponse * SageMakerClient::listPipelineExecutions(const ListPipelineExecutionsRequest &request)
{
    return qobject_cast<ListPipelineExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListPipelineParametersForExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of parameters for a pipeline
 */
ListPipelineParametersForExecutionResponse * SageMakerClient::listPipelineParametersForExecution(const ListPipelineParametersForExecutionRequest &request)
{
    return qobject_cast<ListPipelineParametersForExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListPipelinesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of
 */
ListPipelinesResponse * SageMakerClient::listPipelines(const ListPipelinesRequest &request)
{
    return qobject_cast<ListPipelinesResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListProcessingJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists processing jobs that satisfy various
 */
ListProcessingJobsResponse * SageMakerClient::listProcessingJobs(const ListProcessingJobsRequest &request)
{
    return qobject_cast<ListProcessingJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListProjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the projects in an AWS
 */
ListProjectsResponse * SageMakerClient::listProjects(const ListProjectsRequest &request)
{
    return qobject_cast<ListProjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListSubscribedWorkteamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the work teams that you are subscribed to in the AWS Marketplace. The list may be empty if no work team
 * satisfies the filter specified in the <code>NameContains</code>
 */
ListSubscribedWorkteamsResponse * SageMakerClient::listSubscribedWorkteams(const ListSubscribedWorkteamsRequest &request)
{
    return qobject_cast<ListSubscribedWorkteamsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the tags for the specified Amazon SageMaker
 */
ListTagsResponse * SageMakerClient::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListTrainingJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists training
 *
 * jobs> <note>
 *
 * When <code>StatusEquals</code> and <code>MaxResults</code> are set at the same time, the <code>MaxResults</code> number
 * of training jobs are first retrieved ignoring the <code>StatusEquals</code> parameter and then they are filtered by the
 * <code>StatusEquals</code> parameter, which is returned as a
 *
 * response>
 *
 * For example, if <code>ListTrainingJobs</code> is invoked with the following
 *
 * parameters>
 *
 * <code>{ ... MaxResults: 100, StatusEquals: InProgress ... }</code>
 *
 * </p
 *
 * First, 100 trainings jobs with any status, including those other than <code>InProgress</code>, are selected (sorted
 * according to the creation time, from the most current to the oldest). Next, those with a status of
 * <code>InProgress</code> are
 *
 * returned>
 *
 * You can quickly test the API using the following AWS CLI
 *
 * code>
 *
 * <code>aws sagemaker list-training-jobs --max-results 100 --status-equals InProgress</code>
 */
ListTrainingJobsResponse * SageMakerClient::listTrainingJobs(const ListTrainingJobsRequest &request)
{
    return qobject_cast<ListTrainingJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListTrainingJobsForHyperParameterTuningJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of <a>TrainingJobSummary</a> objects that describe the training jobs that a hyperparameter tuning job
 */
ListTrainingJobsForHyperParameterTuningJobResponse * SageMakerClient::listTrainingJobsForHyperParameterTuningJob(const ListTrainingJobsForHyperParameterTuningJobRequest &request)
{
    return qobject_cast<ListTrainingJobsForHyperParameterTuningJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListTransformJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists transform
 */
ListTransformJobsResponse * SageMakerClient::listTransformJobs(const ListTransformJobsRequest &request)
{
    return qobject_cast<ListTransformJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListTrialComponentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the trial components in your account. You can sort the list by trial component name or creation time. You can
 * filter the list to show only components that were created in a specific time range. You can also filter on one of the
 *
 * following> <ul> <li>
 *
 * <code>ExperimentName</code>
 *
 * </p </li> <li>
 *
 * <code>SourceArn</code>
 *
 * </p </li> <li>
 *
 * <code>TrialName</code>
 */
ListTrialComponentsResponse * SageMakerClient::listTrialComponents(const ListTrialComponentsRequest &request)
{
    return qobject_cast<ListTrialComponentsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListTrialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the trials in your account. Specify an experiment name to limit the list to the trials that are part of that
 * experiment. Specify a trial component name to limit the list to the trials that associated with that trial component.
 * The list can be filtered to show only trials that were created in a specific time range. The list can be sorted by trial
 * name or creation
 */
ListTrialsResponse * SageMakerClient::listTrials(const ListTrialsRequest &request)
{
    return qobject_cast<ListTrialsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListUserProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists user
 */
ListUserProfilesResponse * SageMakerClient::listUserProfiles(const ListUserProfilesRequest &request)
{
    return qobject_cast<ListUserProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListWorkforcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this operation to list all private and vendor workforces in an AWS Region. Note that you can only have one private
 * workforce per AWS
 */
ListWorkforcesResponse * SageMakerClient::listWorkforces(const ListWorkforcesRequest &request)
{
    return qobject_cast<ListWorkforcesResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * ListWorkteamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of private work teams that you have defined in a region. The list may be empty if no work team satisfies the
 * filter specified in the <code>NameContains</code>
 */
ListWorkteamsResponse * SageMakerClient::listWorkteams(const ListWorkteamsRequest &request)
{
    return qobject_cast<ListWorkteamsResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * PutModelPackageGroupPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a resouce policy to control access to a model group. For information about resoure policies, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_identity-vs-resource.html">Identity-based
 * policies and resource-based policies</a> in the <i>AWS Identity and Access Management User
 */
PutModelPackageGroupPolicyResponse * SageMakerClient::putModelPackageGroupPolicy(const PutModelPackageGroupPolicyRequest &request)
{
    return qobject_cast<PutModelPackageGroupPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * RegisterDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Register
 */
RegisterDevicesResponse * SageMakerClient::registerDevices(const RegisterDevicesRequest &request)
{
    return qobject_cast<RegisterDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * RenderUiTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Renders the UI template so that you can preview the worker's experience.
 */
RenderUiTemplateResponse * SageMakerClient::renderUiTemplate(const RenderUiTemplateRequest &request)
{
    return qobject_cast<RenderUiTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * SearchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Finds Amazon SageMaker resources that match a search query. Matching resources are returned as a list of
 * <code>SearchRecord</code> objects in the response. You can sort the search results by any resource property in a
 * ascending or descending
 *
 * order>
 *
 * You can query against the following value types: numeric, text, Boolean, and
 */
SearchResponse * SageMakerClient::search(const SearchRequest &request)
{
    return qobject_cast<SearchResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * SendPipelineExecutionStepFailureResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Notifies the pipeline that the execution of a callback step failed, along with a message describing why. When a callback
 * step is run, the pipeline generates a callback token and includes the token in a message sent to Amazon Simple Queue
 * Service (Amazon
 */
SendPipelineExecutionStepFailureResponse * SageMakerClient::sendPipelineExecutionStepFailure(const SendPipelineExecutionStepFailureRequest &request)
{
    return qobject_cast<SendPipelineExecutionStepFailureResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * SendPipelineExecutionStepSuccessResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Notifies the pipeline that the execution of a callback step succeeded and provides a list of the step's output
 * parameters. When a callback step is run, the pipeline generates a callback token and includes the token in a message
 * sent to Amazon Simple Queue Service (Amazon
 */
SendPipelineExecutionStepSuccessResponse * SageMakerClient::sendPipelineExecutionStepSuccess(const SendPipelineExecutionStepSuccessRequest &request)
{
    return qobject_cast<SendPipelineExecutionStepSuccessResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StartMonitoringScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a previously stopped monitoring
 *
 * schedule> <note>
 *
 * By default, when you successfully create a new schedule, the status of a monitoring schedule is
 */
StartMonitoringScheduleResponse * SageMakerClient::startMonitoringSchedule(const StartMonitoringScheduleRequest &request)
{
    return qobject_cast<StartMonitoringScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StartNotebookInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Launches an ML compute instance with the latest version of the libraries and attaches your ML storage volume. After
 * configuring the notebook instance, Amazon SageMaker sets the notebook instance status to <code>InService</code>. A
 * notebook instance's status must be <code>InService</code> before you can connect to your Jupyter notebook.
 */
StartNotebookInstanceResponse * SageMakerClient::startNotebookInstance(const StartNotebookInstanceRequest &request)
{
    return qobject_cast<StartNotebookInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StartPipelineExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a pipeline
 */
StartPipelineExecutionResponse * SageMakerClient::startPipelineExecution(const StartPipelineExecutionRequest &request)
{
    return qobject_cast<StartPipelineExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StopAutoMLJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A method for forcing the termination of a running
 */
StopAutoMLJobResponse * SageMakerClient::stopAutoMLJob(const StopAutoMLJobRequest &request)
{
    return qobject_cast<StopAutoMLJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StopCompilationJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a model compilation
 *
 * job>
 *
 * To stop a job, Amazon SageMaker sends the algorithm the SIGTERM signal. This gracefully shuts the job down. If the job
 * hasn't stopped, it sends the SIGKILL
 *
 * signal>
 *
 * When it receives a <code>StopCompilationJob</code> request, Amazon SageMaker changes the
 * <a>CompilationJobSummary$CompilationJobStatus</a> of the job to <code>Stopping</code>. After Amazon SageMaker stops the
 * job, it sets the <a>CompilationJobSummary$CompilationJobStatus</a> to <code>Stopped</code>.
 */
StopCompilationJobResponse * SageMakerClient::stopCompilationJob(const StopCompilationJobRequest &request)
{
    return qobject_cast<StopCompilationJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StopEdgePackagingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Request to stop an edge packaging
 */
StopEdgePackagingJobResponse * SageMakerClient::stopEdgePackagingJob(const StopEdgePackagingJobRequest &request)
{
    return qobject_cast<StopEdgePackagingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StopHyperParameterTuningJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a running hyperparameter tuning job and all running training jobs that the tuning job
 *
 * launched>
 *
 * All model artifacts output from the training jobs are stored in Amazon Simple Storage Service (Amazon S3). All data that
 * the training jobs write to Amazon CloudWatch Logs are still available in CloudWatch. After the tuning job moves to the
 * <code>Stopped</code> state, it releases all reserved resources for the tuning
 */
StopHyperParameterTuningJobResponse * SageMakerClient::stopHyperParameterTuningJob(const StopHyperParameterTuningJobRequest &request)
{
    return qobject_cast<StopHyperParameterTuningJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StopLabelingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a running labeling job. A job that is stopped cannot be restarted. Any results obtained before the job is stopped
 * are placed in the Amazon S3 output
 */
StopLabelingJobResponse * SageMakerClient::stopLabelingJob(const StopLabelingJobRequest &request)
{
    return qobject_cast<StopLabelingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StopMonitoringScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a previously started monitoring
 */
StopMonitoringScheduleResponse * SageMakerClient::stopMonitoringSchedule(const StopMonitoringScheduleRequest &request)
{
    return qobject_cast<StopMonitoringScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StopNotebookInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Terminates the ML compute instance. Before terminating the instance, Amazon SageMaker disconnects the ML storage volume
 * from it. Amazon SageMaker preserves the ML storage volume. Amazon SageMaker stops charging you for the ML compute
 * instance when you call
 *
 * <code>StopNotebookInstance</code>>
 *
 * To access data on the ML storage volume for a notebook instance that has been terminated, call the
 * <code>StartNotebookInstance</code> API. <code>StartNotebookInstance</code> launches another ML compute instance,
 * configures it, and attaches the preserved ML storage volume so you can continue your work.
 */
StopNotebookInstanceResponse * SageMakerClient::stopNotebookInstance(const StopNotebookInstanceRequest &request)
{
    return qobject_cast<StopNotebookInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StopPipelineExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a pipeline
 */
StopPipelineExecutionResponse * SageMakerClient::stopPipelineExecution(const StopPipelineExecutionRequest &request)
{
    return qobject_cast<StopPipelineExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StopProcessingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a processing
 */
StopProcessingJobResponse * SageMakerClient::stopProcessingJob(const StopProcessingJobRequest &request)
{
    return qobject_cast<StopProcessingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StopTrainingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a training job. To stop a job, Amazon SageMaker sends the algorithm the <code>SIGTERM</code> signal, which delays
 * job termination for 120 seconds. Algorithms might use this 120-second window to save the model artifacts, so the results
 * of the training is not lost.
 *
 * </p
 *
 * When it receives a <code>StopTrainingJob</code> request, Amazon SageMaker changes the status of the job to
 * <code>Stopping</code>. After Amazon SageMaker stops the job, it sets the status to
 */
StopTrainingJobResponse * SageMakerClient::stopTrainingJob(const StopTrainingJobRequest &request)
{
    return qobject_cast<StopTrainingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * StopTransformJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a transform
 *
 * job>
 *
 * When Amazon SageMaker receives a <code>StopTransformJob</code> request, the status of the job changes to
 * <code>Stopping</code>. After Amazon SageMaker stops the job, the status is set to <code>Stopped</code>. When you stop a
 * transform job before it is completed, Amazon SageMaker doesn't store the job's output in Amazon
 */
StopTransformJobResponse * SageMakerClient::stopTransformJob(const StopTransformJobRequest &request)
{
    return qobject_cast<StopTransformJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an
 */
UpdateActionResponse * SageMakerClient::updateAction(const UpdateActionRequest &request)
{
    return qobject_cast<UpdateActionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateAppImageConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the properties of an
 */
UpdateAppImageConfigResponse * SageMakerClient::updateAppImageConfig(const UpdateAppImageConfigRequest &request)
{
    return qobject_cast<UpdateAppImageConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateArtifactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an
 */
UpdateArtifactResponse * SageMakerClient::updateArtifact(const UpdateArtifactRequest &request)
{
    return qobject_cast<UpdateArtifactResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateCodeRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified Git repository with the specified
 */
UpdateCodeRepositoryResponse * SageMakerClient::updateCodeRepository(const UpdateCodeRepositoryRequest &request)
{
    return qobject_cast<UpdateCodeRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateContextResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdateContextResponse * SageMakerClient::updateContext(const UpdateContextRequest &request)
{
    return qobject_cast<UpdateContextResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateDeviceFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a fleet of
 */
UpdateDeviceFleetResponse * SageMakerClient::updateDeviceFleet(const UpdateDeviceFleetRequest &request)
{
    return qobject_cast<UpdateDeviceFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates one or more devices in a
 */
UpdateDevicesResponse * SageMakerClient::updateDevices(const UpdateDevicesRequest &request)
{
    return qobject_cast<UpdateDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the default settings for new user profiles in the
 */
UpdateDomainResponse * SageMakerClient::updateDomain(const UpdateDomainRequest &request)
{
    return qobject_cast<UpdateDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deploys the new <code>EndpointConfig</code> specified in the request, switches to using newly created endpoint, and then
 * deletes resources provisioned for the endpoint using the previous <code>EndpointConfig</code> (there is no availability
 * loss).
 *
 * </p
 *
 * When Amazon SageMaker receives the request, it sets the endpoint status to <code>Updating</code>. After updating the
 * endpoint, it sets the status to <code>InService</code>. To check the status of an endpoint, use the
 * <a>DescribeEndpoint</a> API.
 *
 * </p <note>
 *
 * You must not delete an <code>EndpointConfig</code> in use by an endpoint that is live or while the
 * <code>UpdateEndpoint</code> or <code>CreateEndpoint</code> operations are being performed on the endpoint. To update an
 * endpoint, you must create a new
 *
 * <code>EndpointConfig</code>>
 *
 * If you delete the <code>EndpointConfig</code> of an endpoint that is active or being created or updated you may lose
 * visibility into the instance type the endpoint is using. The endpoint must be deleted in order to stop incurring
 */
UpdateEndpointResponse * SageMakerClient::updateEndpoint(const UpdateEndpointRequest &request)
{
    return qobject_cast<UpdateEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateEndpointWeightsAndCapacitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates variant weight of one or more variants associated with an existing endpoint, or capacity of one variant
 * associated with an existing endpoint. When it receives the request, Amazon SageMaker sets the endpoint status to
 * <code>Updating</code>. After updating the endpoint, it sets the status to <code>InService</code>. To check the status of
 * an endpoint, use the <a>DescribeEndpoint</a> API.
 */
UpdateEndpointWeightsAndCapacitiesResponse * SageMakerClient::updateEndpointWeightsAndCapacities(const UpdateEndpointWeightsAndCapacitiesRequest &request)
{
    return qobject_cast<UpdateEndpointWeightsAndCapacitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateExperimentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds, updates, or removes the description of an experiment. Updates the display name of an
 */
UpdateExperimentResponse * SageMakerClient::updateExperiment(const UpdateExperimentRequest &request)
{
    return qobject_cast<UpdateExperimentResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the properties of a SageMaker image. To change the image's tags, use the <a>AddTags</a> and <a>DeleteTags</a>
 */
UpdateImageResponse * SageMakerClient::updateImage(const UpdateImageRequest &request)
{
    return qobject_cast<UpdateImageResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateModelPackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a versioned
 */
UpdateModelPackageResponse * SageMakerClient::updateModelPackage(const UpdateModelPackageRequest &request)
{
    return qobject_cast<UpdateModelPackageResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateMonitoringScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a previously created
 */
UpdateMonitoringScheduleResponse * SageMakerClient::updateMonitoringSchedule(const UpdateMonitoringScheduleRequest &request)
{
    return qobject_cast<UpdateMonitoringScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateNotebookInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a notebook instance. NotebookInstance updates include upgrading or downgrading the ML compute instance used for
 * your notebook instance to accommodate changes in your workload
 */
UpdateNotebookInstanceResponse * SageMakerClient::updateNotebookInstance(const UpdateNotebookInstanceRequest &request)
{
    return qobject_cast<UpdateNotebookInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateNotebookInstanceLifecycleConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a notebook instance lifecycle configuration created with the <a>CreateNotebookInstanceLifecycleConfig</a>
 */
UpdateNotebookInstanceLifecycleConfigResponse * SageMakerClient::updateNotebookInstanceLifecycleConfig(const UpdateNotebookInstanceLifecycleConfigRequest &request)
{
    return qobject_cast<UpdateNotebookInstanceLifecycleConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdatePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a
 */
UpdatePipelineResponse * SageMakerClient::updatePipeline(const UpdatePipelineRequest &request)
{
    return qobject_cast<UpdatePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdatePipelineExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a pipeline
 */
UpdatePipelineExecutionResponse * SageMakerClient::updatePipelineExecution(const UpdatePipelineExecutionRequest &request)
{
    return qobject_cast<UpdatePipelineExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateTrainingJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a model training job to request a new Debugger profiling
 */
UpdateTrainingJobResponse * SageMakerClient::updateTrainingJob(const UpdateTrainingJobRequest &request)
{
    return qobject_cast<UpdateTrainingJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateTrialResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the display name of a
 */
UpdateTrialResponse * SageMakerClient::updateTrial(const UpdateTrialRequest &request)
{
    return qobject_cast<UpdateTrialResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateTrialComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates one or more properties of a trial
 */
UpdateTrialComponentResponse * SageMakerClient::updateTrialComponent(const UpdateTrialComponentRequest &request)
{
    return qobject_cast<UpdateTrialComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateUserProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a user
 */
UpdateUserProfileResponse * SageMakerClient::updateUserProfile(const UpdateUserProfileRequest &request)
{
    return qobject_cast<UpdateUserProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateWorkforceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this operation to update your workforce. You can use this operation to require that workers use specific IP
 * addresses to work on tasks and to update your OpenID Connect (OIDC) Identity Provider (IdP) workforce
 *
 * configuration>
 *
 * Use <code>SourceIpConfig</code> to restrict worker access to tasks to a specific range of IP addresses. You specify
 * allowed IP addresses by creating a list of up to ten <a
 * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>. By default, a workforce isn't
 * restricted to specific IP addresses. If you specify a range of IP addresses, workers who attempt to access tasks using
 * any IP address outside the specified range are denied and get a <code>Not Found</code> error message on the worker
 *
 * portal>
 *
 * Use <code>OidcConfig</code> to update the configuration of a workforce created using your own OIDC IdP.
 *
 * </p <b>
 *
 * You can only update your OIDC IdP configuration when there are no work teams associated with your workforce. You can
 * delete work teams using the
 *
 * operation> </b>
 *
 * After restricting access to a range of IP addresses or updating your OIDC IdP configuration with this operation, you can
 * view details about your update workforce using the
 *
 * operation> <b>
 *
 * This operation only applies to private
 */
UpdateWorkforceResponse * SageMakerClient::updateWorkforce(const UpdateWorkforceRequest &request)
{
    return qobject_cast<UpdateWorkforceResponse *>(send(request));
}

/*!
 * Sends \a request to the SageMakerClient service, and returns a pointer to an
 * UpdateWorkteamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing work team with new member definitions or
 */
UpdateWorkteamResponse * SageMakerClient::updateWorkteam(const UpdateWorkteamRequest &request)
{
    return qobject_cast<UpdateWorkteamResponse *>(send(request));
}

/*!
 * \class QtAws::SageMaker::SageMakerClientPrivate
 * \brief The SageMakerClientPrivate class provides private implementation for SageMakerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a SageMakerClientPrivate object with public implementation \a q.
 */
SageMakerClientPrivate::SageMakerClientPrivate(SageMakerClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace SageMaker
} // namespace QtAws
