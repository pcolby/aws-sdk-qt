// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iotclient.h"
#include "iotclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptcertificatetransferrequest.h"
#include "acceptcertificatetransferresponse.h"
#include "addthingtobillinggrouprequest.h"
#include "addthingtobillinggroupresponse.h"
#include "addthingtothinggrouprequest.h"
#include "addthingtothinggroupresponse.h"
#include "associatetargetswithjobrequest.h"
#include "associatetargetswithjobresponse.h"
#include "attachpolicyrequest.h"
#include "attachpolicyresponse.h"
#include "attachprincipalpolicyrequest.h"
#include "attachprincipalpolicyresponse.h"
#include "attachsecurityprofilerequest.h"
#include "attachsecurityprofileresponse.h"
#include "attachthingprincipalrequest.h"
#include "attachthingprincipalresponse.h"
#include "cancelauditmitigationactionstaskrequest.h"
#include "cancelauditmitigationactionstaskresponse.h"
#include "cancelaudittaskrequest.h"
#include "cancelaudittaskresponse.h"
#include "cancelcertificatetransferrequest.h"
#include "cancelcertificatetransferresponse.h"
#include "canceldetectmitigationactionstaskrequest.h"
#include "canceldetectmitigationactionstaskresponse.h"
#include "canceljobrequest.h"
#include "canceljobresponse.h"
#include "canceljobexecutionrequest.h"
#include "canceljobexecutionresponse.h"
#include "cleardefaultauthorizerrequest.h"
#include "cleardefaultauthorizerresponse.h"
#include "confirmtopicruledestinationrequest.h"
#include "confirmtopicruledestinationresponse.h"
#include "createauditsuppressionrequest.h"
#include "createauditsuppressionresponse.h"
#include "createauthorizerrequest.h"
#include "createauthorizerresponse.h"
#include "createbillinggrouprequest.h"
#include "createbillinggroupresponse.h"
#include "createcertificatefromcsrrequest.h"
#include "createcertificatefromcsrresponse.h"
#include "createcustommetricrequest.h"
#include "createcustommetricresponse.h"
#include "createdimensionrequest.h"
#include "createdimensionresponse.h"
#include "createdomainconfigurationrequest.h"
#include "createdomainconfigurationresponse.h"
#include "createdynamicthinggrouprequest.h"
#include "createdynamicthinggroupresponse.h"
#include "createfleetmetricrequest.h"
#include "createfleetmetricresponse.h"
#include "createjobrequest.h"
#include "createjobresponse.h"
#include "createjobtemplaterequest.h"
#include "createjobtemplateresponse.h"
#include "createkeysandcertificaterequest.h"
#include "createkeysandcertificateresponse.h"
#include "createmitigationactionrequest.h"
#include "createmitigationactionresponse.h"
#include "createotaupdaterequest.h"
#include "createotaupdateresponse.h"
#include "createpolicyrequest.h"
#include "createpolicyresponse.h"
#include "createpolicyversionrequest.h"
#include "createpolicyversionresponse.h"
#include "createprovisioningclaimrequest.h"
#include "createprovisioningclaimresponse.h"
#include "createprovisioningtemplaterequest.h"
#include "createprovisioningtemplateresponse.h"
#include "createprovisioningtemplateversionrequest.h"
#include "createprovisioningtemplateversionresponse.h"
#include "createrolealiasrequest.h"
#include "createrolealiasresponse.h"
#include "createscheduledauditrequest.h"
#include "createscheduledauditresponse.h"
#include "createsecurityprofilerequest.h"
#include "createsecurityprofileresponse.h"
#include "createstreamrequest.h"
#include "createstreamresponse.h"
#include "createthingrequest.h"
#include "createthingresponse.h"
#include "createthinggrouprequest.h"
#include "createthinggroupresponse.h"
#include "createthingtyperequest.h"
#include "createthingtyperesponse.h"
#include "createtopicrulerequest.h"
#include "createtopicruleresponse.h"
#include "createtopicruledestinationrequest.h"
#include "createtopicruledestinationresponse.h"
#include "deleteaccountauditconfigurationrequest.h"
#include "deleteaccountauditconfigurationresponse.h"
#include "deleteauditsuppressionrequest.h"
#include "deleteauditsuppressionresponse.h"
#include "deleteauthorizerrequest.h"
#include "deleteauthorizerresponse.h"
#include "deletebillinggrouprequest.h"
#include "deletebillinggroupresponse.h"
#include "deletecacertificaterequest.h"
#include "deletecacertificateresponse.h"
#include "deletecertificaterequest.h"
#include "deletecertificateresponse.h"
#include "deletecustommetricrequest.h"
#include "deletecustommetricresponse.h"
#include "deletedimensionrequest.h"
#include "deletedimensionresponse.h"
#include "deletedomainconfigurationrequest.h"
#include "deletedomainconfigurationresponse.h"
#include "deletedynamicthinggrouprequest.h"
#include "deletedynamicthinggroupresponse.h"
#include "deletefleetmetricrequest.h"
#include "deletefleetmetricresponse.h"
#include "deletejobrequest.h"
#include "deletejobresponse.h"
#include "deletejobexecutionrequest.h"
#include "deletejobexecutionresponse.h"
#include "deletejobtemplaterequest.h"
#include "deletejobtemplateresponse.h"
#include "deletemitigationactionrequest.h"
#include "deletemitigationactionresponse.h"
#include "deleteotaupdaterequest.h"
#include "deleteotaupdateresponse.h"
#include "deletepolicyrequest.h"
#include "deletepolicyresponse.h"
#include "deletepolicyversionrequest.h"
#include "deletepolicyversionresponse.h"
#include "deleteprovisioningtemplaterequest.h"
#include "deleteprovisioningtemplateresponse.h"
#include "deleteprovisioningtemplateversionrequest.h"
#include "deleteprovisioningtemplateversionresponse.h"
#include "deleteregistrationcoderequest.h"
#include "deleteregistrationcoderesponse.h"
#include "deleterolealiasrequest.h"
#include "deleterolealiasresponse.h"
#include "deletescheduledauditrequest.h"
#include "deletescheduledauditresponse.h"
#include "deletesecurityprofilerequest.h"
#include "deletesecurityprofileresponse.h"
#include "deletestreamrequest.h"
#include "deletestreamresponse.h"
#include "deletethingrequest.h"
#include "deletethingresponse.h"
#include "deletethinggrouprequest.h"
#include "deletethinggroupresponse.h"
#include "deletethingtyperequest.h"
#include "deletethingtyperesponse.h"
#include "deletetopicrulerequest.h"
#include "deletetopicruleresponse.h"
#include "deletetopicruledestinationrequest.h"
#include "deletetopicruledestinationresponse.h"
#include "deletev2logginglevelrequest.h"
#include "deletev2logginglevelresponse.h"
#include "deprecatethingtyperequest.h"
#include "deprecatethingtyperesponse.h"
#include "describeaccountauditconfigurationrequest.h"
#include "describeaccountauditconfigurationresponse.h"
#include "describeauditfindingrequest.h"
#include "describeauditfindingresponse.h"
#include "describeauditmitigationactionstaskrequest.h"
#include "describeauditmitigationactionstaskresponse.h"
#include "describeauditsuppressionrequest.h"
#include "describeauditsuppressionresponse.h"
#include "describeaudittaskrequest.h"
#include "describeaudittaskresponse.h"
#include "describeauthorizerrequest.h"
#include "describeauthorizerresponse.h"
#include "describebillinggrouprequest.h"
#include "describebillinggroupresponse.h"
#include "describecacertificaterequest.h"
#include "describecacertificateresponse.h"
#include "describecertificaterequest.h"
#include "describecertificateresponse.h"
#include "describecustommetricrequest.h"
#include "describecustommetricresponse.h"
#include "describedefaultauthorizerrequest.h"
#include "describedefaultauthorizerresponse.h"
#include "describedetectmitigationactionstaskrequest.h"
#include "describedetectmitigationactionstaskresponse.h"
#include "describedimensionrequest.h"
#include "describedimensionresponse.h"
#include "describedomainconfigurationrequest.h"
#include "describedomainconfigurationresponse.h"
#include "describeendpointrequest.h"
#include "describeendpointresponse.h"
#include "describeeventconfigurationsrequest.h"
#include "describeeventconfigurationsresponse.h"
#include "describefleetmetricrequest.h"
#include "describefleetmetricresponse.h"
#include "describeindexrequest.h"
#include "describeindexresponse.h"
#include "describejobrequest.h"
#include "describejobresponse.h"
#include "describejobexecutionrequest.h"
#include "describejobexecutionresponse.h"
#include "describejobtemplaterequest.h"
#include "describejobtemplateresponse.h"
#include "describemanagedjobtemplaterequest.h"
#include "describemanagedjobtemplateresponse.h"
#include "describemitigationactionrequest.h"
#include "describemitigationactionresponse.h"
#include "describeprovisioningtemplaterequest.h"
#include "describeprovisioningtemplateresponse.h"
#include "describeprovisioningtemplateversionrequest.h"
#include "describeprovisioningtemplateversionresponse.h"
#include "describerolealiasrequest.h"
#include "describerolealiasresponse.h"
#include "describescheduledauditrequest.h"
#include "describescheduledauditresponse.h"
#include "describesecurityprofilerequest.h"
#include "describesecurityprofileresponse.h"
#include "describestreamrequest.h"
#include "describestreamresponse.h"
#include "describethingrequest.h"
#include "describethingresponse.h"
#include "describethinggrouprequest.h"
#include "describethinggroupresponse.h"
#include "describethingregistrationtaskrequest.h"
#include "describethingregistrationtaskresponse.h"
#include "describethingtyperequest.h"
#include "describethingtyperesponse.h"
#include "detachpolicyrequest.h"
#include "detachpolicyresponse.h"
#include "detachprincipalpolicyrequest.h"
#include "detachprincipalpolicyresponse.h"
#include "detachsecurityprofilerequest.h"
#include "detachsecurityprofileresponse.h"
#include "detachthingprincipalrequest.h"
#include "detachthingprincipalresponse.h"
#include "disabletopicrulerequest.h"
#include "disabletopicruleresponse.h"
#include "enabletopicrulerequest.h"
#include "enabletopicruleresponse.h"
#include "getbehaviormodeltrainingsummariesrequest.h"
#include "getbehaviormodeltrainingsummariesresponse.h"
#include "getbucketsaggregationrequest.h"
#include "getbucketsaggregationresponse.h"
#include "getcardinalityrequest.h"
#include "getcardinalityresponse.h"
#include "geteffectivepoliciesrequest.h"
#include "geteffectivepoliciesresponse.h"
#include "getindexingconfigurationrequest.h"
#include "getindexingconfigurationresponse.h"
#include "getjobdocumentrequest.h"
#include "getjobdocumentresponse.h"
#include "getloggingoptionsrequest.h"
#include "getloggingoptionsresponse.h"
#include "getotaupdaterequest.h"
#include "getotaupdateresponse.h"
#include "getpercentilesrequest.h"
#include "getpercentilesresponse.h"
#include "getpolicyrequest.h"
#include "getpolicyresponse.h"
#include "getpolicyversionrequest.h"
#include "getpolicyversionresponse.h"
#include "getregistrationcoderequest.h"
#include "getregistrationcoderesponse.h"
#include "getstatisticsrequest.h"
#include "getstatisticsresponse.h"
#include "gettopicrulerequest.h"
#include "gettopicruleresponse.h"
#include "gettopicruledestinationrequest.h"
#include "gettopicruledestinationresponse.h"
#include "getv2loggingoptionsrequest.h"
#include "getv2loggingoptionsresponse.h"
#include "listactiveviolationsrequest.h"
#include "listactiveviolationsresponse.h"
#include "listattachedpoliciesrequest.h"
#include "listattachedpoliciesresponse.h"
#include "listauditfindingsrequest.h"
#include "listauditfindingsresponse.h"
#include "listauditmitigationactionsexecutionsrequest.h"
#include "listauditmitigationactionsexecutionsresponse.h"
#include "listauditmitigationactionstasksrequest.h"
#include "listauditmitigationactionstasksresponse.h"
#include "listauditsuppressionsrequest.h"
#include "listauditsuppressionsresponse.h"
#include "listaudittasksrequest.h"
#include "listaudittasksresponse.h"
#include "listauthorizersrequest.h"
#include "listauthorizersresponse.h"
#include "listbillinggroupsrequest.h"
#include "listbillinggroupsresponse.h"
#include "listcacertificatesrequest.h"
#include "listcacertificatesresponse.h"
#include "listcertificatesrequest.h"
#include "listcertificatesresponse.h"
#include "listcertificatesbycarequest.h"
#include "listcertificatesbycaresponse.h"
#include "listcustommetricsrequest.h"
#include "listcustommetricsresponse.h"
#include "listdetectmitigationactionsexecutionsrequest.h"
#include "listdetectmitigationactionsexecutionsresponse.h"
#include "listdetectmitigationactionstasksrequest.h"
#include "listdetectmitigationactionstasksresponse.h"
#include "listdimensionsrequest.h"
#include "listdimensionsresponse.h"
#include "listdomainconfigurationsrequest.h"
#include "listdomainconfigurationsresponse.h"
#include "listfleetmetricsrequest.h"
#include "listfleetmetricsresponse.h"
#include "listindicesrequest.h"
#include "listindicesresponse.h"
#include "listjobexecutionsforjobrequest.h"
#include "listjobexecutionsforjobresponse.h"
#include "listjobexecutionsforthingrequest.h"
#include "listjobexecutionsforthingresponse.h"
#include "listjobtemplatesrequest.h"
#include "listjobtemplatesresponse.h"
#include "listjobsrequest.h"
#include "listjobsresponse.h"
#include "listmanagedjobtemplatesrequest.h"
#include "listmanagedjobtemplatesresponse.h"
#include "listmetricvaluesrequest.h"
#include "listmetricvaluesresponse.h"
#include "listmitigationactionsrequest.h"
#include "listmitigationactionsresponse.h"
#include "listotaupdatesrequest.h"
#include "listotaupdatesresponse.h"
#include "listoutgoingcertificatesrequest.h"
#include "listoutgoingcertificatesresponse.h"
#include "listpoliciesrequest.h"
#include "listpoliciesresponse.h"
#include "listpolicyprincipalsrequest.h"
#include "listpolicyprincipalsresponse.h"
#include "listpolicyversionsrequest.h"
#include "listpolicyversionsresponse.h"
#include "listprincipalpoliciesrequest.h"
#include "listprincipalpoliciesresponse.h"
#include "listprincipalthingsrequest.h"
#include "listprincipalthingsresponse.h"
#include "listprovisioningtemplateversionsrequest.h"
#include "listprovisioningtemplateversionsresponse.h"
#include "listprovisioningtemplatesrequest.h"
#include "listprovisioningtemplatesresponse.h"
#include "listrolealiasesrequest.h"
#include "listrolealiasesresponse.h"
#include "listscheduledauditsrequest.h"
#include "listscheduledauditsresponse.h"
#include "listsecurityprofilesrequest.h"
#include "listsecurityprofilesresponse.h"
#include "listsecurityprofilesfortargetrequest.h"
#include "listsecurityprofilesfortargetresponse.h"
#include "liststreamsrequest.h"
#include "liststreamsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtargetsforpolicyrequest.h"
#include "listtargetsforpolicyresponse.h"
#include "listtargetsforsecurityprofilerequest.h"
#include "listtargetsforsecurityprofileresponse.h"
#include "listthinggroupsrequest.h"
#include "listthinggroupsresponse.h"
#include "listthinggroupsforthingrequest.h"
#include "listthinggroupsforthingresponse.h"
#include "listthingprincipalsrequest.h"
#include "listthingprincipalsresponse.h"
#include "listthingregistrationtaskreportsrequest.h"
#include "listthingregistrationtaskreportsresponse.h"
#include "listthingregistrationtasksrequest.h"
#include "listthingregistrationtasksresponse.h"
#include "listthingtypesrequest.h"
#include "listthingtypesresponse.h"
#include "listthingsrequest.h"
#include "listthingsresponse.h"
#include "listthingsinbillinggrouprequest.h"
#include "listthingsinbillinggroupresponse.h"
#include "listthingsinthinggrouprequest.h"
#include "listthingsinthinggroupresponse.h"
#include "listtopicruledestinationsrequest.h"
#include "listtopicruledestinationsresponse.h"
#include "listtopicrulesrequest.h"
#include "listtopicrulesresponse.h"
#include "listv2logginglevelsrequest.h"
#include "listv2logginglevelsresponse.h"
#include "listviolationeventsrequest.h"
#include "listviolationeventsresponse.h"
#include "putverificationstateonviolationrequest.h"
#include "putverificationstateonviolationresponse.h"
#include "registercacertificaterequest.h"
#include "registercacertificateresponse.h"
#include "registercertificaterequest.h"
#include "registercertificateresponse.h"
#include "registercertificatewithoutcarequest.h"
#include "registercertificatewithoutcaresponse.h"
#include "registerthingrequest.h"
#include "registerthingresponse.h"
#include "rejectcertificatetransferrequest.h"
#include "rejectcertificatetransferresponse.h"
#include "removethingfrombillinggrouprequest.h"
#include "removethingfrombillinggroupresponse.h"
#include "removethingfromthinggrouprequest.h"
#include "removethingfromthinggroupresponse.h"
#include "replacetopicrulerequest.h"
#include "replacetopicruleresponse.h"
#include "searchindexrequest.h"
#include "searchindexresponse.h"
#include "setdefaultauthorizerrequest.h"
#include "setdefaultauthorizerresponse.h"
#include "setdefaultpolicyversionrequest.h"
#include "setdefaultpolicyversionresponse.h"
#include "setloggingoptionsrequest.h"
#include "setloggingoptionsresponse.h"
#include "setv2logginglevelrequest.h"
#include "setv2logginglevelresponse.h"
#include "setv2loggingoptionsrequest.h"
#include "setv2loggingoptionsresponse.h"
#include "startauditmitigationactionstaskrequest.h"
#include "startauditmitigationactionstaskresponse.h"
#include "startdetectmitigationactionstaskrequest.h"
#include "startdetectmitigationactionstaskresponse.h"
#include "startondemandaudittaskrequest.h"
#include "startondemandaudittaskresponse.h"
#include "startthingregistrationtaskrequest.h"
#include "startthingregistrationtaskresponse.h"
#include "stopthingregistrationtaskrequest.h"
#include "stopthingregistrationtaskresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "testauthorizationrequest.h"
#include "testauthorizationresponse.h"
#include "testinvokeauthorizerrequest.h"
#include "testinvokeauthorizerresponse.h"
#include "transfercertificaterequest.h"
#include "transfercertificateresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateaccountauditconfigurationrequest.h"
#include "updateaccountauditconfigurationresponse.h"
#include "updateauditsuppressionrequest.h"
#include "updateauditsuppressionresponse.h"
#include "updateauthorizerrequest.h"
#include "updateauthorizerresponse.h"
#include "updatebillinggrouprequest.h"
#include "updatebillinggroupresponse.h"
#include "updatecacertificaterequest.h"
#include "updatecacertificateresponse.h"
#include "updatecertificaterequest.h"
#include "updatecertificateresponse.h"
#include "updatecustommetricrequest.h"
#include "updatecustommetricresponse.h"
#include "updatedimensionrequest.h"
#include "updatedimensionresponse.h"
#include "updatedomainconfigurationrequest.h"
#include "updatedomainconfigurationresponse.h"
#include "updatedynamicthinggrouprequest.h"
#include "updatedynamicthinggroupresponse.h"
#include "updateeventconfigurationsrequest.h"
#include "updateeventconfigurationsresponse.h"
#include "updatefleetmetricrequest.h"
#include "updatefleetmetricresponse.h"
#include "updateindexingconfigurationrequest.h"
#include "updateindexingconfigurationresponse.h"
#include "updatejobrequest.h"
#include "updatejobresponse.h"
#include "updatemitigationactionrequest.h"
#include "updatemitigationactionresponse.h"
#include "updateprovisioningtemplaterequest.h"
#include "updateprovisioningtemplateresponse.h"
#include "updaterolealiasrequest.h"
#include "updaterolealiasresponse.h"
#include "updatescheduledauditrequest.h"
#include "updatescheduledauditresponse.h"
#include "updatesecurityprofilerequest.h"
#include "updatesecurityprofileresponse.h"
#include "updatestreamrequest.h"
#include "updatestreamresponse.h"
#include "updatethingrequest.h"
#include "updatethingresponse.h"
#include "updatethinggrouprequest.h"
#include "updatethinggroupresponse.h"
#include "updatethinggroupsforthingrequest.h"
#include "updatethinggroupsforthingresponse.h"
#include "updatetopicruledestinationrequest.h"
#include "updatetopicruledestinationresponse.h"
#include "validatesecurityprofilebehaviorsrequest.h"
#include "validatesecurityprofilebehaviorsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IoT
 * \brief Contains classess for accessing AWS IoT.
 *
 * \inmodule QtAwsIoT
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::IoTClient
 * \brief The IoTClient class provides access to the AWS IoT service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoT
 *
 *  <fullname>IoT</fullname>
 * 
 *  IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the Amazon Web Services cloud. You can discover your custom IoT-Data endpoint
 *  to communicate with, configure rules for data processing and integration with other services, organize resources
 *  associated with each device (Registry), configure logging, and create and manage policies and credentials to
 *  authenticate
 * 
 *  devices>
 * 
 *  The service endpoints that expose this API are listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html">Amazon Web Services IoT Core Endpoints and
 *  Quotas</a>. You must use the endpoint for the region that has the resources you want to
 * 
 *  access>
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon Web
 *  Services Signature Version 4</a> to sign the request is:
 * 
 *  <i>execute-api</i>>
 * 
 *  For more information about how IoT works, see the <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to
 *  Amazon Web Services
 */

