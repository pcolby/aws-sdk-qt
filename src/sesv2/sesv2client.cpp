// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sesv2client.h"
#include "sesv2client_p.h"

#include "core/awssignaturev4.h"
#include "createconfigurationsetrequest.h"
#include "createconfigurationsetresponse.h"
#include "createconfigurationseteventdestinationrequest.h"
#include "createconfigurationseteventdestinationresponse.h"
#include "createcontactrequest.h"
#include "createcontactresponse.h"
#include "createcontactlistrequest.h"
#include "createcontactlistresponse.h"
#include "createcustomverificationemailtemplaterequest.h"
#include "createcustomverificationemailtemplateresponse.h"
#include "creatededicatedippoolrequest.h"
#include "creatededicatedippoolresponse.h"
#include "createdeliverabilitytestreportrequest.h"
#include "createdeliverabilitytestreportresponse.h"
#include "createemailidentityrequest.h"
#include "createemailidentityresponse.h"
#include "createemailidentitypolicyrequest.h"
#include "createemailidentitypolicyresponse.h"
#include "createemailtemplaterequest.h"
#include "createemailtemplateresponse.h"
#include "createimportjobrequest.h"
#include "createimportjobresponse.h"
#include "deleteconfigurationsetrequest.h"
#include "deleteconfigurationsetresponse.h"
#include "deleteconfigurationseteventdestinationrequest.h"
#include "deleteconfigurationseteventdestinationresponse.h"
#include "deletecontactrequest.h"
#include "deletecontactresponse.h"
#include "deletecontactlistrequest.h"
#include "deletecontactlistresponse.h"
#include "deletecustomverificationemailtemplaterequest.h"
#include "deletecustomverificationemailtemplateresponse.h"
#include "deletededicatedippoolrequest.h"
#include "deletededicatedippoolresponse.h"
#include "deleteemailidentityrequest.h"
#include "deleteemailidentityresponse.h"
#include "deleteemailidentitypolicyrequest.h"
#include "deleteemailidentitypolicyresponse.h"
#include "deleteemailtemplaterequest.h"
#include "deleteemailtemplateresponse.h"
#include "deletesuppresseddestinationrequest.h"
#include "deletesuppresseddestinationresponse.h"
#include "getaccountrequest.h"
#include "getaccountresponse.h"
#include "getblacklistreportsrequest.h"
#include "getblacklistreportsresponse.h"
#include "getconfigurationsetrequest.h"
#include "getconfigurationsetresponse.h"
#include "getconfigurationseteventdestinationsrequest.h"
#include "getconfigurationseteventdestinationsresponse.h"
#include "getcontactrequest.h"
#include "getcontactresponse.h"
#include "getcontactlistrequest.h"
#include "getcontactlistresponse.h"
#include "getcustomverificationemailtemplaterequest.h"
#include "getcustomverificationemailtemplateresponse.h"
#include "getdedicatediprequest.h"
#include "getdedicatedipresponse.h"
#include "getdedicatedipsrequest.h"
#include "getdedicatedipsresponse.h"
#include "getdeliverabilitydashboardoptionsrequest.h"
#include "getdeliverabilitydashboardoptionsresponse.h"
#include "getdeliverabilitytestreportrequest.h"
#include "getdeliverabilitytestreportresponse.h"
#include "getdomaindeliverabilitycampaignrequest.h"
#include "getdomaindeliverabilitycampaignresponse.h"
#include "getdomainstatisticsreportrequest.h"
#include "getdomainstatisticsreportresponse.h"
#include "getemailidentityrequest.h"
#include "getemailidentityresponse.h"
#include "getemailidentitypoliciesrequest.h"
#include "getemailidentitypoliciesresponse.h"
#include "getemailtemplaterequest.h"
#include "getemailtemplateresponse.h"
#include "getimportjobrequest.h"
#include "getimportjobresponse.h"
#include "getsuppresseddestinationrequest.h"
#include "getsuppresseddestinationresponse.h"
#include "listconfigurationsetsrequest.h"
#include "listconfigurationsetsresponse.h"
#include "listcontactlistsrequest.h"
#include "listcontactlistsresponse.h"
#include "listcontactsrequest.h"
#include "listcontactsresponse.h"
#include "listcustomverificationemailtemplatesrequest.h"
#include "listcustomverificationemailtemplatesresponse.h"
#include "listdedicatedippoolsrequest.h"
#include "listdedicatedippoolsresponse.h"
#include "listdeliverabilitytestreportsrequest.h"
#include "listdeliverabilitytestreportsresponse.h"
#include "listdomaindeliverabilitycampaignsrequest.h"
#include "listdomaindeliverabilitycampaignsresponse.h"
#include "listemailidentitiesrequest.h"
#include "listemailidentitiesresponse.h"
#include "listemailtemplatesrequest.h"
#include "listemailtemplatesresponse.h"
#include "listimportjobsrequest.h"
#include "listimportjobsresponse.h"
#include "listsuppresseddestinationsrequest.h"
#include "listsuppresseddestinationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putaccountdedicatedipwarmupattributesrequest.h"
#include "putaccountdedicatedipwarmupattributesresponse.h"
#include "putaccountdetailsrequest.h"
#include "putaccountdetailsresponse.h"
#include "putaccountsendingattributesrequest.h"
#include "putaccountsendingattributesresponse.h"
#include "putaccountsuppressionattributesrequest.h"
#include "putaccountsuppressionattributesresponse.h"
#include "putconfigurationsetdeliveryoptionsrequest.h"
#include "putconfigurationsetdeliveryoptionsresponse.h"
#include "putconfigurationsetreputationoptionsrequest.h"
#include "putconfigurationsetreputationoptionsresponse.h"
#include "putconfigurationsetsendingoptionsrequest.h"
#include "putconfigurationsetsendingoptionsresponse.h"
#include "putconfigurationsetsuppressionoptionsrequest.h"
#include "putconfigurationsetsuppressionoptionsresponse.h"
#include "putconfigurationsettrackingoptionsrequest.h"
#include "putconfigurationsettrackingoptionsresponse.h"
#include "putdedicatedipinpoolrequest.h"
#include "putdedicatedipinpoolresponse.h"
#include "putdedicatedipwarmupattributesrequest.h"
#include "putdedicatedipwarmupattributesresponse.h"
#include "putdeliverabilitydashboardoptionrequest.h"
#include "putdeliverabilitydashboardoptionresponse.h"
#include "putemailidentityconfigurationsetattributesrequest.h"
#include "putemailidentityconfigurationsetattributesresponse.h"
#include "putemailidentitydkimattributesrequest.h"
#include "putemailidentitydkimattributesresponse.h"
#include "putemailidentitydkimsigningattributesrequest.h"
#include "putemailidentitydkimsigningattributesresponse.h"
#include "putemailidentityfeedbackattributesrequest.h"
#include "putemailidentityfeedbackattributesresponse.h"
#include "putemailidentitymailfromattributesrequest.h"
#include "putemailidentitymailfromattributesresponse.h"
#include "putsuppresseddestinationrequest.h"
#include "putsuppresseddestinationresponse.h"
#include "sendbulkemailrequest.h"
#include "sendbulkemailresponse.h"
#include "sendcustomverificationemailrequest.h"
#include "sendcustomverificationemailresponse.h"
#include "sendemailrequest.h"
#include "sendemailresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "testrenderemailtemplaterequest.h"
#include "testrenderemailtemplateresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateconfigurationseteventdestinationrequest.h"
#include "updateconfigurationseteventdestinationresponse.h"
#include "updatecontactrequest.h"
#include "updatecontactresponse.h"
#include "updatecontactlistrequest.h"
#include "updatecontactlistresponse.h"
#include "updatecustomverificationemailtemplaterequest.h"
#include "updatecustomverificationemailtemplateresponse.h"
#include "updateemailidentitypolicyrequest.h"
#include "updateemailidentitypolicyresponse.h"
#include "updateemailtemplaterequest.h"
#include "updateemailtemplateresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SESv2
 * \brief Contains classess for accessing Amazon Simple Email Service.
 *
 * \inmodule QtAwsSESv2
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::SESv2Client
 * \brief The SESv2Client class provides access to the Amazon Simple Email Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 */

