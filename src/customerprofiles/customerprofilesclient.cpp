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

#include "customerprofilesclient.h"
#include "customerprofilesclient_p.h"

#include "core/awssignaturev4.h"
#include "addprofilekeyrequest.h"
#include "addprofilekeyresponse.h"
#include "createdomainrequest.h"
#include "createdomainresponse.h"
#include "createprofilerequest.h"
#include "createprofileresponse.h"
#include "deletedomainrequest.h"
#include "deletedomainresponse.h"
#include "deleteintegrationrequest.h"
#include "deleteintegrationresponse.h"
#include "deleteprofilerequest.h"
#include "deleteprofileresponse.h"
#include "deleteprofilekeyrequest.h"
#include "deleteprofilekeyresponse.h"
#include "deleteprofileobjectrequest.h"
#include "deleteprofileobjectresponse.h"
#include "deleteprofileobjecttyperequest.h"
#include "deleteprofileobjecttyperesponse.h"
#include "getdomainrequest.h"
#include "getdomainresponse.h"
#include "getintegrationrequest.h"
#include "getintegrationresponse.h"
#include "getmatchesrequest.h"
#include "getmatchesresponse.h"
#include "getprofileobjecttyperequest.h"
#include "getprofileobjecttyperesponse.h"
#include "getprofileobjecttypetemplaterequest.h"
#include "getprofileobjecttypetemplateresponse.h"
#include "listaccountintegrationsrequest.h"
#include "listaccountintegrationsresponse.h"
#include "listdomainsrequest.h"
#include "listdomainsresponse.h"
#include "listintegrationsrequest.h"
#include "listintegrationsresponse.h"
#include "listprofileobjecttypetemplatesrequest.h"
#include "listprofileobjecttypetemplatesresponse.h"
#include "listprofileobjecttypesrequest.h"
#include "listprofileobjecttypesresponse.h"
#include "listprofileobjectsrequest.h"
#include "listprofileobjectsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "mergeprofilesrequest.h"
#include "mergeprofilesresponse.h"
#include "putintegrationrequest.h"
#include "putintegrationresponse.h"
#include "putprofileobjectrequest.h"
#include "putprofileobjectresponse.h"
#include "putprofileobjecttyperequest.h"
#include "putprofileobjecttyperesponse.h"
#include "searchprofilesrequest.h"
#include "searchprofilesresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedomainrequest.h"
#include "updatedomainresponse.h"
#include "updateprofilerequest.h"
#include "updateprofileresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CustomerProfiles
 * \brief Contains classess for accessing Amazon Connect Customer Profiles.
 *
 * \inmodule QtAwsCustomerProfiles
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::CustomerProfilesClient
 * \brief The CustomerProfilesClient class provides access to the Amazon Connect Customer Profiles service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCustomerProfiles
 *
 *  <fullname>Amazon Connect Customer Profiles</fullname>
 * 
 *  Welcome to the Amazon Connect Customer Profiles API Reference. This guide provides information about the Amazon Connect
 *  Customer Profiles API, including supported operations, data types, parameters, and
 * 
 *  schemas>
 * 
 *  Amazon Connect Customer Profiles is a unified customer profile for your contact center that has pre-built connectors
 *  powered by AppFlow that make it easy to combine customer information from third party applications, such as Salesforce
 *  (CRM), ServiceNow (ITSM), and your enterprise resource planning (ERP), with contact history from your Amazon Connect
 *  contact
 * 
 *  center>
 * 
 *  If you're new to Amazon Connect , you might find it helpful to also review the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/what-is-amazon-connect.html">Amazon Connect Administrator
 */

/*!
 * \brief Constructs a CustomerProfilesClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CustomerProfilesClient::CustomerProfilesClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-08-15"),
    QStringLiteral("profile"),
    QStringLiteral("Amazon Connect Customer Profiles"),
    QStringLiteral("profile"),
    parent), d_ptr(new CustomerProfilesClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload CustomerProfilesClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CustomerProfilesClient::CustomerProfilesClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-08-15"),
    QStringLiteral("profile"),
    QStringLiteral("Amazon Connect Customer Profiles"),
    QStringLiteral("profile"),
    parent), d_ptr(new CustomerProfilesClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * AddProfileKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a new key value with a specific profile, such as a Contact Trace Record (CTR)
 *
 * ContactId>
 *
 * A profile object can have a single unique key and any number of additional keys that can be used to identify the profile
 * that it belongs
 */