/*!
 * \brief Constructs a IoTClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IoTClient::IoTClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTClientPrivate(this), parent)
{
    Q_D(IoTClient);
    d->apiVersion = QStringLiteral("2015-05-28");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("iot");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS IoT");
    d->serviceName = QStringLiteral("execute-api");
}

/*!
 * \overload IoTClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IoTClient::IoTClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTClientPrivate(this), parent)
{
    Q_D(IoTClient);
    d->apiVersion = QStringLiteral("2015-05-28");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("iot");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS IoT");
    d->serviceName = QStringLiteral("execute-api");
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * AcceptCertificateTransferResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts a pending certificate transfer. The default state of the certificate is
 *
 * INACTIVE>
 *
 * To check for pending certificate transfers, call <a>ListCertificates</a> to enumerate your
 *
 * certificates>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">AcceptCertificateTransfer</a>
 */
AcceptCertificateTransferResponse * IoTClient::acceptCertificateTransfer(const AcceptCertificateTransferRequest &request)
{
    return qobject_cast<AcceptCertificateTransferResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * AddThingToBillingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a thing to a billing
 *
 * group>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">AddThingToBillingGroup</a>
 */
AddThingToBillingGroupResponse * IoTClient::addThingToBillingGroup(const AddThingToBillingGroupRequest &request)
{
    return qobject_cast<AddThingToBillingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * AddThingToThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a thing to a thing
 *
 * group>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">AddThingToThingGroup</a>
 */
AddThingToThingGroupResponse * IoTClient::addThingToThingGroup(const AddThingToThingGroupRequest &request)
{
    return qobject_cast<AddThingToThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * AssociateTargetsWithJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a group with a continuous job. The following criteria must be met:
 *
 * </p <ul> <li>
 *
 * The job must have been created with the <code>targetSelection</code> field set to
 *
 * "CONTINUOUS"> </li> <li>
 *
 * The job status must currently be
 *
 * "IN_PROGRESS"> </li> <li>
 *
 * The total number of targets associated with a job must not exceed
 *
 * 100> </li> </ul>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">AssociateTargetsWithJob</a>
 */
AssociateTargetsWithJobResponse * IoTClient::associateTargetsWithJob(const AssociateTargetsWithJobRequest &request)
{
    return qobject_cast<AssociateTargetsWithJobResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * AttachPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches the specified policy to the specified principal (certificate or other
 *
 * credential)>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">AttachPolicy</a>
 */
AttachPolicyResponse * IoTClient::attachPolicy(const AttachPolicyRequest &request)
{
    return qobject_cast<AttachPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * AttachPrincipalPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches the specified policy to the specified principal (certificate or other
 *
 * credential)>
 *
 * <b>Note:</b> This action is deprecated and works as expected for backward compatibility, but we won't add enhancements.
 * Use <a>AttachPolicy</a>
 *
 * instead>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">AttachPrincipalPolicy</a>
 */
AttachPrincipalPolicyResponse * IoTClient::attachPrincipalPolicy(const AttachPrincipalPolicyRequest &request)
{
    return qobject_cast<AttachPrincipalPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * AttachSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a Device Defender security profile with a thing group or this account. Each thing group or account can have
 * up to five security profiles associated with
 *
 * it>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">AttachSecurityProfile</a>
 */
AttachSecurityProfileResponse * IoTClient::attachSecurityProfile(const AttachSecurityProfileRequest &request)
{
    return qobject_cast<AttachSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * AttachThingPrincipalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches the specified principal to the specified thing. A principal can be X.509 certificates, IAM users, groups, and
 * roles, Amazon Cognito identities or federated
 *
 * identities>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">AttachThingPrincipal</a>
 */
AttachThingPrincipalResponse * IoTClient::attachThingPrincipal(const AttachThingPrincipalRequest &request)
{
    return qobject_cast<AttachThingPrincipalResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CancelAuditMitigationActionsTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a mitigation action task that is in progress. If the task is not in progress, an InvalidRequestException
 *
 * occurs>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CancelAuditMitigationActionsTask</a>
 */
CancelAuditMitigationActionsTaskResponse * IoTClient::cancelAuditMitigationActionsTask(const CancelAuditMitigationActionsTaskRequest &request)
{
    return qobject_cast<CancelAuditMitigationActionsTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CancelAuditTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels an audit that is in progress. The audit can be either scheduled or on demand. If the audit isn't in progress, an
 * "InvalidRequestException"
 *
 * occurs>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CancelAuditTask</a>
 */
CancelAuditTaskResponse * IoTClient::cancelAuditTask(const CancelAuditTaskRequest &request)
{
    return qobject_cast<CancelAuditTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CancelCertificateTransferResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a pending transfer for the specified
 *
 * certificate>
 *
 * <b>Note</b> Only the transfer source account can use this operation to cancel a transfer. (Transfer destinations can use
 * <a>RejectCertificateTransfer</a> instead.) After transfer, IoT returns the certificate to the source account in the
 * INACTIVE state. After the destination account has accepted the transfer, the transfer cannot be
 *
 * cancelled>
 *
 * After a certificate transfer is cancelled, the status of the certificate changes from PENDING_TRANSFER to
 *
 * INACTIVE>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CancelCertificateTransfer</a>
 */
CancelCertificateTransferResponse * IoTClient::cancelCertificateTransfer(const CancelCertificateTransferRequest &request)
{
    return qobject_cast<CancelCertificateTransferResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CancelDetectMitigationActionsTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a Device Defender ML Detect mitigation action.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CancelDetectMitigationActionsTask</a>
 */
CancelDetectMitigationActionsTaskResponse * IoTClient::cancelDetectMitigationActionsTask(const CancelDetectMitigationActionsTaskRequest &request)
{
    return qobject_cast<CancelDetectMitigationActionsTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CancelJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a
 *
 * job>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CancelJob</a>
 */
CancelJobResponse * IoTClient::cancelJob(const CancelJobRequest &request)
{
    return qobject_cast<CancelJobResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CancelJobExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the execution of a job for a given
 *
 * thing>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CancelJobExecution</a>
 */
CancelJobExecutionResponse * IoTClient::cancelJobExecution(const CancelJobExecutionRequest &request)
{
    return qobject_cast<CancelJobExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ClearDefaultAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Clears the default
 *
 * authorizer>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ClearDefaultAuthorizer</a>
 */
ClearDefaultAuthorizerResponse * IoTClient::clearDefaultAuthorizer(const ClearDefaultAuthorizerRequest &request)
{
    return qobject_cast<ClearDefaultAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ConfirmTopicRuleDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Confirms a topic rule destination. When you create a rule requiring a destination, IoT sends a confirmation message to
 * the endpoint or base address you specify. The message includes a token which you pass back when calling
 * <code>ConfirmTopicRuleDestination</code> to confirm that you own or have access to the
 *
 * endpoint>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ConfirmTopicRuleDestination</a>
 */
ConfirmTopicRuleDestinationResponse * IoTClient::confirmTopicRuleDestination(const ConfirmTopicRuleDestinationRequest &request)
{
    return qobject_cast<ConfirmTopicRuleDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateAuditSuppressionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Device Defender audit suppression.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateAuditSuppression</a>
 */
CreateAuditSuppressionResponse * IoTClient::createAuditSuppression(const CreateAuditSuppressionRequest &request)
{
    return qobject_cast<CreateAuditSuppressionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an
 *
 * authorizer>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateAuthorizer</a>
 */
CreateAuthorizerResponse * IoTClient::createAuthorizer(const CreateAuthorizerRequest &request)
{
    return qobject_cast<CreateAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateBillingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a billing
 *
 * group>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateBillingGroup</a>
 */
CreateBillingGroupResponse * IoTClient::createBillingGroup(const CreateBillingGroupRequest &request)
{
    return qobject_cast<CreateBillingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateCertificateFromCsrResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an X.509 certificate using the specified certificate signing
 *
 * request>
 *
 * <b>Note:</b> The CSR must include a public key that is either an RSA key with a length of at least 2048 bits or an ECC
 * key from NIST P-256, NIST P-384, or NIST P-512 curves. For supported certificates, consult <a
 * href="https://docs.aws.amazon.com/iot/latest/developerguide/x509-client-certs.html#x509-cert-algorithms"> Certificate
 * signing algorithms supported by
 *
 * IoT</a>>
 *
 * <b>Note:</b> Reusing the same certificate signing request (CSR) results in a distinct
 *
 * certificate>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateCertificateFromCsr</a>
 *
 * action>
 *
 * You can create multiple certificates in a batch by creating a directory, copying multiple .csr files into that
 * directory, and then specifying that directory on the command line. The following commands show how to create a batch of
 * certificates given a batch of
 *
 * CSRs>
 *
 * Assuming a set of CSRs are located inside of the directory
 *
 * my-csr-directory>
 *
 * On Linux and OS X, the command
 *
 * is>
 *
 * $ ls my-csr-directory/ | xargs -I {} aws iot create-certificate-from-csr --certificate-signing-request
 *
 * file://my-csr-directory/{>
 *
 * This command lists all of the CSRs in my-csr-directory and pipes each CSR file name to the aws iot
 * create-certificate-from-csr Amazon Web Services CLI command to create a certificate for the corresponding
 *
 * CSR>
 *
 * The aws iot create-certificate-from-csr part of the command can also be run in parallel to speed up the certificate
 * creation
 *
 * process>
 *
 * $ ls my-csr-directory/ | xargs -P 10 -I {} aws iot create-certificate-from-csr --certificate-signing-request
 *
 * file://my-csr-directory/{>
 *
 * On Windows PowerShell, the command to create certificates for all CSRs in my-csr-directory
 *
 * is>
 *
 * > ls -Name my-csr-directory | %{aws iot create-certificate-from-csr --certificate-signing-request
 *
 * file://my-csr-directory/$_>
 *
 * On a Windows command prompt, the command to create certificates for all CSRs in my-csr-directory
 *
 * is>
 *
 * > forfiles /p my-csr-directory /c "cmd /c aws iot create-certificate-from-csr --certificate-signing-request
 */
CreateCertificateFromCsrResponse * IoTClient::createCertificateFromCsr(const CreateCertificateFromCsrRequest &request)
{
    return qobject_cast<CreateCertificateFromCsrResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateCustomMetricResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this API to define a Custom Metric published by your devices to Device Defender.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateCustomMetric</a>
 */
CreateCustomMetricResponse * IoTClient::createCustomMetric(const CreateCustomMetricRequest &request)
{
    return qobject_cast<CreateCustomMetricResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateDimensionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a dimension that you can use to limit the scope of a metric used in a security profile for IoT Device Defender.
 * For example, using a <code>TOPIC_FILTER</code> dimension, you can narrow down the scope of the metric only to MQTT
 * topics whose name match the pattern specified in the
 *
 * dimension>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateDimension</a>
 */
CreateDimensionResponse * IoTClient::createDimension(const CreateDimensionRequest &request)
{
    return qobject_cast<CreateDimensionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateDomainConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a domain
 *
 * configuration>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateDomainConfiguration</a>
 */
CreateDomainConfigurationResponse * IoTClient::createDomainConfiguration(const CreateDomainConfigurationRequest &request)
{
    return qobject_cast<CreateDomainConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateDynamicThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a dynamic thing
 *
 * group>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateDynamicThingGroup</a>
 */
CreateDynamicThingGroupResponse * IoTClient::createDynamicThingGroup(const CreateDynamicThingGroupRequest &request)
{
    return qobject_cast<CreateDynamicThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateFleetMetricResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a fleet
 *
 * metric>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateFleetMetric</a>
 */
CreateFleetMetricResponse * IoTClient::createFleetMetric(const CreateFleetMetricRequest &request)
{
    return qobject_cast<CreateFleetMetricResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 *
 * job>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateJob</a>
 */
CreateJobResponse * IoTClient::createJob(const CreateJobRequest &request)
{
    return qobject_cast<CreateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateJobTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a job
 *
 * template>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateJobTemplate</a>
 */
CreateJobTemplateResponse * IoTClient::createJobTemplate(const CreateJobTemplateRequest &request)
{
    return qobject_cast<CreateJobTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateKeysAndCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a 2048-bit RSA key pair and issues an X.509 certificate using the issued public key. You can also call
 * <code>CreateKeysAndCertificate</code> over MQTT from a device, for more information, see <a
 * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-wo-cert.html#provision-mqtt-api">Provisioning MQTT
 *
 * API</a>>
 *
 * <b>Note</b> This is the only time IoT issues the private key for this certificate, so it is important to keep it in a
 * secure
 *
 * location>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateKeysAndCertificate</a>
 */
CreateKeysAndCertificateResponse * IoTClient::createKeysAndCertificate(const CreateKeysAndCertificateRequest &request)
{
    return qobject_cast<CreateKeysAndCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateMitigationActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Defines an action that can be applied to audit findings by using StartAuditMitigationActionsTask. Only certain types of
 * mitigation actions can be applied to specific check names. For more information, see <a
 * href="https://docs.aws.amazon.com/iot/latest/developerguide/device-defender-mitigation-actions.html">Mitigation
 * actions</a>. Each mitigation action can apply only one type of
 *
 * change>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateMitigationAction</a>
 */
CreateMitigationActionResponse * IoTClient::createMitigationAction(const CreateMitigationActionRequest &request)
{
    return qobject_cast<CreateMitigationActionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateOTAUpdateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an IoT OTA update on a target group of things or
 *
 * groups>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateOTAUpdate</a>
 */
CreateOTAUpdateResponse * IoTClient::createOTAUpdate(const CreateOTAUpdateRequest &request)
{
    return qobject_cast<CreateOTAUpdateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreatePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an IoT
 *
 * policy>
 *
 * The created policy is the default version for the policy. This operation creates a policy version with a version
 * identifier of <b>1</b> and sets <b>1</b> as the policy's default
 *
 * version>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreatePolicy</a>
 */
CreatePolicyResponse * IoTClient::createPolicy(const CreatePolicyRequest &request)
{
    return qobject_cast<CreatePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreatePolicyVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new version of the specified IoT policy. To update a policy, create a new policy version. A managed policy can
 * have up to five versions. If the policy has five versions, you must use <a>DeletePolicyVersion</a> to delete an existing
 * version before you create a new
 *
 * one>
 *
 * Optionally, you can set the new version as the policy's default version. The default version is the operative version
 * (that is, the version that is in effect for the certificates to which the policy is
 *
 * attached)>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreatePolicyVersion</a>
 */
CreatePolicyVersionResponse * IoTClient::createPolicyVersion(const CreatePolicyVersionRequest &request)
{
    return qobject_cast<CreatePolicyVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateProvisioningClaimResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a provisioning
 *
 * claim>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateProvisioningClaim</a>
 */
CreateProvisioningClaimResponse * IoTClient::createProvisioningClaim(const CreateProvisioningClaimRequest &request)
{
    return qobject_cast<CreateProvisioningClaimResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateProvisioningTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a provisioning
 *
 * template>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateProvisioningTemplate</a>
 */
CreateProvisioningTemplateResponse * IoTClient::createProvisioningTemplate(const CreateProvisioningTemplateRequest &request)
{
    return qobject_cast<CreateProvisioningTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateProvisioningTemplateVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new version of a provisioning
 *
 * template>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateProvisioningTemplateVersion</a>
 */
CreateProvisioningTemplateVersionResponse * IoTClient::createProvisioningTemplateVersion(const CreateProvisioningTemplateVersionRequest &request)
{
    return qobject_cast<CreateProvisioningTemplateVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateRoleAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a role
 *
 * alias>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateRoleAlias</a>
 */
CreateRoleAliasResponse * IoTClient::createRoleAlias(const CreateRoleAliasRequest &request)
{
    return qobject_cast<CreateRoleAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateScheduledAuditResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a scheduled audit that is run at a specified time
 *
 * interval>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateScheduledAudit</a>
 */
CreateScheduledAuditResponse * IoTClient::createScheduledAudit(const CreateScheduledAuditRequest &request)
{
    return qobject_cast<CreateScheduledAuditResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Device Defender security
 *
 * profile>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateSecurityProfile</a>
 */
CreateSecurityProfileResponse * IoTClient::createSecurityProfile(const CreateSecurityProfileRequest &request)
{
    return qobject_cast<CreateSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a stream for delivering one or more large files in chunks over MQTT. A stream transports data bytes in chunks or
 * blocks packaged as MQTT messages from a source like S3. You can have one or more files associated with a
 *
 * stream>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateStream</a>
 */
CreateStreamResponse * IoTClient::createStream(const CreateStreamRequest &request)
{
    return qobject_cast<CreateStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a thing record in the registry. If this call is made multiple times using the same thing name and configuration,
 * the call will succeed. If this call is made with the same thing name but different configuration a
 * <code>ResourceAlreadyExistsException</code> is
 *
 * thrown> <note>
 *
 * This is a control plane operation. See <a
 * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-authorization.html">Authorization</a> for information
 * about authorizing control plane
 *
 * actions> </note>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateThing</a>
 */
CreateThingResponse * IoTClient::createThing(const CreateThingRequest &request)
{
    return qobject_cast<CreateThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a thing
 *
 * group> <note>
 *
 * This is a control plane operation. See <a
 * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-authorization.html">Authorization</a> for information
 * about authorizing control plane
 *
 * actions> </note>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateThingGroup</a>
 */
CreateThingGroupResponse * IoTClient::createThingGroup(const CreateThingGroupRequest &request)
{
    return qobject_cast<CreateThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateThingTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new thing
 *
 * type>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateThingType</a>
 */
CreateThingTypeResponse * IoTClient::createThingType(const CreateThingTypeRequest &request)
{
    return qobject_cast<CreateThingTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateTopicRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a rule. Creating rules is an administrator-level action. Any user who has permission to create rules will be
 * able to access data processed by the
 *
 * rule>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateTopicRule</a>
 */
CreateTopicRuleResponse * IoTClient::createTopicRule(const CreateTopicRuleRequest &request)
{
    return qobject_cast<CreateTopicRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * CreateTopicRuleDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a topic rule destination. The destination must be confirmed prior to
 *
 * use>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateTopicRuleDestination</a>
 */
CreateTopicRuleDestinationResponse * IoTClient::createTopicRuleDestination(const CreateTopicRuleDestinationRequest &request)
{
    return qobject_cast<CreateTopicRuleDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteAccountAuditConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores the default settings for Device Defender audits for this account. Any configuration data you entered is deleted
 * and all audit checks are reset to disabled.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteAccountAuditConfiguration</a>
 */
DeleteAccountAuditConfigurationResponse * IoTClient::deleteAccountAuditConfiguration(const DeleteAccountAuditConfigurationRequest &request)
{
    return qobject_cast<DeleteAccountAuditConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteAuditSuppressionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Device Defender audit suppression.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteAuditSuppression</a>
 */
DeleteAuditSuppressionResponse * IoTClient::deleteAuditSuppression(const DeleteAuditSuppressionRequest &request)
{
    return qobject_cast<DeleteAuditSuppressionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 *
 * authorizer>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteAuthorizer</a>
 */
DeleteAuthorizerResponse * IoTClient::deleteAuthorizer(const DeleteAuthorizerRequest &request)
{
    return qobject_cast<DeleteAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteBillingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the billing
 *
 * group>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteBillingGroup</a>
 */
DeleteBillingGroupResponse * IoTClient::deleteBillingGroup(const DeleteBillingGroupRequest &request)
{
    return qobject_cast<DeleteBillingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteCACertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a registered CA
 *
 * certificate>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteCACertificate</a>
 */
DeleteCACertificateResponse * IoTClient::deleteCACertificate(const DeleteCACertificateRequest &request)
{
    return qobject_cast<DeleteCACertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * certificate>
 *
 * A certificate cannot be deleted if it has a policy or IoT thing attached to it or if its status is set to ACTIVE. To
 * delete a certificate, first use the <a>DetachPolicy</a> action to detach all policies. Next, use the
 * <a>UpdateCertificate</a> action to set the certificate to the INACTIVE
 *
 * status>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteCertificate</a>
 */
DeleteCertificateResponse * IoTClient::deleteCertificate(const DeleteCertificateRequest &request)
{
    return qobject_cast<DeleteCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteCustomMetricResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Device Defender detect custom metric.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteCustomMetric</a>
 *
 * action> <note>
 *
 * Before you can delete a custom metric, you must first remove the custom metric from all security profiles it's a part
 * of. The security profile associated with the custom metric can be found using the <a
 * href="https://docs.aws.amazon.com/iot/latest/apireference/API_ListSecurityProfiles.html">ListSecurityProfiles</a> API
 * with <code>metricName</code> set to your custom metric
 */
DeleteCustomMetricResponse * IoTClient::deleteCustomMetric(const DeleteCustomMetricRequest &request)
{
    return qobject_cast<DeleteCustomMetricResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteDimensionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified dimension from your Amazon Web Services
 *
 * accounts>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteDimension</a>
 */
DeleteDimensionResponse * IoTClient::deleteDimension(const DeleteDimensionRequest &request)
{
    return qobject_cast<DeleteDimensionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteDomainConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified domain
 *
 * configuration>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteDomainConfiguration</a>
 */
DeleteDomainConfigurationResponse * IoTClient::deleteDomainConfiguration(const DeleteDomainConfigurationRequest &request)
{
    return qobject_cast<DeleteDomainConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteDynamicThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a dynamic thing
 *
 * group>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteDynamicThingGroup</a>
 */
DeleteDynamicThingGroupResponse * IoTClient::deleteDynamicThingGroup(const DeleteDynamicThingGroupRequest &request)
{
    return qobject_cast<DeleteDynamicThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteFleetMetricResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified fleet metric. Returns successfully with no error if the deletion is successful or you specify a
 * fleet metric that doesn't
 *
 * exist>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteFleetMetric</a>
 */
DeleteFleetMetricResponse * IoTClient::deleteFleetMetric(const DeleteFleetMetricRequest &request)
{
    return qobject_cast<DeleteFleetMetricResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a job and its related job
 *
 * executions>
 *
 * Deleting a job may take time, depending on the number of job executions created for the job and various other factors.
 * While the job is being deleted, the status of the job will be shown as "DELETION_IN_PROGRESS". Attempting to delete or
 * cancel a job whose status is already "DELETION_IN_PROGRESS" will result in an
 *
 * error>
 *
 * Only 10 jobs may have status "DELETION_IN_PROGRESS" at the same time, or a LimitExceededException will
 *
 * occur>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteJob</a>
 */
DeleteJobResponse * IoTClient::deleteJob(const DeleteJobRequest &request)
{
    return qobject_cast<DeleteJobResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteJobExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a job
 *
 * execution>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteJobExecution</a>
 */
DeleteJobExecutionResponse * IoTClient::deleteJobExecution(const DeleteJobExecutionRequest &request)
{
    return qobject_cast<DeleteJobExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteJobTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified job
 */
DeleteJobTemplateResponse * IoTClient::deleteJobTemplate(const DeleteJobTemplateRequest &request)
{
    return qobject_cast<DeleteJobTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteMitigationActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a defined mitigation action from your Amazon Web Services
 *
 * accounts>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteMitigationAction</a>
 */
DeleteMitigationActionResponse * IoTClient::deleteMitigationAction(const DeleteMitigationActionRequest &request)
{
    return qobject_cast<DeleteMitigationActionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteOTAUpdateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an OTA
 *
 * update>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteOTAUpdate</a>
 */
DeleteOTAUpdateResponse * IoTClient::deleteOTAUpdate(const DeleteOTAUpdateRequest &request)
{
    return qobject_cast<DeleteOTAUpdateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeletePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * policy>
 *
 * A policy cannot be deleted if it has non-default versions or it is attached to any
 *
 * certificate>
 *
 * To delete a policy, use the <a>DeletePolicyVersion</a> action to delete all non-default versions of the policy; use the
 * <a>DetachPolicy</a> action to detach the policy from any certificate; and then use the DeletePolicy action to delete the
 *
 * policy>
 *
 * When a policy is deleted using DeletePolicy, its default version is deleted with
 *
 * it> <note>
 *
 * Because of the distributed nature of Amazon Web Services, it can take up to five minutes after a policy is detached
 * before it's ready to be
 *
 * deleted> </note>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeletePolicy</a>
 */
DeletePolicyResponse * IoTClient::deletePolicy(const DeletePolicyRequest &request)
{
    return qobject_cast<DeletePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeletePolicyVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified version of the specified policy. You cannot delete the default version of a policy using this
 * action. To delete the default version of a policy, use <a>DeletePolicy</a>. To find out which version of a policy is
 * marked as the default version, use
 *
 * ListPolicyVersions>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeletePolicyVersion</a>
 */
DeletePolicyVersionResponse * IoTClient::deletePolicyVersion(const DeletePolicyVersionRequest &request)
{
    return qobject_cast<DeletePolicyVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteProvisioningTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a provisioning
 *
 * template>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteProvisioningTemplate</a>
 */
DeleteProvisioningTemplateResponse * IoTClient::deleteProvisioningTemplate(const DeleteProvisioningTemplateRequest &request)
{
    return qobject_cast<DeleteProvisioningTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteProvisioningTemplateVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a provisioning template
 *
 * version>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteProvisioningTemplateVersion</a>
 */
DeleteProvisioningTemplateVersionResponse * IoTClient::deleteProvisioningTemplateVersion(const DeleteProvisioningTemplateVersionRequest &request)
{
    return qobject_cast<DeleteProvisioningTemplateVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteRegistrationCodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a CA certificate registration
 *
 * code>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteRegistrationCode</a>
 */
DeleteRegistrationCodeResponse * IoTClient::deleteRegistrationCode(const DeleteRegistrationCodeRequest &request)
{
    return qobject_cast<DeleteRegistrationCodeResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteRoleAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a role
 *
 * alia>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteRoleAlias</a>
 */
DeleteRoleAliasResponse * IoTClient::deleteRoleAlias(const DeleteRoleAliasRequest &request)
{
    return qobject_cast<DeleteRoleAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteScheduledAuditResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a scheduled
 *
 * audit>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteScheduledAudit</a>
 */
DeleteScheduledAuditResponse * IoTClient::deleteScheduledAudit(const DeleteScheduledAuditRequest &request)
{
    return qobject_cast<DeleteScheduledAuditResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Device Defender security
 *
 * profile>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteSecurityProfile</a>
 */
DeleteSecurityProfileResponse * IoTClient::deleteSecurityProfile(const DeleteSecurityProfileRequest &request)
{
    return qobject_cast<DeleteSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 *
 * stream>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteStream</a>
 */
DeleteStreamResponse * IoTClient::deleteStream(const DeleteStreamRequest &request)
{
    return qobject_cast<DeleteStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified thing. Returns successfully with no error if the deletion is successful or you specify a thing
 * that doesn't
 *
 * exist>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteThing</a>
 */
DeleteThingResponse * IoTClient::deleteThing(const DeleteThingRequest &request)
{
    return qobject_cast<DeleteThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a thing
 *
 * group>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteThingGroup</a>
 */
DeleteThingGroupResponse * IoTClient::deleteThingGroup(const DeleteThingGroupRequest &request)
{
    return qobject_cast<DeleteThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteThingTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified thing type. You cannot delete a thing type if it has things associated with it. To delete a thing
 * type, first mark it as deprecated by calling <a>DeprecateThingType</a>, then remove any associated things by calling
 * <a>UpdateThing</a> to change the thing type on any associated thing, and finally use <a>DeleteThingType</a> to delete
 * the thing
 *
 * type>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteThingType</a>
 */
DeleteThingTypeResponse * IoTClient::deleteThingType(const DeleteThingTypeRequest &request)
{
    return qobject_cast<DeleteThingTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteTopicRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the
 *
 * rule>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteTopicRule</a>
 */
DeleteTopicRuleResponse * IoTClient::deleteTopicRule(const DeleteTopicRuleRequest &request)
{
    return qobject_cast<DeleteTopicRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteTopicRuleDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a topic rule
 *
 * destination>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteTopicRuleDestination</a>
 */
DeleteTopicRuleDestinationResponse * IoTClient::deleteTopicRuleDestination(const DeleteTopicRuleDestinationRequest &request)
{
    return qobject_cast<DeleteTopicRuleDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeleteV2LoggingLevelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a logging
 *
 * level>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteV2LoggingLevel</a>
 */
DeleteV2LoggingLevelResponse * IoTClient::deleteV2LoggingLevel(const DeleteV2LoggingLevelRequest &request)
{
    return qobject_cast<DeleteV2LoggingLevelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DeprecateThingTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deprecates a thing type. You can not associate new things with deprecated thing
 *
 * type>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeprecateThingType</a>
 */
DeprecateThingTypeResponse * IoTClient::deprecateThingType(const DeprecateThingTypeRequest &request)
{
    return qobject_cast<DeprecateThingTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeAccountAuditConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the Device Defender audit settings for this account. Settings include how audit notifications are
 * sent and which audit checks are enabled or
 *
 * disabled>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeAccountAuditConfiguration</a>
 */
DescribeAccountAuditConfigurationResponse * IoTClient::describeAccountAuditConfiguration(const DescribeAccountAuditConfigurationRequest &request)
{
    return qobject_cast<DescribeAccountAuditConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeAuditFindingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a single audit finding. Properties include the reason for noncompliance, the severity of the
 * issue, and the start time when the audit that returned the
 *
 * finding>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeAuditFinding</a>
 */
DescribeAuditFindingResponse * IoTClient::describeAuditFinding(const DescribeAuditFindingRequest &request)
{
    return qobject_cast<DescribeAuditFindingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeAuditMitigationActionsTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about an audit mitigation task that is used to apply mitigation actions to a set of audit findings.
 * Properties include the actions being applied, the audit checks to which they're being applied, the task status, and
 * aggregated task
 */
DescribeAuditMitigationActionsTaskResponse * IoTClient::describeAuditMitigationActionsTask(const DescribeAuditMitigationActionsTaskRequest &request)
{
    return qobject_cast<DescribeAuditMitigationActionsTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeAuditSuppressionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a Device Defender audit suppression.
 */
DescribeAuditSuppressionResponse * IoTClient::describeAuditSuppression(const DescribeAuditSuppressionRequest &request)
{
    return qobject_cast<DescribeAuditSuppressionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeAuditTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a Device Defender
 *
 * audit>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeAuditTask</a>
 */
DescribeAuditTaskResponse * IoTClient::describeAuditTask(const DescribeAuditTaskRequest &request)
{
    return qobject_cast<DescribeAuditTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes an
 *
 * authorizer>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeAuthorizer</a>
 */
DescribeAuthorizerResponse * IoTClient::describeAuthorizer(const DescribeAuthorizerRequest &request)
{
    return qobject_cast<DescribeAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeBillingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a billing
 *
 * group>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeBillingGroup</a>
 */
DescribeBillingGroupResponse * IoTClient::describeBillingGroup(const DescribeBillingGroupRequest &request)
{
    return qobject_cast<DescribeBillingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeCACertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a registered CA
 *
 * certificate>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeCACertificate</a>
 */
DescribeCACertificateResponse * IoTClient::describeCACertificate(const DescribeCACertificateRequest &request)
{
    return qobject_cast<DescribeCACertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified
 *
 * certificate>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeCertificate</a>
 */
DescribeCertificateResponse * IoTClient::describeCertificate(const DescribeCertificateRequest &request)
{
    return qobject_cast<DescribeCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeCustomMetricResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a Device Defender detect custom metric.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeCustomMetric</a>
 */
DescribeCustomMetricResponse * IoTClient::describeCustomMetric(const DescribeCustomMetricRequest &request)
{
    return qobject_cast<DescribeCustomMetricResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeDefaultAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the default
 *
 * authorizer>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeDefaultAuthorizer</a>
 */
DescribeDefaultAuthorizerResponse * IoTClient::describeDefaultAuthorizer(const DescribeDefaultAuthorizerRequest &request)
{
    return qobject_cast<DescribeDefaultAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeDetectMitigationActionsTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a Device Defender ML Detect mitigation action.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeDetectMitigationActionsTask</a>
 */
DescribeDetectMitigationActionsTaskResponse * IoTClient::describeDetectMitigationActionsTask(const DescribeDetectMitigationActionsTaskRequest &request)
{
    return qobject_cast<DescribeDetectMitigationActionsTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeDimensionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides details about a dimension that is defined in your Amazon Web Services
 *
 * accounts>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeDimension</a>
 */
DescribeDimensionResponse * IoTClient::describeDimension(const DescribeDimensionRequest &request)
{
    return qobject_cast<DescribeDimensionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeDomainConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets summary information about a domain
 *
 * configuration>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeDomainConfiguration</a>
 */
DescribeDomainConfigurationResponse * IoTClient::describeDomainConfiguration(const DescribeDomainConfigurationRequest &request)
{
    return qobject_cast<DescribeDomainConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a unique endpoint specific to the Amazon Web Services account making the
 *
 * call>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeEndpoint</a>
 */
DescribeEndpointResponse * IoTClient::describeEndpoint(const DescribeEndpointRequest &request)
{
    return qobject_cast<DescribeEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeEventConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes event
 *
 * configurations>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeEventConfigurations</a>
 */
DescribeEventConfigurationsResponse * IoTClient::describeEventConfigurations(const DescribeEventConfigurationsRequest &request)
{
    return qobject_cast<DescribeEventConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeFleetMetricResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified fleet
 *
 * metric>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeFleetMetric</a>
 */
DescribeFleetMetricResponse * IoTClient::describeFleetMetric(const DescribeFleetMetricRequest &request)
{
    return qobject_cast<DescribeFleetMetricResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a search
 *
 * index>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeIndex</a>
 */
DescribeIndexResponse * IoTClient::describeIndex(const DescribeIndexRequest &request)
{
    return qobject_cast<DescribeIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a
 *
 * job>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeJob</a>
 */
DescribeJobResponse * IoTClient::describeJob(const DescribeJobRequest &request)
{
    return qobject_cast<DescribeJobResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeJobExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a job
 *
 * execution>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeJobExecution</a>
 */
DescribeJobExecutionResponse * IoTClient::describeJobExecution(const DescribeJobExecutionRequest &request)
{
    return qobject_cast<DescribeJobExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeJobTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a job
 */
DescribeJobTemplateResponse * IoTClient::describeJobTemplate(const DescribeJobTemplateRequest &request)
{
    return qobject_cast<DescribeJobTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeManagedJobTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * View details of a managed job
 */
DescribeManagedJobTemplateResponse * IoTClient::describeManagedJobTemplate(const DescribeManagedJobTemplateRequest &request)
{
    return qobject_cast<DescribeManagedJobTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeMitigationActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a mitigation
 *
 * action>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeMitigationAction</a>
 */
DescribeMitigationActionResponse * IoTClient::describeMitigationAction(const DescribeMitigationActionRequest &request)
{
    return qobject_cast<DescribeMitigationActionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeProvisioningTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a provisioning
 *
 * template>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeProvisioningTemplate</a>
 */
DescribeProvisioningTemplateResponse * IoTClient::describeProvisioningTemplate(const DescribeProvisioningTemplateRequest &request)
{
    return qobject_cast<DescribeProvisioningTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeProvisioningTemplateVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a provisioning template
 *
 * version>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeProvisioningTemplateVersion</a>
 */
DescribeProvisioningTemplateVersionResponse * IoTClient::describeProvisioningTemplateVersion(const DescribeProvisioningTemplateVersionRequest &request)
{
    return qobject_cast<DescribeProvisioningTemplateVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeRoleAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a role
 *
 * alias>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeRoleAlias</a>
 */
DescribeRoleAliasResponse * IoTClient::describeRoleAlias(const DescribeRoleAliasRequest &request)
{
    return qobject_cast<DescribeRoleAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeScheduledAuditResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a scheduled
 *
 * audit>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeScheduledAudit</a>
 */
DescribeScheduledAuditResponse * IoTClient::describeScheduledAudit(const DescribeScheduledAuditRequest &request)
{
    return qobject_cast<DescribeScheduledAuditResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a Device Defender security
 *
 * profile>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeSecurityProfile</a>
 */
DescribeSecurityProfileResponse * IoTClient::describeSecurityProfile(const DescribeSecurityProfileRequest &request)
{
    return qobject_cast<DescribeSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a
 *
 * stream>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeStream</a>
 */
DescribeStreamResponse * IoTClient::describeStream(const DescribeStreamRequest &request)
{
    return qobject_cast<DescribeStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified
 *
 * thing>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeThing</a>
 */
DescribeThingResponse * IoTClient::describeThing(const DescribeThingRequest &request)
{
    return qobject_cast<DescribeThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describe a thing
 *
 * group>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeThingGroup</a>
 */
DescribeThingGroupResponse * IoTClient::describeThingGroup(const DescribeThingGroupRequest &request)
{
    return qobject_cast<DescribeThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeThingRegistrationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a bulk thing provisioning
 *
 * task>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeThingRegistrationTask</a>
 */
DescribeThingRegistrationTaskResponse * IoTClient::describeThingRegistrationTask(const DescribeThingRegistrationTaskRequest &request)
{
    return qobject_cast<DescribeThingRegistrationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DescribeThingTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified thing
 *
 * type>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeThingType</a>
 */
DescribeThingTypeResponse * IoTClient::describeThingType(const DescribeThingTypeRequest &request)
{
    return qobject_cast<DescribeThingTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DetachPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches a policy from the specified
 *
 * target> <note>
 *
 * Because of the distributed nature of Amazon Web Services, it can take up to five minutes after a policy is detached
 * before it's ready to be
 *
 * deleted> </note>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DetachPolicy</a>
 */
DetachPolicyResponse * IoTClient::detachPolicy(const DetachPolicyRequest &request)
{
    return qobject_cast<DetachPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DetachPrincipalPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified policy from the specified
 *
 * certificate>
 *
 * <b>Note:</b> This action is deprecated and works as expected for backward compatibility, but we won't add enhancements.
 * Use <a>DetachPolicy</a>
 *
 * instead>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DetachPrincipalPolicy</a>
 */
DetachPrincipalPolicyResponse * IoTClient::detachPrincipalPolicy(const DetachPrincipalPolicyRequest &request)
{
    return qobject_cast<DetachPrincipalPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DetachSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a Device Defender security profile from a thing group or from this
 *
 * account>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DetachSecurityProfile</a>
 */
DetachSecurityProfileResponse * IoTClient::detachSecurityProfile(const DetachSecurityProfileRequest &request)
{
    return qobject_cast<DetachSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DetachThingPrincipalResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detaches the specified principal from the specified thing. A principal can be X.509 certificates, IAM users, groups, and
 * roles, Amazon Cognito identities or federated
 *
 * identities> <note>
 *
 * This call is asynchronous. It might take several seconds for the detachment to
 *
 * propagate> </note>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DetachThingPrincipal</a>
 */
DetachThingPrincipalResponse * IoTClient::detachThingPrincipal(const DetachThingPrincipalRequest &request)
{
    return qobject_cast<DetachThingPrincipalResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * DisableTopicRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the
 *
 * rule>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DisableTopicRule</a>
 */
DisableTopicRuleResponse * IoTClient::disableTopicRule(const DisableTopicRuleRequest &request)
{
    return qobject_cast<DisableTopicRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * EnableTopicRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the
 *
 * rule>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">EnableTopicRule</a>
 */
EnableTopicRuleResponse * IoTClient::enableTopicRule(const EnableTopicRuleRequest &request)
{
    return qobject_cast<EnableTopicRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetBehaviorModelTrainingSummariesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a Device Defender's ML Detect Security Profile training model's status.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetBehaviorModelTrainingSummaries</a>
 */
GetBehaviorModelTrainingSummariesResponse * IoTClient::getBehaviorModelTrainingSummaries(const GetBehaviorModelTrainingSummariesRequest &request)
{
    return qobject_cast<GetBehaviorModelTrainingSummariesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetBucketsAggregationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Aggregates on indexed data with search queries pertaining to particular fields.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetBucketsAggregation</a>
 */
GetBucketsAggregationResponse * IoTClient::getBucketsAggregation(const GetBucketsAggregationRequest &request)
{
    return qobject_cast<GetBucketsAggregationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetCardinalityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the approximate count of unique values that match the
 *
 * query>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetCardinality</a>
 */
GetCardinalityResponse * IoTClient::getCardinality(const GetCardinalityRequest &request)
{
    return qobject_cast<GetCardinalityResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetEffectivePoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the policies that have an effect on the authorization behavior of the specified device when it connects
 * to the IoT device
 *
 * gateway>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetEffectivePolicies</a>
 */
GetEffectivePoliciesResponse * IoTClient::getEffectivePolicies(const GetEffectivePoliciesRequest &request)
{
    return qobject_cast<GetEffectivePoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetIndexingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the indexing
 *
 * configuration>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetIndexingConfiguration</a>
 */
GetIndexingConfigurationResponse * IoTClient::getIndexingConfiguration(const GetIndexingConfigurationRequest &request)
{
    return qobject_cast<GetIndexingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetJobDocumentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a job
 *
 * document>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetJobDocument</a>
 */
GetJobDocumentResponse * IoTClient::getJobDocument(const GetJobDocumentRequest &request)
{
    return qobject_cast<GetJobDocumentResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetLoggingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the logging
 *
 * options>
 *
 * NOTE: use of this command is not recommended. Use <code>GetV2LoggingOptions</code>
 *
 * instead>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetLoggingOptions</a>
 */
GetLoggingOptionsResponse * IoTClient::getLoggingOptions(const GetLoggingOptionsRequest &request)
{
    return qobject_cast<GetLoggingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetOTAUpdateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an OTA
 *
 * update>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetOTAUpdate</a>
 */
GetOTAUpdateResponse * IoTClient::getOTAUpdate(const GetOTAUpdateRequest &request)
{
    return qobject_cast<GetOTAUpdateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetPercentilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Groups the aggregated values that match the query into percentile groupings. The default percentile groupings are:
 * 1,5,25,50,75,95,99, although you can specify your own when you call <code>GetPercentiles</code>. This function returns a
 * value for each percentile group specified (or the default percentile groupings). The percentile group "1" contains the
 * aggregated field value that occurs in approximately one percent of the values that match the query. The percentile group
 * "5" contains the aggregated field value that occurs in approximately five percent of the values that match the query,
 * and so on. The result is an approximation, the more values that match the query, the more accurate the percentile
 *
 * values>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetPercentiles</a>
 */
GetPercentilesResponse * IoTClient::getPercentiles(const GetPercentilesRequest &request)
{
    return qobject_cast<GetPercentilesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified policy with the policy document of the default
 *
 * version>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetPolicy</a>
 */
GetPolicyResponse * IoTClient::getPolicy(const GetPolicyRequest &request)
{
    return qobject_cast<GetPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetPolicyVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified policy
 *
 * version>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetPolicyVersion</a>
 */
GetPolicyVersionResponse * IoTClient::getPolicyVersion(const GetPolicyVersionRequest &request)
{
    return qobject_cast<GetPolicyVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetRegistrationCodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a registration code used to register a CA certificate with
 *
 * IoT>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetRegistrationCode</a>
 */
GetRegistrationCodeResponse * IoTClient::getRegistrationCode(const GetRegistrationCodeRequest &request)
{
    return qobject_cast<GetRegistrationCodeResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetStatisticsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the count, average, sum, minimum, maximum, sum of squares, variance, and standard deviation for the specified
 * aggregated field. If the aggregation field is of type <code>String</code>, only the count statistic is
 *
 * returned>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetStatistics</a>
 */
GetStatisticsResponse * IoTClient::getStatistics(const GetStatisticsRequest &request)
{
    return qobject_cast<GetStatisticsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetTopicRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the
 *
 * rule>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetTopicRule</a>
 */
GetTopicRuleResponse * IoTClient::getTopicRule(const GetTopicRuleRequest &request)
{
    return qobject_cast<GetTopicRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetTopicRuleDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a topic rule
 *
 * destination>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetTopicRuleDestination</a>
 */
GetTopicRuleDestinationResponse * IoTClient::getTopicRuleDestination(const GetTopicRuleDestinationRequest &request)
{
    return qobject_cast<GetTopicRuleDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * GetV2LoggingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the fine grained logging
 *
 * options>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetV2LoggingOptions</a>
 */
GetV2LoggingOptionsResponse * IoTClient::getV2LoggingOptions(const GetV2LoggingOptionsRequest &request)
{
    return qobject_cast<GetV2LoggingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListActiveViolationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the active violations for a given Device Defender security
 *
 * profile>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListActiveViolations</a>
 */
ListActiveViolationsResponse * IoTClient::listActiveViolations(const ListActiveViolationsRequest &request)
{
    return qobject_cast<ListActiveViolationsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListAttachedPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the policies attached to the specified thing
 *
 * group>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListAttachedPolicies</a>
 */
ListAttachedPoliciesResponse * IoTClient::listAttachedPolicies(const ListAttachedPoliciesRequest &request)
{
    return qobject_cast<ListAttachedPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListAuditFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the findings (results) of a Device Defender audit or of the audits performed during a specified time period.
 * (Findings are retained for 90
 *
 * days.>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListAuditFindings</a>
 */
ListAuditFindingsResponse * IoTClient::listAuditFindings(const ListAuditFindingsRequest &request)
{
    return qobject_cast<ListAuditFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListAuditMitigationActionsExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the status of audit mitigation action tasks that were
 *
 * executed>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListAuditMitigationActionsExecutions</a>
 */
ListAuditMitigationActionsExecutionsResponse * IoTClient::listAuditMitigationActionsExecutions(const ListAuditMitigationActionsExecutionsRequest &request)
{
    return qobject_cast<ListAuditMitigationActionsExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListAuditMitigationActionsTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of audit mitigation action tasks that match the specified
 *
 * filters>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListAuditMitigationActionsTasks</a>
 */
ListAuditMitigationActionsTasksResponse * IoTClient::listAuditMitigationActionsTasks(const ListAuditMitigationActionsTasksRequest &request)
{
    return qobject_cast<ListAuditMitigationActionsTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListAuditSuppressionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your Device Defender audit listings.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListAuditSuppressions</a>
 */
ListAuditSuppressionsResponse * IoTClient::listAuditSuppressions(const ListAuditSuppressionsRequest &request)
{
    return qobject_cast<ListAuditSuppressionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListAuditTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Device Defender audits that have been performed during a given time
 *
 * period>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListAuditTasks</a>
 */
ListAuditTasksResponse * IoTClient::listAuditTasks(const ListAuditTasksRequest &request)
{
    return qobject_cast<ListAuditTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListAuthorizersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the authorizers registered in your
 *
 * account>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListAuthorizers</a>
 */
ListAuthorizersResponse * IoTClient::listAuthorizers(const ListAuthorizersRequest &request)
{
    return qobject_cast<ListAuthorizersResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListBillingGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the billing groups you have
 *
 * created>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListBillingGroups</a>
 */
ListBillingGroupsResponse * IoTClient::listBillingGroups(const ListBillingGroupsRequest &request)
{
    return qobject_cast<ListBillingGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListCACertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the CA certificates registered for your Amazon Web Services
 *
 * account>
 *
 * The results are paginated with a default page size of 25. You can use the returned marker to retrieve additional
 *
 * results>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListCACertificates</a>
 */
ListCACertificatesResponse * IoTClient::listCACertificates(const ListCACertificatesRequest &request)
{
    return qobject_cast<ListCACertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the certificates registered in your Amazon Web Services
 *
 * account>
 *
 * The results are paginated with a default page size of 25. You can use the returned marker to retrieve additional
 *
 * results>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListCertificates</a>
 */
ListCertificatesResponse * IoTClient::listCertificates(const ListCertificatesRequest &request)
{
    return qobject_cast<ListCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListCertificatesByCAResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the device certificates signed by the specified CA
 *
 * certificate>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListCertificatesByCA</a>
 */
ListCertificatesByCAResponse * IoTClient::listCertificatesByCA(const ListCertificatesByCARequest &request)
{
    return qobject_cast<ListCertificatesByCAResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListCustomMetricsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your Device Defender detect custom metrics.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListCustomMetrics</a>
 */
ListCustomMetricsResponse * IoTClient::listCustomMetrics(const ListCustomMetricsRequest &request)
{
    return qobject_cast<ListCustomMetricsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListDetectMitigationActionsExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists mitigation actions executions for a Device Defender ML Detect Security Profile.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListDetectMitigationActionsExecutions</a>
 */
ListDetectMitigationActionsExecutionsResponse * IoTClient::listDetectMitigationActionsExecutions(const ListDetectMitigationActionsExecutionsRequest &request)
{
    return qobject_cast<ListDetectMitigationActionsExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListDetectMitigationActionsTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List of Device Defender ML Detect mitigation actions tasks.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListDetectMitigationActionsTasks</a>
 */
ListDetectMitigationActionsTasksResponse * IoTClient::listDetectMitigationActionsTasks(const ListDetectMitigationActionsTasksRequest &request)
{
    return qobject_cast<ListDetectMitigationActionsTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListDimensionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the set of dimensions that are defined for your Amazon Web Services
 *
 * accounts>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListDimensions</a>
 */
ListDimensionsResponse * IoTClient::listDimensions(const ListDimensionsRequest &request)
{
    return qobject_cast<ListDimensionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListDomainConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of domain configurations for the user. This list is sorted alphabetically by domain configuration
 *
 * name>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListDomainConfigurations</a>
 */
ListDomainConfigurationsResponse * IoTClient::listDomainConfigurations(const ListDomainConfigurationsRequest &request)
{
    return qobject_cast<ListDomainConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListFleetMetricsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all your fleet metrics.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListFleetMetrics</a>
 */
ListFleetMetricsResponse * IoTClient::listFleetMetrics(const ListFleetMetricsRequest &request)
{
    return qobject_cast<ListFleetMetricsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListIndicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the search
 *
 * indices>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListIndices</a>
 */
ListIndicesResponse * IoTClient::listIndices(const ListIndicesRequest &request)
{
    return qobject_cast<ListIndicesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListJobExecutionsForJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the job executions for a
 *
 * job>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListJobExecutionsForJob</a>
 */
ListJobExecutionsForJobResponse * IoTClient::listJobExecutionsForJob(const ListJobExecutionsForJobRequest &request)
{
    return qobject_cast<ListJobExecutionsForJobResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListJobExecutionsForThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the job executions for the specified
 *
 * thing>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListJobExecutionsForThing</a>
 */
ListJobExecutionsForThingResponse * IoTClient::listJobExecutionsForThing(const ListJobExecutionsForThingRequest &request)
{
    return qobject_cast<ListJobExecutionsForThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListJobTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of job
 *
 * templates>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListJobTemplates</a>
 */
ListJobTemplatesResponse * IoTClient::listJobTemplates(const ListJobTemplatesRequest &request)
{
    return qobject_cast<ListJobTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists
 *
 * jobs>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListJobs</a>
 */
ListJobsResponse * IoTClient::listJobs(const ListJobsRequest &request)
{
    return qobject_cast<ListJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListManagedJobTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of managed job
 */
ListManagedJobTemplatesResponse * IoTClient::listManagedJobTemplates(const ListManagedJobTemplatesRequest &request)
{
    return qobject_cast<ListManagedJobTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListMetricValuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the values reported for an IoT Device Defender metric (device-side metric, cloud-side metric, or custom metric) by
 * the given thing during the specified time
 */
ListMetricValuesResponse * IoTClient::listMetricValues(const ListMetricValuesRequest &request)
{
    return qobject_cast<ListMetricValuesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListMitigationActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of all mitigation actions that match the specified filter
 *
 * criteria>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListMitigationActions</a>
 */
ListMitigationActionsResponse * IoTClient::listMitigationActions(const ListMitigationActionsRequest &request)
{
    return qobject_cast<ListMitigationActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListOTAUpdatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists OTA
 *
 * updates>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListOTAUpdates</a>
 */
ListOTAUpdatesResponse * IoTClient::listOTAUpdates(const ListOTAUpdatesRequest &request)
{
    return qobject_cast<ListOTAUpdatesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListOutgoingCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists certificates that are being transferred but not yet
 *
 * accepted>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListOutgoingCertificates</a>
 */
ListOutgoingCertificatesResponse * IoTClient::listOutgoingCertificates(const ListOutgoingCertificatesRequest &request)
{
    return qobject_cast<ListOutgoingCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your
 *
 * policies>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListPolicies</a>
 */
ListPoliciesResponse * IoTClient::listPolicies(const ListPoliciesRequest &request)
{
    return qobject_cast<ListPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListPolicyPrincipalsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the principals associated with the specified
 *
 * policy>
 *
 * <b>Note:</b> This action is deprecated and works as expected for backward compatibility, but we won't add enhancements.
 * Use <a>ListTargetsForPolicy</a>
 *
 * instead>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListPolicyPrincipals</a>
 */
ListPolicyPrincipalsResponse * IoTClient::listPolicyPrincipals(const ListPolicyPrincipalsRequest &request)
{
    return qobject_cast<ListPolicyPrincipalsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListPolicyVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the versions of the specified policy and identifies the default
 *
 * version>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListPolicyVersions</a>
 */
ListPolicyVersionsResponse * IoTClient::listPolicyVersions(const ListPolicyVersionsRequest &request)
{
    return qobject_cast<ListPolicyVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListPrincipalPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the policies attached to the specified principal. If you use an Cognito identity, the ID must be in <a
 * href="https://docs.aws.amazon.com/cognitoidentity/latest/APIReference/API_GetCredentialsForIdentity.html#API_GetCredentialsForIdentity_RequestSyntax">AmazonCognito
 * Identity
 *
 * format</a>>
 *
 * <b>Note:</b> This action is deprecated and works as expected for backward compatibility, but we won't add enhancements.
 * Use <a>ListAttachedPolicies</a>
 *
 * instead>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListPrincipalPolicies</a>
 */
ListPrincipalPoliciesResponse * IoTClient::listPrincipalPolicies(const ListPrincipalPoliciesRequest &request)
{
    return qobject_cast<ListPrincipalPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListPrincipalThingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the things associated with the specified principal. A principal can be X.509 certificates, IAM users, groups, and
 * roles, Amazon Cognito identities or federated identities.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListPrincipalThings</a>
 */
ListPrincipalThingsResponse * IoTClient::listPrincipalThings(const ListPrincipalThingsRequest &request)
{
    return qobject_cast<ListPrincipalThingsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListProvisioningTemplateVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A list of provisioning template
 *
 * versions>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListProvisioningTemplateVersions</a>
 */
ListProvisioningTemplateVersionsResponse * IoTClient::listProvisioningTemplateVersions(const ListProvisioningTemplateVersionsRequest &request)
{
    return qobject_cast<ListProvisioningTemplateVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListProvisioningTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the provisioning templates in your Amazon Web Services
 *
 * account>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListProvisioningTemplates</a>
 */
ListProvisioningTemplatesResponse * IoTClient::listProvisioningTemplates(const ListProvisioningTemplatesRequest &request)
{
    return qobject_cast<ListProvisioningTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListRoleAliasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the role aliases registered in your
 *
 * account>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListRoleAliases</a>
 */
ListRoleAliasesResponse * IoTClient::listRoleAliases(const ListRoleAliasesRequest &request)
{
    return qobject_cast<ListRoleAliasesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListScheduledAuditsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of your scheduled
 *
 * audits>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListScheduledAudits</a>
 */
ListScheduledAuditsResponse * IoTClient::listScheduledAudits(const ListScheduledAuditsRequest &request)
{
    return qobject_cast<ListScheduledAuditsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListSecurityProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Device Defender security profiles you've created. You can filter security profiles by dimension or custom
 *
 * metric>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListSecurityProfiles</a>
 *
 * action> <note>
 *
 * <code>dimensionName</code> and <code>metricName</code> cannot be used in the same
 */
ListSecurityProfilesResponse * IoTClient::listSecurityProfiles(const ListSecurityProfilesRequest &request)
{
    return qobject_cast<ListSecurityProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListSecurityProfilesForTargetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Device Defender security profiles attached to a target (thing
 *
 * group)>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListSecurityProfilesForTarget</a>
 */
ListSecurityProfilesForTargetResponse * IoTClient::listSecurityProfilesForTarget(const ListSecurityProfilesForTargetRequest &request)
{
    return qobject_cast<ListSecurityProfilesForTargetResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListStreamsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the streams in your Amazon Web Services
 *
 * account>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListStreams</a>
 */
ListStreamsResponse * IoTClient::listStreams(const ListStreamsRequest &request)
{
    return qobject_cast<ListStreamsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags (metadata) you have assigned to the
 *
 * resource>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListTagsForResource</a>
 */
ListTagsForResourceResponse * IoTClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListTargetsForPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List targets for the specified
 *
 * policy>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListTargetsForPolicy</a>
 */
ListTargetsForPolicyResponse * IoTClient::listTargetsForPolicy(const ListTargetsForPolicyRequest &request)
{
    return qobject_cast<ListTargetsForPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListTargetsForSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the targets (thing groups) associated with a given Device Defender security
 *
 * profile>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListTargetsForSecurityProfile</a>
 */
ListTargetsForSecurityProfileResponse * IoTClient::listTargetsForSecurityProfile(const ListTargetsForSecurityProfileRequest &request)
{
    return qobject_cast<ListTargetsForSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the thing groups in your
 *
 * account>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListThingGroups</a>
 */
ListThingGroupsResponse * IoTClient::listThingGroups(const ListThingGroupsRequest &request)
{
    return qobject_cast<ListThingGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingGroupsForThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the thing groups to which the specified thing
 *
 * belongs>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListThingGroupsForThing</a>
 */
ListThingGroupsForThingResponse * IoTClient::listThingGroupsForThing(const ListThingGroupsForThingRequest &request)
{
    return qobject_cast<ListThingGroupsForThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingPrincipalsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the principals associated with the specified thing. A principal can be X.509 certificates, IAM users, groups, and
 * roles, Amazon Cognito identities or federated
 *
 * identities>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListThingPrincipals</a>
 */
ListThingPrincipalsResponse * IoTClient::listThingPrincipals(const ListThingPrincipalsRequest &request)
{
    return qobject_cast<ListThingPrincipalsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingRegistrationTaskReportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Information about the thing registration
 */
ListThingRegistrationTaskReportsResponse * IoTClient::listThingRegistrationTaskReports(const ListThingRegistrationTaskReportsRequest &request)
{
    return qobject_cast<ListThingRegistrationTaskReportsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingRegistrationTasksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List bulk thing provisioning
 *
 * tasks>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListThingRegistrationTasks</a>
 */
ListThingRegistrationTasksResponse * IoTClient::listThingRegistrationTasks(const ListThingRegistrationTasksRequest &request)
{
    return qobject_cast<ListThingRegistrationTasksResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the existing thing
 *
 * types>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListThingTypes</a>
 */
ListThingTypesResponse * IoTClient::listThingTypes(const ListThingTypesRequest &request)
{
    return qobject_cast<ListThingTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists your things. Use the <b>attributeName</b> and <b>attributeValue</b> parameters to filter your things. For example,
 * calling <code>ListThings</code> with attributeName=Color and attributeValue=Red retrieves all things in the registry
 * that contain an attribute <b>Color</b> with the value <b>Red</b>.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListThings</a>
 *
 * action> <note>
 *
 * You will not be charged for calling this API if an <code>Access denied</code> error is returned. You will also not be
 * charged if no attributes or pagination token was provided in request and no pagination token and no results were
 */
ListThingsResponse * IoTClient::listThings(const ListThingsRequest &request)
{
    return qobject_cast<ListThingsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingsInBillingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the things you have added to the given billing
 *
 * group>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListThingsInBillingGroup</a>
 */
ListThingsInBillingGroupResponse * IoTClient::listThingsInBillingGroup(const ListThingsInBillingGroupRequest &request)
{
    return qobject_cast<ListThingsInBillingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListThingsInThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the things in the specified
 *
 * group>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListThingsInThingGroup</a>
 */
ListThingsInThingGroupResponse * IoTClient::listThingsInThingGroup(const ListThingsInThingGroupRequest &request)
{
    return qobject_cast<ListThingsInThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListTopicRuleDestinationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the topic rule destinations in your Amazon Web Services
 *
 * account>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListTopicRuleDestinations</a>
 */
ListTopicRuleDestinationsResponse * IoTClient::listTopicRuleDestinations(const ListTopicRuleDestinationsRequest &request)
{
    return qobject_cast<ListTopicRuleDestinationsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListTopicRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the rules for the specific
 *
 * topic>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListTopicRules</a>
 */
ListTopicRulesResponse * IoTClient::listTopicRules(const ListTopicRulesRequest &request)
{
    return qobject_cast<ListTopicRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListV2LoggingLevelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists logging
 *
 * levels>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListV2LoggingLevels</a>
 */
ListV2LoggingLevelsResponse * IoTClient::listV2LoggingLevels(const ListV2LoggingLevelsRequest &request)
{
    return qobject_cast<ListV2LoggingLevelsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ListViolationEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Device Defender security profile violations discovered during the given time period. You can use filters to
 * limit the results to those alerts issued for a particular security profile, behavior, or thing
 *
 * (device)>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListViolationEvents</a>
 */
ListViolationEventsResponse * IoTClient::listViolationEvents(const ListViolationEventsRequest &request)
{
    return qobject_cast<ListViolationEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * PutVerificationStateOnViolationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Set a verification state and provide a description of that verification state on a violation (detect
 */
PutVerificationStateOnViolationResponse * IoTClient::putVerificationStateOnViolation(const PutVerificationStateOnViolationRequest &request)
{
    return qobject_cast<PutVerificationStateOnViolationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * RegisterCACertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a CA certificate with Amazon Web Services IoT Core. There is no limit to the number of CA certificates you can
 * register in your Amazon Web Services account. You can register up to 10 CA certificates with the same <code>CA subject
 * field</code> per Amazon Web Services
 *
 * account>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">RegisterCACertificate</a>
 */
RegisterCACertificateResponse * IoTClient::registerCACertificate(const RegisterCACertificateRequest &request)
{
    return qobject_cast<RegisterCACertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * RegisterCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a device certificate with IoT in the same <a
 * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CertificateDescription.html#iot-Type-CertificateDescription-certificateMode">certificate
 * mode</a> as the signing CA. If you have more than one CA certificate that has the same subject field, you must specify
 * the CA certificate that was used to sign the device certificate being
 *
 * registered>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">RegisterCertificate</a>
 */
RegisterCertificateResponse * IoTClient::registerCertificate(const RegisterCertificateRequest &request)
{
    return qobject_cast<RegisterCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * RegisterCertificateWithoutCAResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Register a certificate that does not have a certificate authority (CA). For supported certificates, consult <a
 * href="https://docs.aws.amazon.com/iot/latest/developerguide/x509-client-certs.html#x509-cert-algorithms"> Certificate
 * signing algorithms supported by IoT</a>.
 */
RegisterCertificateWithoutCAResponse * IoTClient::registerCertificateWithoutCA(const RegisterCertificateWithoutCARequest &request)
{
    return qobject_cast<RegisterCertificateWithoutCAResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * RegisterThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provisions a thing in the device registry. RegisterThing calls other IoT control plane APIs. These calls might exceed
 * your account level <a href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_iot"> IoT
 * Throttling Limits</a> and cause throttle errors. Please contact <a
 * href="https://console.aws.amazon.com/support/home">Amazon Web Services Customer Support</a> to raise your throttling
 * limits if
 *
 * necessary>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">RegisterThing</a>
 */
RegisterThingResponse * IoTClient::registerThing(const RegisterThingRequest &request)
{
    return qobject_cast<RegisterThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * RejectCertificateTransferResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Rejects a pending certificate transfer. After IoT rejects a certificate transfer, the certificate status changes from
 * <b>PENDING_TRANSFER</b> to
 *
 * <b>INACTIVE</b>>
 *
 * To check for pending certificate transfers, call <a>ListCertificates</a> to enumerate your
 *
 * certificates>
 *
 * This operation can only be called by the transfer destination. After it is called, the certificate will be returned to
 * the source's account in the INACTIVE
 *
 * state>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">RejectCertificateTransfer</a>
 */
RejectCertificateTransferResponse * IoTClient::rejectCertificateTransfer(const RejectCertificateTransferRequest &request)
{
    return qobject_cast<RejectCertificateTransferResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * RemoveThingFromBillingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the given thing from the billing
 *
 * group>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">RemoveThingFromBillingGroup</a>
 *
 * action> <note>
 *
 * This call is asynchronous. It might take several seconds for the detachment to
 */
RemoveThingFromBillingGroupResponse * IoTClient::removeThingFromBillingGroup(const RemoveThingFromBillingGroupRequest &request)
{
    return qobject_cast<RemoveThingFromBillingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * RemoveThingFromThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove the specified thing from the specified
 *
 * group>
 *
 * You must specify either a <code>thingGroupArn</code> or a <code>thingGroupName</code> to identify the thing group and
 * either a <code>thingArn</code> or a <code>thingName</code> to identify the thing to remove from the thing group.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">RemoveThingFromThingGroup</a>
 */
RemoveThingFromThingGroupResponse * IoTClient::removeThingFromThingGroup(const RemoveThingFromThingGroupRequest &request)
{
    return qobject_cast<RemoveThingFromThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ReplaceTopicRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces the rule. You must specify all parameters for the new rule. Creating rules is an administrator-level action.
 * Any user who has permission to create rules will be able to access data processed by the
 *
 * rule>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ReplaceTopicRule</a>
 */
ReplaceTopicRuleResponse * IoTClient::replaceTopicRule(const ReplaceTopicRuleRequest &request)
{
    return qobject_cast<ReplaceTopicRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * SearchIndexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The query search
 *
 * index>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">SearchIndex</a>
 */
SearchIndexResponse * IoTClient::searchIndex(const SearchIndexRequest &request)
{
    return qobject_cast<SearchIndexResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * SetDefaultAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the default authorizer. This will be used if a websocket connection is made without specifying an
 *
 * authorizer>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">SetDefaultAuthorizer</a>
 */
SetDefaultAuthorizerResponse * IoTClient::setDefaultAuthorizer(const SetDefaultAuthorizerRequest &request)
{
    return qobject_cast<SetDefaultAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * SetDefaultPolicyVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the specified version of the specified policy as the policy's default (operative) version. This action affects all
 * certificates to which the policy is attached. To list the principals the policy is attached to, use the
 * <a>ListPrincipalPolicies</a>
 *
 * action>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">SetDefaultPolicyVersion</a>
 */
SetDefaultPolicyVersionResponse * IoTClient::setDefaultPolicyVersion(const SetDefaultPolicyVersionRequest &request)
{
    return qobject_cast<SetDefaultPolicyVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * SetLoggingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the logging
 *
 * options>
 *
 * NOTE: use of this command is not recommended. Use <code>SetV2LoggingOptions</code>
 *
 * instead>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">SetLoggingOptions</a>
 */
SetLoggingOptionsResponse * IoTClient::setLoggingOptions(const SetLoggingOptionsRequest &request)
{
    return qobject_cast<SetLoggingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * SetV2LoggingLevelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the logging
 *
 * level>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">SetV2LoggingLevel</a>
 */
SetV2LoggingLevelResponse * IoTClient::setV2LoggingLevel(const SetV2LoggingLevelRequest &request)
{
    return qobject_cast<SetV2LoggingLevelResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * SetV2LoggingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the logging options for the V2 logging
 *
 * service>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">SetV2LoggingOptions</a>
 */
SetV2LoggingOptionsResponse * IoTClient::setV2LoggingOptions(const SetV2LoggingOptionsRequest &request)
{
    return qobject_cast<SetV2LoggingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * StartAuditMitigationActionsTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a task that applies a set of mitigation actions to the specified
 *
 * target>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">StartAuditMitigationActionsTask</a>
 */
StartAuditMitigationActionsTaskResponse * IoTClient::startAuditMitigationActionsTask(const StartAuditMitigationActionsTaskRequest &request)
{
    return qobject_cast<StartAuditMitigationActionsTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * StartDetectMitigationActionsTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a Device Defender ML Detect mitigation actions task.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">StartDetectMitigationActionsTask</a>
 */
StartDetectMitigationActionsTaskResponse * IoTClient::startDetectMitigationActionsTask(const StartDetectMitigationActionsTaskRequest &request)
{
    return qobject_cast<StartDetectMitigationActionsTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * StartOnDemandAuditTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an on-demand Device Defender
 *
 * audit>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">StartOnDemandAuditTask</a>
 */
StartOnDemandAuditTaskResponse * IoTClient::startOnDemandAuditTask(const StartOnDemandAuditTaskRequest &request)
{
    return qobject_cast<StartOnDemandAuditTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * StartThingRegistrationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a bulk thing provisioning
 *
 * task>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">StartThingRegistrationTask</a>
 */
StartThingRegistrationTaskResponse * IoTClient::startThingRegistrationTask(const StartThingRegistrationTaskRequest &request)
{
    return qobject_cast<StartThingRegistrationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * StopThingRegistrationTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a bulk thing provisioning
 *
 * task>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">StopThingRegistrationTask</a>
 */
StopThingRegistrationTaskResponse * IoTClient::stopThingRegistrationTask(const StopThingRegistrationTaskRequest &request)
{
    return qobject_cast<StopThingRegistrationTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds to or modifies the tags of the given resource. Tags are metadata which can be used to manage a
 *
 * resource>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">TagResource</a>
 */
TagResourceResponse * IoTClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * TestAuthorizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tests if a specified principal is authorized to perform an IoT action on a specified resource. Use this to test and
 * debug the authorization behavior of devices that connect to the IoT device
 *
 * gateway>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">TestAuthorization</a>
 */
TestAuthorizationResponse * IoTClient::testAuthorization(const TestAuthorizationRequest &request)
{
    return qobject_cast<TestAuthorizationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * TestInvokeAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tests a custom authorization behavior by invoking a specified custom authorizer. Use this to test and debug the custom
 * authorization behavior of devices that connect to the IoT device
 *
 * gateway>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">TestInvokeAuthorizer</a>
 */
TestInvokeAuthorizerResponse * IoTClient::testInvokeAuthorizer(const TestInvokeAuthorizerRequest &request)
{
    return qobject_cast<TestInvokeAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * TransferCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Transfers the specified certificate to the specified Amazon Web Services
 *
 * account>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">TransferCertificate</a>
 *
 * action>
 *
 * You can cancel the transfer until it is acknowledged by the
 *
 * recipient>
 *
 * No notification is sent to the transfer destination's account. It is up to the caller to notify the transfer
 *
 * target>
 *
 * The certificate being transferred must not be in the ACTIVE state. You can use the <a>UpdateCertificate</a> action to
 * deactivate
 *
 * it>
 *
 * The certificate must not have any policies attached to it. You can use the <a>DetachPolicy</a> action to detach
 */
TransferCertificateResponse * IoTClient::transferCertificate(const TransferCertificateRequest &request)
{
    return qobject_cast<TransferCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the given tags (metadata) from the
 *
 * resource>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UntagResource</a>
 */
UntagResourceResponse * IoTClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateAccountAuditConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Configures or reconfigures the Device Defender audit settings for this account. Settings include how audit notifications
 * are sent and which audit checks are enabled or
 *
 * disabled>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateAccountAuditConfiguration</a>
 */
UpdateAccountAuditConfigurationResponse * IoTClient::updateAccountAuditConfiguration(const UpdateAccountAuditConfigurationRequest &request)
{
    return qobject_cast<UpdateAccountAuditConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateAuditSuppressionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a Device Defender audit suppression.
 */
UpdateAuditSuppressionResponse * IoTClient::updateAuditSuppression(const UpdateAuditSuppressionRequest &request)
{
    return qobject_cast<UpdateAuditSuppressionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateAuthorizerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an
 *
 * authorizer>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateAuthorizer</a>
 */
UpdateAuthorizerResponse * IoTClient::updateAuthorizer(const UpdateAuthorizerRequest &request)
{
    return qobject_cast<UpdateAuthorizerResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateBillingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates information about the billing
 *
 * group>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateBillingGroup</a>
 */
UpdateBillingGroupResponse * IoTClient::updateBillingGroup(const UpdateBillingGroupRequest &request)
{
    return qobject_cast<UpdateBillingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateCACertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a registered CA
 *
 * certificate>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateCACertificate</a>
 */
UpdateCACertificateResponse * IoTClient::updateCACertificate(const UpdateCACertificateRequest &request)
{
    return qobject_cast<UpdateCACertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the status of the specified certificate. This operation is
 *
 * idempotent>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateCertificate</a>
 *
 * action>
 *
 * Certificates must be in the ACTIVE state to authenticate devices that use a certificate to connect to
 *
 * IoT>
 *
 * Within a few minutes of updating a certificate from the ACTIVE state to any other state, IoT disconnects all devices
 * that used that certificate to connect. Devices cannot use a certificate that is not in the ACTIVE state to
 */
UpdateCertificateResponse * IoTClient::updateCertificate(const UpdateCertificateRequest &request)
{
    return qobject_cast<UpdateCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateCustomMetricResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a Device Defender detect custom metric.
 *
 * </p
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateCustomMetric</a>
 */
UpdateCustomMetricResponse * IoTClient::updateCustomMetric(const UpdateCustomMetricRequest &request)
{
    return qobject_cast<UpdateCustomMetricResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateDimensionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the definition for a dimension. You cannot change the type of a dimension after it is created (you can delete it
 * and recreate
 *
 * it)>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateDimension</a>
 */
UpdateDimensionResponse * IoTClient::updateDimension(const UpdateDimensionRequest &request)
{
    return qobject_cast<UpdateDimensionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateDomainConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates values stored in the domain configuration. Domain configurations for default endpoints can't be
 *
 * updated>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateDomainConfiguration</a>
 */
UpdateDomainConfigurationResponse * IoTClient::updateDomainConfiguration(const UpdateDomainConfigurationRequest &request)
{
    return qobject_cast<UpdateDomainConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateDynamicThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a dynamic thing
 *
 * group>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateDynamicThingGroup</a>
 */
UpdateDynamicThingGroupResponse * IoTClient::updateDynamicThingGroup(const UpdateDynamicThingGroupRequest &request)
{
    return qobject_cast<UpdateDynamicThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateEventConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the event
 *
 * configurations>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateEventConfigurations</a>
 */
UpdateEventConfigurationsResponse * IoTClient::updateEventConfigurations(const UpdateEventConfigurationsRequest &request)
{
    return qobject_cast<UpdateEventConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateFleetMetricResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the data for a fleet
 *
 * metric>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateFleetMetric</a>
 */
UpdateFleetMetricResponse * IoTClient::updateFleetMetric(const UpdateFleetMetricRequest &request)
{
    return qobject_cast<UpdateFleetMetricResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateIndexingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the search
 *
 * configuration>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateIndexingConfiguration</a>
 */
UpdateIndexingConfigurationResponse * IoTClient::updateIndexingConfiguration(const UpdateIndexingConfigurationRequest &request)
{
    return qobject_cast<UpdateIndexingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates supported fields of the specified
 *
 * job>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateJob</a>
 */
UpdateJobResponse * IoTClient::updateJob(const UpdateJobRequest &request)
{
    return qobject_cast<UpdateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateMitigationActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the definition for the specified mitigation
 *
 * action>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateMitigationAction</a>
 */
UpdateMitigationActionResponse * IoTClient::updateMitigationAction(const UpdateMitigationActionRequest &request)
{
    return qobject_cast<UpdateMitigationActionResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateProvisioningTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a provisioning
 *
 * template>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateProvisioningTemplate</a>
 */
UpdateProvisioningTemplateResponse * IoTClient::updateProvisioningTemplate(const UpdateProvisioningTemplateRequest &request)
{
    return qobject_cast<UpdateProvisioningTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateRoleAliasResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a role
 *
 * alias>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateRoleAlias</a>
 */
UpdateRoleAliasResponse * IoTClient::updateRoleAlias(const UpdateRoleAliasRequest &request)
{
    return qobject_cast<UpdateRoleAliasResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateScheduledAuditResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a scheduled audit, including which checks are performed and how often the audit takes
 *
 * place>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateScheduledAudit</a>
 */
UpdateScheduledAuditResponse * IoTClient::updateScheduledAudit(const UpdateScheduledAuditRequest &request)
{
    return qobject_cast<UpdateScheduledAuditResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateSecurityProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a Device Defender security
 *
 * profile>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateSecurityProfile</a>
 */
UpdateSecurityProfileResponse * IoTClient::updateSecurityProfile(const UpdateSecurityProfileRequest &request)
{
    return qobject_cast<UpdateSecurityProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing stream. The stream version will be incremented by
 *
 * one>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateStream</a>
 */
UpdateStreamResponse * IoTClient::updateStream(const UpdateStreamRequest &request)
{
    return qobject_cast<UpdateStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the data for a
 *
 * thing>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateThing</a>
 */
UpdateThingResponse * IoTClient::updateThing(const UpdateThingRequest &request)
{
    return qobject_cast<UpdateThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateThingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update a thing
 *
 * group>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateThingGroup</a>
 */
UpdateThingGroupResponse * IoTClient::updateThingGroup(const UpdateThingGroupRequest &request)
{
    return qobject_cast<UpdateThingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateThingGroupsForThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the groups to which the thing
 *
 * belongs>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateThingGroupsForThing</a>
 */
UpdateThingGroupsForThingResponse * IoTClient::updateThingGroupsForThing(const UpdateThingGroupsForThingRequest &request)
{
    return qobject_cast<UpdateThingGroupsForThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * UpdateTopicRuleDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a topic rule destination. You use this to change the status, endpoint URL, or confirmation URL of the
 *
 * destination>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateTopicRuleDestination</a>
 */
UpdateTopicRuleDestinationResponse * IoTClient::updateTopicRuleDestination(const UpdateTopicRuleDestinationRequest &request)
{
    return qobject_cast<UpdateTopicRuleDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTClient service, and returns a pointer to an
 * ValidateSecurityProfileBehaviorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Validates a Device Defender security profile behaviors
 *
 * specification>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ValidateSecurityProfileBehaviors</a>
 */
ValidateSecurityProfileBehaviorsResponse * IoTClient::validateSecurityProfileBehaviors(const ValidateSecurityProfileBehaviorsRequest &request)
{
    return qobject_cast<ValidateSecurityProfileBehaviorsResponse *>(send(request));
}

/*!
 * \class QtAws::IoT::IoTClientPrivate
 * \brief The IoTClientPrivate class provides private implementation for IoTClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a IoTClientPrivate object with public implementation \a q.
 */
IoTClientPrivate::IoTClientPrivate(IoTClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace IoT
} // namespace QtAws
