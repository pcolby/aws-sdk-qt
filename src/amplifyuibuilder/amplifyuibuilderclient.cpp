// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "amplifyuibuilderclient.h"
#include "amplifyuibuilderclient_p.h"

#include "core/awssignaturev4.h"
#include "createcomponentrequest.h"
#include "createcomponentresponse.h"
#include "createformrequest.h"
#include "createformresponse.h"
#include "createthemerequest.h"
#include "createthemeresponse.h"
#include "deletecomponentrequest.h"
#include "deletecomponentresponse.h"
#include "deleteformrequest.h"
#include "deleteformresponse.h"
#include "deletethemerequest.h"
#include "deletethemeresponse.h"
#include "exchangecodefortokenrequest.h"
#include "exchangecodefortokenresponse.h"
#include "exportcomponentsrequest.h"
#include "exportcomponentsresponse.h"
#include "exportformsrequest.h"
#include "exportformsresponse.h"
#include "exportthemesrequest.h"
#include "exportthemesresponse.h"
#include "getcomponentrequest.h"
#include "getcomponentresponse.h"
#include "getformrequest.h"
#include "getformresponse.h"
#include "getmetadatarequest.h"
#include "getmetadataresponse.h"
#include "getthemerequest.h"
#include "getthemeresponse.h"
#include "listcomponentsrequest.h"
#include "listcomponentsresponse.h"
#include "listformsrequest.h"
#include "listformsresponse.h"
#include "listthemesrequest.h"
#include "listthemesresponse.h"
#include "putmetadataflagrequest.h"
#include "putmetadataflagresponse.h"
#include "refreshtokenrequest.h"
#include "refreshtokenresponse.h"
#include "updatecomponentrequest.h"
#include "updatecomponentresponse.h"
#include "updateformrequest.h"
#include "updateformresponse.h"
#include "updatethemerequest.h"
#include "updatethemeresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AmplifyUIBuilder
 * \brief Contains classess for accessing AWS Amplify UI Builder.
 *
 * \inmodule QtAwsAmplifyUIBuilder
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::AmplifyUIBuilderClient
 * \brief The AmplifyUIBuilderClient class provides access to the AWS Amplify UI Builder service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAmplifyUIBuilder
 *
 *  The Amplify UI Builder API provides a programmatic interface for creating and configuring user interface (UI) component
 *  libraries and themes for use in your Amplify applications. You can then connect these UI components to an application's
 *  backend Amazon Web Services
 * 
 *  resources>
 * 
 *  You can also use the Amplify Studio visual designer to create UI components and model data for an app. For more
 *  information, see <a href="https://docs.amplify.aws/console/adminui/intro">Introduction</a> in the <i>Amplify
 * 
 *  Docs</i>>
 * 
 *  The Amplify Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development.
 *  For more information, see the <a href="https://docs.amplify.aws/">Amplify Framework</a>. For more information about
 *  deploying an Amplify application to Amazon Web Services, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify User
 */

/*!
 * \brief Constructs a AmplifyUIBuilderClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AmplifyUIBuilderClient::AmplifyUIBuilderClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AmplifyUIBuilderClientPrivate(this), parent)
{
    Q_D(AmplifyUIBuilderClient);
    d->apiVersion = QStringLiteral("2021-08-11");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Amplify UI Builder");
    d->serviceName = QStringLiteral("amplifyuibuilder");
}

/*!
 * \overload AmplifyUIBuilderClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AmplifyUIBuilderClient::AmplifyUIBuilderClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AmplifyUIBuilderClientPrivate(this), parent)
{
    Q_D(AmplifyUIBuilderClient);
    d->apiVersion = QStringLiteral("2021-08-11");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Amplify UI Builder");
    d->serviceName = QStringLiteral("amplifyuibuilder");
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * CreateComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new component for an Amplify
 */