/*!
 * \brief Constructs a SESv2Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SESv2Client::SESv2Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SESv2ClientPrivate(this), parent)
{
    Q_D(SESv2Client);
    d->apiVersion = QStringLiteral("2019-09-27");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("email");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Simple Email Service");
    d->serviceName = QStringLiteral("ses");
}

/*!
 * \overload SESv2Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SESv2Client::SESv2Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SESv2ClientPrivate(this), parent)
{
    Q_D(SESv2Client);
    d->apiVersion = QStringLiteral("2019-09-27");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("email");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Simple Email Service");
    d->serviceName = QStringLiteral("ses");
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * CreateConfigurationSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a configuration set. <i>Configuration sets</i> are groups of rules that you can apply to the emails that you
 * send. You apply a configuration set to an email by specifying the name of the configuration set when you call the Amazon
 * SES API v2. When you apply a configuration set to an email, all of the rules in that configuration set are applied to
 * the email.
 */
CreateConfigurationSetResponse * SESv2Client::createConfigurationSet(const CreateConfigurationSetRequest &request)
{
    return qobject_cast<CreateConfigurationSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * CreateConfigurationSetEventDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create an event destination. <i>Events</i> include message sends, deliveries, opens, clicks, bounces, and complaints.
 * <i>Event destinations</i> are places that you can send information about these events to. For example, you can send
 * event data to Amazon SNS to receive notifications when you receive bounces or complaints, or you can use Amazon Kinesis
 * Data Firehose to stream data to Amazon S3 for long-term
 *
 * storage>
 *
 * A single configuration set can include more than one event
 */
CreateConfigurationSetEventDestinationResponse * SESv2Client::createConfigurationSetEventDestination(const CreateConfigurationSetEventDestinationRequest &request)
{
    return qobject_cast<CreateConfigurationSetEventDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * CreateContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a contact, which is an end-user who is receiving the email, and adds them to a contact
 */
CreateContactResponse * SESv2Client::createContact(const CreateContactRequest &request)
{
    return qobject_cast<CreateContactResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * CreateContactListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a contact
 */
CreateContactListResponse * SESv2Client::createContactList(const CreateContactListRequest &request)
{
    return qobject_cast<CreateContactListResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * CreateCustomVerificationEmailTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new custom verification email
 *
 * template>
 *
 * For more information about custom verification email templates, see <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using Custom
 * Verification Email Templates</a> in the <i>Amazon SES Developer
 *
 * Guide</i>>
 *
 * You can execute this operation no more than once per
 */
CreateCustomVerificationEmailTemplateResponse * SESv2Client::createCustomVerificationEmailTemplate(const CreateCustomVerificationEmailTemplateRequest &request)
{
    return qobject_cast<CreateCustomVerificationEmailTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * CreateDedicatedIpPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new pool of dedicated IP addresses. A pool can include one or more dedicated IP addresses that are associated
 * with your Amazon Web Services account. You can associate a pool with a configuration set. When you send an email that
 * uses that configuration set, the message is sent from one of the addresses in the associated
 */
CreateDedicatedIpPoolResponse * SESv2Client::createDedicatedIpPool(const CreateDedicatedIpPoolRequest &request)
{
    return qobject_cast<CreateDedicatedIpPoolResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * CreateDeliverabilityTestReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new predictive inbox placement test. Predictive inbox placement tests can help you predict how your messages
 * will be handled by various email providers around the world. When you perform a predictive inbox placement test, you
 * provide a sample message that contains the content that you plan to send to your customers. Amazon SES then sends that
 * message to special email addresses spread across several major email providers. After about 24 hours, the test is
 * complete, and you can use the <code>GetDeliverabilityTestReport</code> operation to view the results of the
 */
CreateDeliverabilityTestReportResponse * SESv2Client::createDeliverabilityTestReport(const CreateDeliverabilityTestReportRequest &request)
{
    return qobject_cast<CreateDeliverabilityTestReportResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * CreateEmailIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the process of verifying an email identity. An <i>identity</i> is an email address or domain that you use when
 * you send email. Before you can use an identity to send email, you first have to verify it. By verifying an identity, you
 * demonstrate that you're the owner of the identity, and that you've given Amazon SES API v2 permission to send email from
 * the
 *
 * identity>
 *
 * When you verify an email address, Amazon SES sends an email to the address. Your email address is verified as soon as
 * you follow the link in the verification email.
 *
 * </p
 *
 * When you verify a domain without specifying the <code>DkimSigningAttributes</code> object, this operation provides a set
 * of DKIM tokens. You can convert these tokens into CNAME records, which you then add to the DNS configuration for your
 * domain. Your domain is verified when Amazon SES detects these records in the DNS configuration for your domain. This
 * verification method is known as <a href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
 *
 * DKIM</a>>
 *
 * Alternatively, you can perform the verification process by providing your own public-private key pair. This verification
 * method is known as Bring Your Own DKIM (BYODKIM). To use BYODKIM, your call to the <code>CreateEmailIdentity</code>
 * operation has to include the <code>DkimSigningAttributes</code> object. When you specify this object, you provide a
 * selector (a component of the DNS record name that identifies the public key to use for DKIM authentication) and a
 * private
 *
 * key>
 *
 * When you verify a domain, this operation provides a set of DKIM tokens, which you can convert into CNAME tokens. You add
 * these CNAME tokens to the DNS configuration for your domain. Your domain is verified when Amazon SES detects these
 * records in the DNS configuration for your domain. For some DNS providers, it can take 72 hours or more to complete the
 * domain verification
 *
 * process>
 *
 * Additionally, you can associate an existing configuration set with the email identity that you're
 */
CreateEmailIdentityResponse * SESv2Client::createEmailIdentity(const CreateEmailIdentityRequest &request)
{
    return qobject_cast<CreateEmailIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * CreateEmailIdentityPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the specified sending authorization policy for the given identity (an email address or a
 *
 * domain)> <note>
 *
 * This API is for the identity owner only. If you have not verified the identity, this API will return an
 *
 * error> </note>
 *
 * Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For
 * information about using sending authorization, see the <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 */
CreateEmailIdentityPolicyResponse * SESv2Client::createEmailIdentityPolicy(const CreateEmailIdentityPolicyRequest &request)
{
    return qobject_cast<CreateEmailIdentityPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * CreateEmailTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an email template. Email templates enable you to send personalized email to one or more destinations in a single
 * API operation. For more information, see the <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 */
CreateEmailTemplateResponse * SESv2Client::createEmailTemplate(const CreateEmailTemplateRequest &request)
{
    return qobject_cast<CreateEmailTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * CreateImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an import job for a data
 */
CreateImportJobResponse * SESv2Client::createImportJob(const CreateImportJobRequest &request)
{
    return qobject_cast<CreateImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * DeleteConfigurationSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an existing configuration
 *
 * set>
 *
 * <i>Configuration sets</i> are groups of rules that you can apply to the emails you send. You apply a configuration set
 * to an email by including a reference to the configuration set in the headers of the email. When you apply a
 * configuration set to an email, all of the rules in that configuration set are applied to the
 */
DeleteConfigurationSetResponse * SESv2Client::deleteConfigurationSet(const DeleteConfigurationSetRequest &request)
{
    return qobject_cast<DeleteConfigurationSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * DeleteConfigurationSetEventDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an event
 *
 * destination>
 *
 * <i>Events</i> include message sends, deliveries, opens, clicks, bounces, and complaints. <i>Event destinations</i> are
 * places that you can send information about these events to. For example, you can send event data to Amazon SNS to
 * receive notifications when you receive bounces or complaints, or you can use Amazon Kinesis Data Firehose to stream data
 * to Amazon S3 for long-term
 */
DeleteConfigurationSetEventDestinationResponse * SESv2Client::deleteConfigurationSetEventDestination(const DeleteConfigurationSetEventDestinationRequest &request)
{
    return qobject_cast<DeleteConfigurationSetEventDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * DeleteContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a contact from a contact
 */
DeleteContactResponse * SESv2Client::deleteContact(const DeleteContactRequest &request)
{
    return qobject_cast<DeleteContactResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * DeleteContactListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a contact list and all of the contacts on that
 */
DeleteContactListResponse * SESv2Client::deleteContactList(const DeleteContactListRequest &request)
{
    return qobject_cast<DeleteContactListResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * DeleteCustomVerificationEmailTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing custom verification email
 *
 * template>
 *
 * For more information about custom verification email templates, see <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using Custom
 * Verification Email Templates</a> in the <i>Amazon SES Developer
 *
 * Guide</i>>
 *
 * You can execute this operation no more than once per
 */
DeleteCustomVerificationEmailTemplateResponse * SESv2Client::deleteCustomVerificationEmailTemplate(const DeleteCustomVerificationEmailTemplateRequest &request)
{
    return qobject_cast<DeleteCustomVerificationEmailTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * DeleteDedicatedIpPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete a dedicated IP
 */
DeleteDedicatedIpPoolResponse * SESv2Client::deleteDedicatedIpPool(const DeleteDedicatedIpPoolRequest &request)
{
    return qobject_cast<DeleteDedicatedIpPoolResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * DeleteEmailIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an email identity. An identity can be either an email address or a domain
 */
DeleteEmailIdentityResponse * SESv2Client::deleteEmailIdentity(const DeleteEmailIdentityRequest &request)
{
    return qobject_cast<DeleteEmailIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * DeleteEmailIdentityPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified sending authorization policy for the given identity (an email address or a domain). This API
 * returns successfully even if a policy with the specified name does not
 *
 * exist> <note>
 *
 * This API is for the identity owner only. If you have not verified the identity, this API will return an
 *
 * error> </note>
 *
 * Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For
 * information about using sending authorization, see the <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 */
DeleteEmailIdentityPolicyResponse * SESv2Client::deleteEmailIdentityPolicy(const DeleteEmailIdentityPolicyRequest &request)
{
    return qobject_cast<DeleteEmailIdentityPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * DeleteEmailTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an email
 *
 * template>
 *
 * You can execute this operation no more than once per
 */
DeleteEmailTemplateResponse * SESv2Client::deleteEmailTemplate(const DeleteEmailTemplateRequest &request)
{
    return qobject_cast<DeleteEmailTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * DeleteSuppressedDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes an email address from the suppression list for your
 */
DeleteSuppressedDestinationResponse * SESv2Client::deleteSuppressedDestination(const DeleteSuppressedDestinationRequest &request)
{
    return qobject_cast<DeleteSuppressedDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Obtain information about the email-sending status and capabilities of your Amazon SES account in the current Amazon Web
 * Services
 */
GetAccountResponse * SESv2Client::getAccount(const GetAccountRequest &request)
{
    return qobject_cast<GetAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetBlacklistReportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve a list of the blacklists that your dedicated IP addresses appear
 */
GetBlacklistReportsResponse * SESv2Client::getBlacklistReports(const GetBlacklistReportsRequest &request)
{
    return qobject_cast<GetBlacklistReportsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetConfigurationSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get information about an existing configuration set, including the dedicated IP pool that it's associated with, whether
 * or not it's enabled for sending email, and
 *
 * more>
 *
 * <i>Configuration sets</i> are groups of rules that you can apply to the emails you send. You apply a configuration set
 * to an email by including a reference to the configuration set in the headers of the email. When you apply a
 * configuration set to an email, all of the rules in that configuration set are applied to the
 */
GetConfigurationSetResponse * SESv2Client::getConfigurationSet(const GetConfigurationSetRequest &request)
{
    return qobject_cast<GetConfigurationSetResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetConfigurationSetEventDestinationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve a list of event destinations that are associated with a configuration
 *
 * set>
 *
 * <i>Events</i> include message sends, deliveries, opens, clicks, bounces, and complaints. <i>Event destinations</i> are
 * places that you can send information about these events to. For example, you can send event data to Amazon SNS to
 * receive notifications when you receive bounces or complaints, or you can use Amazon Kinesis Data Firehose to stream data
 * to Amazon S3 for long-term
 */
GetConfigurationSetEventDestinationsResponse * SESv2Client::getConfigurationSetEventDestinations(const GetConfigurationSetEventDestinationsRequest &request)
{
    return qobject_cast<GetConfigurationSetEventDestinationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a contact from a contact
 */
GetContactResponse * SESv2Client::getContact(const GetContactRequest &request)
{
    return qobject_cast<GetContactResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetContactListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns contact list metadata. It does not return any information about the contacts present in the
 */
GetContactListResponse * SESv2Client::getContactList(const GetContactListRequest &request)
{
    return qobject_cast<GetContactListResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetCustomVerificationEmailTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the custom email verification template for the template name you
 *
 * specify>
 *
 * For more information about custom verification email templates, see <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using Custom
 * Verification Email Templates</a> in the <i>Amazon SES Developer
 *
 * Guide</i>>
 *
 * You can execute this operation no more than once per
 */
GetCustomVerificationEmailTemplateResponse * SESv2Client::getCustomVerificationEmailTemplate(const GetCustomVerificationEmailTemplateRequest &request)
{
    return qobject_cast<GetCustomVerificationEmailTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetDedicatedIpResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get information about a dedicated IP address, including the name of the dedicated IP pool that it's associated with, as
 * well information about the automatic warm-up process for the
 */
GetDedicatedIpResponse * SESv2Client::getDedicatedIp(const GetDedicatedIpRequest &request)
{
    return qobject_cast<GetDedicatedIpResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetDedicatedIpsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the dedicated IP addresses that are associated with your Amazon Web Services
 */
GetDedicatedIpsResponse * SESv2Client::getDedicatedIps(const GetDedicatedIpsRequest &request)
{
    return qobject_cast<GetDedicatedIpsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetDeliverabilityDashboardOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve information about the status of the Deliverability dashboard for your account. When the Deliverability
 * dashboard is enabled, you gain access to reputation, deliverability, and other metrics for the domains that you use to
 * send email. You also gain the ability to perform predictive inbox placement
 *
 * tests>
 *
 * When you use the Deliverability dashboard, you pay a monthly subscription charge, in addition to any other fees that you
 * accrue by using Amazon SES and other Amazon Web Services services. For more information about the features and cost of a
 * Deliverability dashboard subscription, see <a href="http://aws.amazon.com/ses/pricing/">Amazon SES
 */
GetDeliverabilityDashboardOptionsResponse * SESv2Client::getDeliverabilityDashboardOptions(const GetDeliverabilityDashboardOptionsRequest &request)
{
    return qobject_cast<GetDeliverabilityDashboardOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetDeliverabilityTestReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve the results of a predictive inbox placement
 */
GetDeliverabilityTestReportResponse * SESv2Client::getDeliverabilityTestReport(const GetDeliverabilityTestReportRequest &request)
{
    return qobject_cast<GetDeliverabilityTestReportResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetDomainDeliverabilityCampaignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve all the deliverability data for a specific campaign. This data is available for a campaign only if the campaign
 * sent email by using a domain that the Deliverability dashboard is enabled
 */
GetDomainDeliverabilityCampaignResponse * SESv2Client::getDomainDeliverabilityCampaign(const GetDomainDeliverabilityCampaignRequest &request)
{
    return qobject_cast<GetDomainDeliverabilityCampaignResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetDomainStatisticsReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve inbox placement and engagement rates for the domains that you use to send
 */
GetDomainStatisticsReportResponse * SESv2Client::getDomainStatisticsReport(const GetDomainStatisticsReportRequest &request)
{
    return qobject_cast<GetDomainStatisticsReportResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetEmailIdentityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about a specific identity, including the identity's verification status, sending authorization
 * policies, its DKIM authentication status, and its custom Mail-From
 */
GetEmailIdentityResponse * SESv2Client::getEmailIdentity(const GetEmailIdentityRequest &request)
{
    return qobject_cast<GetEmailIdentityResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetEmailIdentityPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the requested sending authorization policies for the given identity (an email address or a domain). The policies
 * are returned as a map of policy names to policy contents. You can retrieve a maximum of 20 policies at a
 *
 * time> <note>
 *
 * This API is for the identity owner only. If you have not verified the identity, this API will return an
 *
 * error> </note>
 *
 * Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For
 * information about using sending authorization, see the <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 */
GetEmailIdentityPoliciesResponse * SESv2Client::getEmailIdentityPolicies(const GetEmailIdentityPoliciesRequest &request)
{
    return qobject_cast<GetEmailIdentityPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetEmailTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays the template object (which includes the subject line, HTML part and text part) for the template you
 *
 * specify>
 *
 * You can execute this operation no more than once per
 */
GetEmailTemplateResponse * SESv2Client::getEmailTemplate(const GetEmailTemplateRequest &request)
{
    return qobject_cast<GetEmailTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about an import
 */
GetImportJobResponse * SESv2Client::getImportJob(const GetImportJobRequest &request)
{
    return qobject_cast<GetImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * GetSuppressedDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a specific email address that's on the suppression list for your
 */
GetSuppressedDestinationResponse * SESv2Client::getSuppressedDestination(const GetSuppressedDestinationRequest &request)
{
    return qobject_cast<GetSuppressedDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * ListConfigurationSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all of the configuration sets associated with your account in the current
 *
 * region>
 *
 * <i>Configuration sets</i> are groups of rules that you can apply to the emails you send. You apply a configuration set
 * to an email by including a reference to the configuration set in the headers of the email. When you apply a
 * configuration set to an email, all of the rules in that configuration set are applied to the
 */
ListConfigurationSetsResponse * SESv2Client::listConfigurationSets(const ListConfigurationSetsRequest &request)
{
    return qobject_cast<ListConfigurationSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * ListContactListsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the contact lists
 */
ListContactListsResponse * SESv2Client::listContactLists(const ListContactListsRequest &request)
{
    return qobject_cast<ListContactListsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * ListContactsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the contacts present in a specific contact
 */
ListContactsResponse * SESv2Client::listContacts(const ListContactsRequest &request)
{
    return qobject_cast<ListContactsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * ListCustomVerificationEmailTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the existing custom verification email templates for your account in the current Amazon Web Services
 *
 * Region>
 *
 * For more information about custom verification email templates, see <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using Custom
 * Verification Email Templates</a> in the <i>Amazon SES Developer
 *
 * Guide</i>>
 *
 * You can execute this operation no more than once per
 */
ListCustomVerificationEmailTemplatesResponse * SESv2Client::listCustomVerificationEmailTemplates(const ListCustomVerificationEmailTemplatesRequest &request)
{
    return qobject_cast<ListCustomVerificationEmailTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * ListDedicatedIpPoolsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all of the dedicated IP pools that exist in your Amazon Web Services account in the current
 */
ListDedicatedIpPoolsResponse * SESv2Client::listDedicatedIpPools(const ListDedicatedIpPoolsRequest &request)
{
    return qobject_cast<ListDedicatedIpPoolsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * ListDeliverabilityTestReportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Show a list of the predictive inbox placement tests that you've performed, regardless of their statuses. For predictive
 * inbox placement tests that are complete, you can use the <code>GetDeliverabilityTestReport</code> operation to view the
 */
ListDeliverabilityTestReportsResponse * SESv2Client::listDeliverabilityTestReports(const ListDeliverabilityTestReportsRequest &request)
{
    return qobject_cast<ListDeliverabilityTestReportsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * ListDomainDeliverabilityCampaignsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve deliverability data for all the campaigns that used a specific domain to send email during a specified time
 * range. This data is available for a domain only if you enabled the Deliverability dashboard for the
 */
ListDomainDeliverabilityCampaignsResponse * SESv2Client::listDomainDeliverabilityCampaigns(const ListDomainDeliverabilityCampaignsRequest &request)
{
    return qobject_cast<ListDomainDeliverabilityCampaignsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * ListEmailIdentitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all of the email identities that are associated with your Amazon Web Services account. An identity can
 * be either an email address or a domain. This operation returns identities that are verified as well as those that
 * aren't. This operation returns identities that are associated with Amazon SES and Amazon
 */
ListEmailIdentitiesResponse * SESv2Client::listEmailIdentities(const ListEmailIdentitiesRequest &request)
{
    return qobject_cast<ListEmailIdentitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * ListEmailTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the email templates present in your Amazon SES account in the current Amazon Web Services
 *
 * Region>
 *
 * You can execute this operation no more than once per
 */
ListEmailTemplatesResponse * SESv2Client::listEmailTemplates(const ListEmailTemplatesRequest &request)
{
    return qobject_cast<ListEmailTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * ListImportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the import
 */
ListImportJobsResponse * SESv2Client::listImportJobs(const ListImportJobsRequest &request)
{
    return qobject_cast<ListImportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * ListSuppressedDestinationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of email addresses that are on the suppression list for your
 */
ListSuppressedDestinationsResponse * SESv2Client::listSuppressedDestinations(const ListSuppressedDestinationsRequest &request)
{
    return qobject_cast<ListSuppressedDestinationsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve a list of the tags (keys and values) that are associated with a specified resource. A <i>tag</i> is a label
 * that you optionally define and associate with a resource. Each tag consists of a required <i>tag key</i> and an optional
 * associated <i>tag value</i>. A tag key is a general label that acts as a category for more specific tag values. A tag
 * value acts as a descriptor within a tag
 */
ListTagsForResourceResponse * SESv2Client::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutAccountDedicatedIpWarmupAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enable or disable the automatic warm-up feature for dedicated IP
 */
PutAccountDedicatedIpWarmupAttributesResponse * SESv2Client::putAccountDedicatedIpWarmupAttributes(const PutAccountDedicatedIpWarmupAttributesRequest &request)
{
    return qobject_cast<PutAccountDedicatedIpWarmupAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutAccountDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update your Amazon SES account
 */
PutAccountDetailsResponse * SESv2Client::putAccountDetails(const PutAccountDetailsRequest &request)
{
    return qobject_cast<PutAccountDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutAccountSendingAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enable or disable the ability of your account to send
 */
PutAccountSendingAttributesResponse * SESv2Client::putAccountSendingAttributes(const PutAccountSendingAttributesRequest &request)
{
    return qobject_cast<PutAccountSendingAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutAccountSuppressionAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Change the settings for the account-level suppression
 */
PutAccountSuppressionAttributesResponse * SESv2Client::putAccountSuppressionAttributes(const PutAccountSuppressionAttributesRequest &request)
{
    return qobject_cast<PutAccountSuppressionAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutConfigurationSetDeliveryOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associate a configuration set with a dedicated IP pool. You can use dedicated IP pools to create groups of dedicated IP
 * addresses for sending specific types of
 */
PutConfigurationSetDeliveryOptionsResponse * SESv2Client::putConfigurationSetDeliveryOptions(const PutConfigurationSetDeliveryOptionsRequest &request)
{
    return qobject_cast<PutConfigurationSetDeliveryOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutConfigurationSetReputationOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enable or disable collection of reputation metrics for emails that you send using a particular configuration set in a
 * specific Amazon Web Services
 */
PutConfigurationSetReputationOptionsResponse * SESv2Client::putConfigurationSetReputationOptions(const PutConfigurationSetReputationOptionsRequest &request)
{
    return qobject_cast<PutConfigurationSetReputationOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutConfigurationSetSendingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enable or disable email sending for messages that use a particular configuration set in a specific Amazon Web Services
 */
PutConfigurationSetSendingOptionsResponse * SESv2Client::putConfigurationSetSendingOptions(const PutConfigurationSetSendingOptionsRequest &request)
{
    return qobject_cast<PutConfigurationSetSendingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutConfigurationSetSuppressionOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Specify the account suppression list preferences for a configuration
 */
PutConfigurationSetSuppressionOptionsResponse * SESv2Client::putConfigurationSetSuppressionOptions(const PutConfigurationSetSuppressionOptionsRequest &request)
{
    return qobject_cast<PutConfigurationSetSuppressionOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutConfigurationSetTrackingOptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Specify a custom domain to use for open and click tracking elements in email that you
 */
PutConfigurationSetTrackingOptionsResponse * SESv2Client::putConfigurationSetTrackingOptions(const PutConfigurationSetTrackingOptionsRequest &request)
{
    return qobject_cast<PutConfigurationSetTrackingOptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutDedicatedIpInPoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Move a dedicated IP address to an existing dedicated IP
 *
 * pool> <note>
 *
 * The dedicated IP address that you specify must already exist, and must be associated with your Amazon Web Services
 * account.
 *
 * </p
 *
 * The dedicated IP pool you specify must already exist. You can create a new pool by using the
 * <code>CreateDedicatedIpPool</code>
 */
PutDedicatedIpInPoolResponse * SESv2Client::putDedicatedIpInPool(const PutDedicatedIpInPoolRequest &request)
{
    return qobject_cast<PutDedicatedIpInPoolResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutDedicatedIpWarmupAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
PutDedicatedIpWarmupAttributesResponse * SESv2Client::putDedicatedIpWarmupAttributes(const PutDedicatedIpWarmupAttributesRequest &request)
{
    return qobject_cast<PutDedicatedIpWarmupAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutDeliverabilityDashboardOptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enable or disable the Deliverability dashboard. When you enable the Deliverability dashboard, you gain access to
 * reputation, deliverability, and other metrics for the domains that you use to send email. You also gain the ability to
 * perform predictive inbox placement
 *
 * tests>
 *
 * When you use the Deliverability dashboard, you pay a monthly subscription charge, in addition to any other fees that you
 * accrue by using Amazon SES and other Amazon Web Services services. For more information about the features and cost of a
 * Deliverability dashboard subscription, see <a href="http://aws.amazon.com/ses/pricing/">Amazon SES
 */
PutDeliverabilityDashboardOptionResponse * SESv2Client::putDeliverabilityDashboardOption(const PutDeliverabilityDashboardOptionRequest &request)
{
    return qobject_cast<PutDeliverabilityDashboardOptionResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutEmailIdentityConfigurationSetAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used to associate a configuration set with an email
 */
PutEmailIdentityConfigurationSetAttributesResponse * SESv2Client::putEmailIdentityConfigurationSetAttributes(const PutEmailIdentityConfigurationSetAttributesRequest &request)
{
    return qobject_cast<PutEmailIdentityConfigurationSetAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutEmailIdentityDkimAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used to enable or disable DKIM authentication for an email
 */
PutEmailIdentityDkimAttributesResponse * SESv2Client::putEmailIdentityDkimAttributes(const PutEmailIdentityDkimAttributesRequest &request)
{
    return qobject_cast<PutEmailIdentityDkimAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutEmailIdentityDkimSigningAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used to configure or change the DKIM authentication settings for an email domain identity. You can use this operation to
 * do any of the
 *
 * following> <ul> <li>
 *
 * Update the signing attributes for an identity that uses Bring Your Own DKIM
 *
 * (BYODKIM)> </li> <li>
 *
 * Update the key length that should be used for Easy
 *
 * DKIM> </li> <li>
 *
 * Change from using no DKIM authentication to using Easy
 *
 * DKIM> </li> <li>
 *
 * Change from using no DKIM authentication to using
 *
 * BYODKIM> </li> <li>
 *
 * Change from using Easy DKIM to using
 *
 * BYODKIM> </li> <li>
 *
 * Change from using BYODKIM to using Easy
 */
PutEmailIdentityDkimSigningAttributesResponse * SESv2Client::putEmailIdentityDkimSigningAttributes(const PutEmailIdentityDkimSigningAttributesRequest &request)
{
    return qobject_cast<PutEmailIdentityDkimSigningAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutEmailIdentityFeedbackAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used to enable or disable feedback forwarding for an identity. This setting determines what happens when an identity is
 * used to send an email that results in a bounce or complaint
 *
 * event>
 *
 * If the value is <code>true</code>, you receive email notifications when bounce or complaint events occur. These
 * notifications are sent to the address that you specified in the <code>Return-Path</code> header of the original
 *
 * email>
 *
 * You're required to have a method of tracking bounces and complaints. If you haven't set up another mechanism for
 * receiving bounce or complaint notifications (for example, by setting up an event destination), you receive an email
 * notification when these events occur (even if this setting is
 */
PutEmailIdentityFeedbackAttributesResponse * SESv2Client::putEmailIdentityFeedbackAttributes(const PutEmailIdentityFeedbackAttributesRequest &request)
{
    return qobject_cast<PutEmailIdentityFeedbackAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutEmailIdentityMailFromAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used to enable or disable the custom Mail-From domain configuration for an email
 */
PutEmailIdentityMailFromAttributesResponse * SESv2Client::putEmailIdentityMailFromAttributes(const PutEmailIdentityMailFromAttributesRequest &request)
{
    return qobject_cast<PutEmailIdentityMailFromAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * PutSuppressedDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an email address to the suppression list for your
 */
PutSuppressedDestinationResponse * SESv2Client::putSuppressedDestination(const PutSuppressedDestinationRequest &request)
{
    return qobject_cast<PutSuppressedDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * SendBulkEmailResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Composes an email message to multiple
 */
SendBulkEmailResponse * SESv2Client::sendBulkEmail(const SendBulkEmailRequest &request)
{
    return qobject_cast<SendBulkEmailResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * SendCustomVerificationEmailResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an email address to the list of identities for your Amazon SES account in the current Amazon Web Services Region
 * and attempts to verify it. As a result of executing this operation, a customized verification email is sent to the
 * specified
 *
 * address>
 *
 * To use this operation, you must first create a custom verification email template. For more information about creating
 * and using custom verification email templates, see <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using Custom
 * Verification Email Templates</a> in the <i>Amazon SES Developer
 *
 * Guide</i>>
 *
 * You can execute this operation no more than once per
 */
SendCustomVerificationEmailResponse * SESv2Client::sendCustomVerificationEmail(const SendCustomVerificationEmailRequest &request)
{
    return qobject_cast<SendCustomVerificationEmailResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * SendEmailResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends an email message. You can use the Amazon SES API v2 to send the following types of
 *
 * messages> <ul> <li>
 *
 * <b>Simple</b> – A standard email message. When you create this type of message, you specify the sender, the recipient,
 * and the message body, and Amazon SES assembles the message for
 *
 * you> </li> <li>
 *
 * <b>Raw</b> – A raw, MIME-formatted email message. When you send this type of email, you have to specify all of the
 * message headers, as well as the message body. You can use this message type to send messages that contain attachments.
 * The message that you specify has to be a valid MIME
 *
 * message> </li> <li>
 *
 * <b>Templated</b> – A message that contains personalization tags. When you send this type of email, Amazon SES API v2
 * automatically replaces the tags with values that you
 */
SendEmailResponse * SESv2Client::sendEmail(const SendEmailRequest &request)
{
    return qobject_cast<SendEmailResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add one or more tags (keys and values) to a specified resource. A <i>tag</i> is a label that you optionally define and
 * associate with a resource. Tags can help you categorize and manage resources in different ways, such as by purpose,
 * owner, environment, or other criteria. A resource can have as many as 50
 *
 * tags>
 *
 * Each tag consists of a required <i>tag key</i> and an associated <i>tag value</i>, both of which you define. A tag key
 * is a general label that acts as a category for more specific tag values. A tag value acts as a descriptor within a tag
 */
TagResourceResponse * SESv2Client::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * TestRenderEmailTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a preview of the MIME content of an email when provided with a template and a set of replacement
 *
 * data>
 *
 * You can execute this operation no more than once per
 */
TestRenderEmailTemplateResponse * SESv2Client::testRenderEmailTemplate(const TestRenderEmailTemplateRequest &request)
{
    return qobject_cast<TestRenderEmailTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove one or more tags (keys and values) from a specified
 */
UntagResourceResponse * SESv2Client::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * UpdateConfigurationSetEventDestinationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update the configuration of an event destination for a configuration
 *
 * set>
 *
 * <i>Events</i> include message sends, deliveries, opens, clicks, bounces, and complaints. <i>Event destinations</i> are
 * places that you can send information about these events to. For example, you can send event data to Amazon SNS to
 * receive notifications when you receive bounces or complaints, or you can use Amazon Kinesis Data Firehose to stream data
 * to Amazon S3 for long-term
 */
UpdateConfigurationSetEventDestinationResponse * SESv2Client::updateConfigurationSetEventDestination(const UpdateConfigurationSetEventDestinationRequest &request)
{
    return qobject_cast<UpdateConfigurationSetEventDestinationResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * UpdateContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a contact's preferences for a list. It is not necessary to specify all existing topic preferences in the
 * TopicPreferences object, just the ones that need
 */
UpdateContactResponse * SESv2Client::updateContact(const UpdateContactRequest &request)
{
    return qobject_cast<UpdateContactResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * UpdateContactListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates contact list metadata. This operation does a complete
 */
UpdateContactListResponse * SESv2Client::updateContactList(const UpdateContactListRequest &request)
{
    return qobject_cast<UpdateContactListResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * UpdateCustomVerificationEmailTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing custom verification email
 *
 * template>
 *
 * For more information about custom verification email templates, see <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html">Using Custom
 * Verification Email Templates</a> in the <i>Amazon SES Developer
 *
 * Guide</i>>
 *
 * You can execute this operation no more than once per
 */
UpdateCustomVerificationEmailTemplateResponse * SESv2Client::updateCustomVerificationEmailTemplate(const UpdateCustomVerificationEmailTemplateRequest &request)
{
    return qobject_cast<UpdateCustomVerificationEmailTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * UpdateEmailIdentityPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified sending authorization policy for the given identity (an email address or a domain). This API
 * returns successfully even if a policy with the specified name does not
 *
 * exist> <note>
 *
 * This API is for the identity owner only. If you have not verified the identity, this API will return an
 *
 * error> </note>
 *
 * Sending authorization is a feature that enables an identity owner to authorize other senders to use its identities. For
 * information about using sending authorization, see the <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 */
UpdateEmailIdentityPolicyResponse * SESv2Client::updateEmailIdentityPolicy(const UpdateEmailIdentityPolicyRequest &request)
{
    return qobject_cast<UpdateEmailIdentityPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the SESv2Client service, and returns a pointer to an
 * UpdateEmailTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an email template. Email templates enable you to send personalized email to one or more destinations in a single
 * API operation. For more information, see the <a
 * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon SES Developer
 *
 * Guide</a>>
 *
 * You can execute this operation no more than once per
 */
UpdateEmailTemplateResponse * SESv2Client::updateEmailTemplate(const UpdateEmailTemplateRequest &request)
{
    return qobject_cast<UpdateEmailTemplateResponse *>(send(request));
}

/*!
 * \class QtAws::SESv2::SESv2ClientPrivate
 * \brief The SESv2ClientPrivate class provides private implementation for SESv2Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a SESv2ClientPrivate object with public implementation \a q.
 */
SESv2ClientPrivate::SESv2ClientPrivate(SESv2Client * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SESv2
} // namespace QtAws