AddProfileKeyResponse * CustomerProfilesClient::addProfileKey(const AddProfileKeyRequest &request)
{
    return qobject_cast<AddProfileKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * CreateDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a domain, which is a container for all customer data, such as customer profile attributes, object types, profile
 * keys, and encryption keys. You can create multiple domains, and each domain can have multiple third-party
 *
 * integrations>
 *
 * Each Amazon Connect instance can be associated with only one domain. Multiple Amazon Connect instances can be associated
 * with one
 */
CreateDomainResponse * CustomerProfilesClient::createDomain(const CreateDomainRequest &request)
{
    return qobject_cast<CreateDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * CreateProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a standard
 *
 * profile>
 *
 * A standard profile represents the following attributes for a customer profile in a
 */
CreateProfileResponse * CustomerProfilesClient::createProfile(const CreateProfileRequest &request)
{
    return qobject_cast<CreateProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * DeleteDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specific domain and all of its customer data, such as customer profile attributes and their related
 */
DeleteDomainResponse * CustomerProfilesClient::deleteDomain(const DeleteDomainRequest &request)
{
    return qobject_cast<DeleteDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * DeleteIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes an integration from a specific
 */
DeleteIntegrationResponse * CustomerProfilesClient::deleteIntegration(const DeleteIntegrationRequest &request)
{
    return qobject_cast<DeleteIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * DeleteProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the standard customer profile and all data pertaining to the
 */
DeleteProfileResponse * CustomerProfilesClient::deleteProfile(const DeleteProfileRequest &request)
{
    return qobject_cast<DeleteProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * DeleteProfileKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a searchable key from a customer
 */
DeleteProfileKeyResponse * CustomerProfilesClient::deleteProfileKey(const DeleteProfileKeyRequest &request)
{
    return qobject_cast<DeleteProfileKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * DeleteProfileObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes an object associated with a profile of a given
 */
DeleteProfileObjectResponse * CustomerProfilesClient::deleteProfileObject(const DeleteProfileObjectRequest &request)
{
    return qobject_cast<DeleteProfileObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * DeleteProfileObjectTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a ProfileObjectType from a specific domain as well as removes all the ProfileObjects of that type. It also
 * disables integrations from this specific ProfileObjectType. In addition, it scrubs all of the fields of the standard
 * profile that were populated from this
 */
DeleteProfileObjectTypeResponse * CustomerProfilesClient::deleteProfileObjectType(const DeleteProfileObjectTypeRequest &request)
{
    return qobject_cast<DeleteProfileObjectTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * GetDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific
 */
GetDomainResponse * CustomerProfilesClient::getDomain(const GetDomainRequest &request)
{
    return qobject_cast<GetDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * GetIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an integration for a
 */
GetIntegrationResponse * CustomerProfilesClient::getIntegration(const GetIntegrationRequest &request)
{
    return qobject_cast<GetIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * GetMatchesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and subject to
 *
 * change>
 *
 * Before calling this API, use <a
 * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_CreateDomain.html">CreateDomain</a> or <a
 * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_UpdateDomain.html">UpdateDomain</a> to enable
 * identity resolution: set <code>Matching</code> to
 *
 * true>
 *
 * GetMatches returns potentially matching profiles, based on the results of the latest run of a machine learning process.
 *
 * </p <b>
 *
 * Amazon Connect runs a batch process every Saturday at 12AM UTC to identify matching profiles. The results are returned
 * up to seven days after the Saturday
 *
 * run> </b>
 *
 * Amazon Connect uses the following profile attributes to identify
 *
 * matches> <ul> <li>
 *
 * PhoneNumbe> </li> <li>
 *
 * HomePhoneNumbe> </li> <li>
 *
 * BusinessPhoneNumbe> </li> <li>
 *
 * MobilePhoneNumbe> </li> <li>
 *
 * EmailAddres> </li> <li>
 *
 * PersonalEmailAddres> </li> <li>
 *
 * BusinessEmailAddres> </li> <li>
 *
 * FullNam> </li> <li>
 */
GetMatchesResponse * CustomerProfilesClient::getMatches(const GetMatchesRequest &request)
{
    return qobject_cast<GetMatchesResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * GetProfileObjectTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the object types for a specific
 */
GetProfileObjectTypeResponse * CustomerProfilesClient::getProfileObjectType(const GetProfileObjectTypeRequest &request)
{
    return qobject_cast<GetProfileObjectTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * GetProfileObjectTypeTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the template information for a specific object
 *
 * type>
 *
 * A template is a predefined ProfileObjectType, such as “Salesforce-Account” or “Salesforce-Contact.” When a user sends a
 * ProfileObject, using the PutProfileObject API, with an ObjectTypeName that matches one of the TemplateIds, it uses the
 * mappings from the
 */
GetProfileObjectTypeTemplateResponse * CustomerProfilesClient::getProfileObjectTypeTemplate(const GetProfileObjectTypeTemplateRequest &request)
{
    return qobject_cast<GetProfileObjectTypeTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * ListAccountIntegrationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the integrations associated to a specific URI in the AWS
 */
ListAccountIntegrationsResponse * CustomerProfilesClient::listAccountIntegrations(const ListAccountIntegrationsRequest &request)
{
    return qobject_cast<ListAccountIntegrationsResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * ListDomainsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all the domains for an AWS account that have been
 */
ListDomainsResponse * CustomerProfilesClient::listDomains(const ListDomainsRequest &request)
{
    return qobject_cast<ListDomainsResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * ListIntegrationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the integrations in your
 */
ListIntegrationsResponse * CustomerProfilesClient::listIntegrations(const ListIntegrationsRequest &request)
{
    return qobject_cast<ListIntegrationsResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * ListProfileObjectTypeTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the template information for object
 */
ListProfileObjectTypeTemplatesResponse * CustomerProfilesClient::listProfileObjectTypeTemplates(const ListProfileObjectTypeTemplatesRequest &request)
{
    return qobject_cast<ListProfileObjectTypeTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * ListProfileObjectTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the templates available within the
 */
ListProfileObjectTypesResponse * CustomerProfilesClient::listProfileObjectTypes(const ListProfileObjectTypesRequest &request)
{
    return qobject_cast<ListProfileObjectTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * ListProfileObjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of objects associated with a profile of a given
 */
ListProfileObjectsResponse * CustomerProfilesClient::listProfileObjects(const ListProfileObjectsRequest &request)
{
    return qobject_cast<ListProfileObjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays the tags associated with an Amazon Connect Customer Profiles resource. In Connect Customer Profiles, domains,
 * profile object types, and integrations can be
 */
ListTagsForResourceResponse * CustomerProfilesClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * MergeProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is in preview release for Amazon Connect and subject to
 *
 * change>
 *
 * Runs an AWS Lambda job that does the
 *
 * following> <ol> <li>
 *
 * All the profileKeys in the <code>ProfileToBeMerged</code> will be moved to the main
 *
 * profile> </li> <li>
 *
 * All the objects in the <code>ProfileToBeMerged</code> will be moved to the main
 *
 * profile> </li> <li>
 *
 * All the <code>ProfileToBeMerged</code> will be deleted at the
 *
 * end> </li> <li>
 *
 * All the profileKeys in the <code>ProfileIdsToBeMerged</code> will be moved to the main
 *
 * profile> </li> <li>
 *
 * Standard fields are merged as
 *
 * follows> <ol> <li>
 *
 * Fields are always "union"-ed if there are no conflicts in standard fields or
 *
 * attributeKeys> </li> <li>
 *
 * When there are conflicting
 *
 * fields> <ol> <li>
 *
 * If no <code>SourceProfileIds</code> entry is specified, the main Profile value is always taken.
 *
 * </p </li> <li>
 *
 * If a <code>SourceProfileIds</code> entry is specified, the specified profileId is always taken, even if it is a NULL
 *
 * value> </li> </ol> </li> </ol> </li> </ol>
 *
 * You can use MergeProfiles together with <a
 * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_GetMatches.html">GetMatches</a>, which
 * returns potentially matching profiles, or use it with the results of another matching system. After profiles have been
 * merged, they cannot be separated
 */
MergeProfilesResponse * CustomerProfilesClient::mergeProfiles(const MergeProfilesRequest &request)
{
    return qobject_cast<MergeProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * PutIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an integration between the service and a third-party service, which includes Amazon AppFlow and Amazon
 *
 * Connect>
 *
 * An integration can belong to only one
 */
PutIntegrationResponse * CustomerProfilesClient::putIntegration(const PutIntegrationRequest &request)
{
    return qobject_cast<PutIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * PutProfileObjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds additional objects to customer profiles of a given
 *
 * ObjectType>
 *
 * When adding a specific profile object, like a Contact Trace Record (CTR), an inferred profile can get created if it is
 * not mapped to an existing profile. The resulting profile will only have a phone number populated in the standard
 * ProfileObject. Any additional CTRs with the same phone number will be mapped to the same inferred
 *
 * profile>
 *
 * When a ProfileObject is created and if a ProfileObjectType already exists for the ProfileObject, it will provide data to
 * a standard profile depending on the ProfileObjectType
 *
 * definition>
 *
 * PutProfileObject needs an ObjectType, which can be created using
 */
PutProfileObjectResponse * CustomerProfilesClient::putProfileObject(const PutProfileObjectRequest &request)
{
    return qobject_cast<PutProfileObjectResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * PutProfileObjectTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Defines a
 */
PutProfileObjectTypeResponse * CustomerProfilesClient::putProfileObjectType(const PutProfileObjectTypeRequest &request)
{
    return qobject_cast<PutProfileObjectTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * SearchProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches for profiles within a specific domain name using name, phone number, email address, account number, or a custom
 * defined
 */
SearchProfilesResponse * CustomerProfilesClient::searchProfiles(const SearchProfilesRequest &request)
{
    return qobject_cast<SearchProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns one or more tags (key-value pairs) to the specified Amazon Connect Customer Profiles resource. Tags can help you
 * organize and categorize your resources. You can also use them to scope user permissions by granting a user permission to
 * access or change only resources with certain tag values. In Connect Customer Profiles, domains, profile object types,
 * and integrations can be
 *
 * tagged>
 *
 * Tags don't have any semantic meaning to AWS and are interpreted strictly as strings of
 *
 * characters>
 *
 * You can use the TagResource action with a resource that already has tags. If you specify a new tag key, this tag is
 * appended to the list of tags associated with the resource. If you specify a tag key that is already associated with the
 * resource, the new tag value that you specify replaces the previous value for that
 *
 * tag>
 *
 * You can associate as many as 50 tags with a
 */
TagResourceResponse * CustomerProfilesClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from the specified Amazon Connect Customer Profiles resource. In Connect Customer Profiles,
 * domains, profile object types, and integrations can be
 */
UntagResourceResponse * CustomerProfilesClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * UpdateDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the properties of a domain, including creating or selecting a dead letter queue or an encryption
 *
 * key>
 *
 * After a domain is created, the name can’t be
 */
UpdateDomainResponse * CustomerProfilesClient::updateDomain(const UpdateDomainRequest &request)
{
    return qobject_cast<UpdateDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the CustomerProfilesClient service, and returns a pointer to an
 * UpdateProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the properties of a profile. The ProfileId is required for updating a customer
 *
 * profile>
 *
 * When calling the UpdateProfile API, specifying an empty string value means that any existing value will be removed. Not
 * specifying a string value means that any value already there will be
 */
UpdateProfileResponse * CustomerProfilesClient::updateProfile(const UpdateProfileRequest &request)
{
    return qobject_cast<UpdateProfileResponse *>(send(request));
}

/*!
 * \class QtAws::CustomerProfiles::CustomerProfilesClientPrivate
 * \brief The CustomerProfilesClientPrivate class provides private implementation for CustomerProfilesClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a CustomerProfilesClientPrivate object with public implementation \a q.
 */
CustomerProfilesClientPrivate::CustomerProfilesClientPrivate(CustomerProfilesClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace CustomerProfiles
} // namespace QtAws