CreateComponentResponse * AmplifyUIBuilderClient::createComponent(const CreateComponentRequest &request)
{
    return qobject_cast<CreateComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * CreateFormResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new form for an Amplify
 */
CreateFormResponse * AmplifyUIBuilderClient::createForm(const CreateFormRequest &request)
{
    return qobject_cast<CreateFormResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * CreateThemeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a theme to apply to the components in an Amplify
 */
CreateThemeResponse * AmplifyUIBuilderClient::createTheme(const CreateThemeRequest &request)
{
    return qobject_cast<CreateThemeResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * DeleteComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a component from an Amplify
 */
DeleteComponentResponse * AmplifyUIBuilderClient::deleteComponent(const DeleteComponentRequest &request)
{
    return qobject_cast<DeleteComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * DeleteFormResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a form from an Amplify
 */
DeleteFormResponse * AmplifyUIBuilderClient::deleteForm(const DeleteFormRequest &request)
{
    return qobject_cast<DeleteFormResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * DeleteThemeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a theme from an Amplify
 */
DeleteThemeResponse * AmplifyUIBuilderClient::deleteTheme(const DeleteThemeRequest &request)
{
    return qobject_cast<DeleteThemeResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * ExchangeCodeForTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exchanges an access code for a
 */
ExchangeCodeForTokenResponse * AmplifyUIBuilderClient::exchangeCodeForToken(const ExchangeCodeForTokenRequest &request)
{
    return qobject_cast<ExchangeCodeForTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * ExportComponentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports component configurations to code that is ready to integrate into an Amplify
 */
ExportComponentsResponse * AmplifyUIBuilderClient::exportComponents(const ExportComponentsRequest &request)
{
    return qobject_cast<ExportComponentsResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * ExportFormsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports form configurations to code that is ready to integrate into an Amplify
 */
ExportFormsResponse * AmplifyUIBuilderClient::exportForms(const ExportFormsRequest &request)
{
    return qobject_cast<ExportFormsResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * ExportThemesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Exports theme configurations to code that is ready to integrate into an Amplify
 */
ExportThemesResponse * AmplifyUIBuilderClient::exportThemes(const ExportThemesRequest &request)
{
    return qobject_cast<ExportThemesResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * GetComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an existing component for an Amplify
 */
GetComponentResponse * AmplifyUIBuilderClient::getComponent(const GetComponentRequest &request)
{
    return qobject_cast<GetComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * GetFormResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an existing form for an Amplify
 */
GetFormResponse * AmplifyUIBuilderClient::getForm(const GetFormRequest &request)
{
    return qobject_cast<GetFormResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * GetMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns existing metadata for an Amplify
 */
GetMetadataResponse * AmplifyUIBuilderClient::getMetadata(const GetMetadataRequest &request)
{
    return qobject_cast<GetMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * GetThemeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an existing theme for an Amplify
 */
GetThemeResponse * AmplifyUIBuilderClient::getTheme(const GetThemeRequest &request)
{
    return qobject_cast<GetThemeResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * ListComponentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of components for a specified Amplify app and backend
 */
ListComponentsResponse * AmplifyUIBuilderClient::listComponents(const ListComponentsRequest &request)
{
    return qobject_cast<ListComponentsResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * ListFormsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of forms for a specified Amplify app and backend
 */
ListFormsResponse * AmplifyUIBuilderClient::listForms(const ListFormsRequest &request)
{
    return qobject_cast<ListFormsResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * ListThemesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of themes for a specified Amplify app and backend
 */
ListThemesResponse * AmplifyUIBuilderClient::listThemes(const ListThemesRequest &request)
{
    return qobject_cast<ListThemesResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * PutMetadataFlagResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stores the metadata information about a feature on a form or
 */
PutMetadataFlagResponse * AmplifyUIBuilderClient::putMetadataFlag(const PutMetadataFlagRequest &request)
{
    return qobject_cast<PutMetadataFlagResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * RefreshTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Refreshes a previously issued access token that might have
 */
RefreshTokenResponse * AmplifyUIBuilderClient::refreshToken(const RefreshTokenRequest &request)
{
    return qobject_cast<RefreshTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * UpdateComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing
 */
UpdateComponentResponse * AmplifyUIBuilderClient::updateComponent(const UpdateComponentRequest &request)
{
    return qobject_cast<UpdateComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * UpdateFormResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing
 */
UpdateFormResponse * AmplifyUIBuilderClient::updateForm(const UpdateFormRequest &request)
{
    return qobject_cast<UpdateFormResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyUIBuilderClient service, and returns a pointer to an
 * UpdateThemeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing
 */
UpdateThemeResponse * AmplifyUIBuilderClient::updateTheme(const UpdateThemeRequest &request)
{
    return qobject_cast<UpdateThemeResponse *>(send(request));
}

/*!
 * \class QtAws::AmplifyUIBuilder::AmplifyUIBuilderClientPrivate
 * \brief The AmplifyUIBuilderClientPrivate class provides private implementation for AmplifyUIBuilderClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a AmplifyUIBuilderClientPrivate object with public implementation \a q.
 */
AmplifyUIBuilderClientPrivate::AmplifyUIBuilderClientPrivate(AmplifyUIBuilderClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AmplifyUIBuilder
} // namespace QtAws
