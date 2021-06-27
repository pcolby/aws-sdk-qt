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

#include "codeartifactclient.h"
#include "codeartifactclient_p.h"

#include "core/awssignaturev4.h"
#include "associateexternalconnectionrequest.h"
#include "associateexternalconnectionresponse.h"
#include "copypackageversionsrequest.h"
#include "copypackageversionsresponse.h"
#include "createdomainrequest.h"
#include "createdomainresponse.h"
#include "createrepositoryrequest.h"
#include "createrepositoryresponse.h"
#include "deletedomainrequest.h"
#include "deletedomainresponse.h"
#include "deletedomainpermissionspolicyrequest.h"
#include "deletedomainpermissionspolicyresponse.h"
#include "deletepackageversionsrequest.h"
#include "deletepackageversionsresponse.h"
#include "deleterepositoryrequest.h"
#include "deleterepositoryresponse.h"
#include "deleterepositorypermissionspolicyrequest.h"
#include "deleterepositorypermissionspolicyresponse.h"
#include "describedomainrequest.h"
#include "describedomainresponse.h"
#include "describepackageversionrequest.h"
#include "describepackageversionresponse.h"
#include "describerepositoryrequest.h"
#include "describerepositoryresponse.h"
#include "disassociateexternalconnectionrequest.h"
#include "disassociateexternalconnectionresponse.h"
#include "disposepackageversionsrequest.h"
#include "disposepackageversionsresponse.h"
#include "getauthorizationtokenrequest.h"
#include "getauthorizationtokenresponse.h"
#include "getdomainpermissionspolicyrequest.h"
#include "getdomainpermissionspolicyresponse.h"
#include "getpackageversionassetrequest.h"
#include "getpackageversionassetresponse.h"
#include "getpackageversionreadmerequest.h"
#include "getpackageversionreadmeresponse.h"
#include "getrepositoryendpointrequest.h"
#include "getrepositoryendpointresponse.h"
#include "getrepositorypermissionspolicyrequest.h"
#include "getrepositorypermissionspolicyresponse.h"
#include "listdomainsrequest.h"
#include "listdomainsresponse.h"
#include "listpackageversionassetsrequest.h"
#include "listpackageversionassetsresponse.h"
#include "listpackageversiondependenciesrequest.h"
#include "listpackageversiondependenciesresponse.h"
#include "listpackageversionsrequest.h"
#include "listpackageversionsresponse.h"
#include "listpackagesrequest.h"
#include "listpackagesresponse.h"
#include "listrepositoriesrequest.h"
#include "listrepositoriesresponse.h"
#include "listrepositoriesindomainrequest.h"
#include "listrepositoriesindomainresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putdomainpermissionspolicyrequest.h"
#include "putdomainpermissionspolicyresponse.h"
#include "putrepositorypermissionspolicyrequest.h"
#include "putrepositorypermissionspolicyresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatepackageversionsstatusrequest.h"
#include "updatepackageversionsstatusresponse.h"
#include "updaterepositoryrequest.h"
#include "updaterepositoryresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CodeArtifact
 * \brief Contains classess for accessing CodeArtifact.
 *
 * \inmodule QtAwsCodeArtifact
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CodeArtifact {

/*!
 * \class QtAws::CodeArtifact::CodeArtifactClient
 * \brief The CodeArtifactClient class provides access to the CodeArtifact service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCodeArtifact
 *
 *  AWS CodeArtifact is a fully managed artifact repository compatible with language-native package managers and build tools
 *  such as npm, Apache Maven, and pip. You can use CodeArtifact to share packages with development teams and pull packages.
 *  Packages can be pulled from both public and CodeArtifact repositories. You can also create an upstream relationship
 *  between a CodeArtifact repository and another repository, which effectively merges their contents from the point of view
 *  of a package manager client.
 * 
 *  </p
 * 
 *  <b>AWS CodeArtifact Components</b>
 * 
 *  </p
 * 
 *  Use the information in this guide to help you work with the following CodeArtifact
 * 
 *  components> <ul> <li>
 * 
 *  <b>Repository</b>: A CodeArtifact repository contains a set of <a
 *  href="https://docs.aws.amazon.com/codeartifact/latest/ug/welcome.html#welcome-concepts-package-version">package
 *  versions</a>, each of which maps to a set of assets, or files. Repositories are polyglot, so a single repository can
 *  contain packages of any supported type. Each repository exposes endpoints for fetching and publishing packages using
 *  tools like the <b> <code>npm</code> </b> CLI, the Maven CLI (<b> <code>mvn</code> </b>), and <b> <code>pip</code>
 * 
 *  </b>> </li> <li>
 * 
 *  <b>Domain</b>: Repositories are aggregated into a higher-level entity known as a <i>domain</i>. All package assets and
 *  metadata are stored in the domain, but are consumed through repositories. A given package asset, such as a Maven JAR
 *  file, is stored once per domain, no matter how many repositories it's present in. All of the assets and metadata in a
 *  domain are encrypted with the same customer master key (CMK) stored in AWS Key Management Service (AWS
 * 
 *  KMS)>
 * 
 *  Each repository is a member of a single domain and can't be moved to a different
 * 
 *  domain>
 * 
 *  The domain allows organizational policy to be applied across multiple repositories, such as which accounts can access
 *  repositories in the domain, and which public repositories can be used as sources of
 * 
 *  packages>
 * 
 *  Although an organization can have multiple domains, we recommend a single production domain that contains all published
 *  artifacts so that teams can find and share packages across their
 * 
 *  organization> </li> <li>
 * 
 *  <b>Package</b>: A <i>package</i> is a bundle of software and the metadata required to resolve dependencies and install
 *  the software. CodeArtifact supports <a href="https://docs.aws.amazon.com/codeartifact/latest/ug/using-npm.html">npm</a>,
 *  <a href="https://docs.aws.amazon.com/codeartifact/latest/ug/using-python.html">PyPI</a>, and <a
 *  href="https://docs.aws.amazon.com/codeartifact/latest/ug/using-maven">Maven</a> package
 * 
 *  formats>
 * 
 *  In CodeArtifact, a package consists
 * 
 *  of> <ul> <li>
 * 
 *  A <i>name</i> (for example, <code>webpack</code> is the name of a popular npm
 * 
 *  package> </li> <li>
 * 
 *  An optional namespace (for example, <code>@types</code> in
 * 
 *  <code>@types/node</code>> </li> <li>
 * 
 *  A set of versions (for example, <code>1.0.0</code>, <code>1.0.1</code>, <code>1.0.2</code>,
 * 
 *  etc.> </li> <li>
 * 
 *  Package-level metadata (for example, npm
 * 
 *  tags> </li> </ul> </li> <li>
 * 
 *  <b>Package version</b>: A version of a package, such as <code>@types/node 12.6.9</code>. The version number format and
 *  semantics vary for different package formats. For example, npm package versions must conform to the <a
 *  href="https://semver.org/">Semantic Versioning specification</a>. In CodeArtifact, a package version consists of the
 *  version identifier, metadata at the package version level, and a set of
 * 
 *  assets> </li> <li>
 * 
 *  <b>Upstream repository</b>: One repository is <i>upstream</i> of another when the package versions in it can be accessed
 *  from the repository endpoint of the downstream repository, effectively merging the contents of the two repositories from
 *  the point of view of a client. CodeArtifact allows creating an upstream relationship between two
 * 
 *  repositories> </li> <li>
 * 
 *  <b>Asset</b>: An individual file stored in CodeArtifact associated with a package version, such as an npm
 *  <code>.tgz</code> file or Maven POM and JAR
 * 
 *  files> </li> </ul>
 * 
 *  CodeArtifact supports these
 * 
 *  operations> <ul> <li>
 * 
 *  <code>AssociateExternalConnection</code>: Adds an existing external connection to a repository.
 * 
 *  </p </li> <li>
 * 
 *  <code>CopyPackageVersions</code>: Copies package versions from one repository to another repository in the same
 * 
 *  domain> </li> <li>
 * 
 *  <code>CreateDomain</code>: Creates a
 * 
 *  domai> </li> <li>
 * 
 *  <code>CreateRepository</code>: Creates a CodeArtifact repository in a domain.
 * 
 *  </p </li> <li>
 * 
 *  <code>DeleteDomain</code>: Deletes a domain. You cannot delete a domain that contains repositories.
 * 
 *  </p </li> <li>
 * 
 *  <code>DeleteDomainPermissionsPolicy</code>: Deletes the resource policy that is set on a
 * 
 *  domain> </li> <li>
 * 
 *  <code>DeletePackageVersions</code>: Deletes versions of a package. After a package has been deleted, it can be
 *  republished, but its assets and metadata cannot be restored because they have been permanently removed from
 * 
 *  storage> </li> <li>
 * 
 *  <code>DeleteRepository</code>: Deletes a repository.
 * 
 *  </p </li> <li>
 * 
 *  <code>DeleteRepositoryPermissionsPolicy</code>: Deletes the resource policy that is set on a
 * 
 *  repository> </li> <li>
 * 
 *  <code>DescribeDomain</code>: Returns a <code>DomainDescription</code> object that contains information about the
 *  requested
 * 
 *  domain> </li> <li>
 * 
 *  <code>DescribePackageVersion</code>: Returns a <a
 *  href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">PackageVersionDescription</a>
 *  object that contains details about a package version.
 * 
 *  </p </li> <li>
 * 
 *  <code>DescribeRepository</code>: Returns a <code>RepositoryDescription</code> object that contains detailed information
 *  about the requested repository.
 * 
 *  </p </li> <li>
 * 
 *  <code>DisposePackageVersions</code>: Disposes versions of a package. A package version with the status
 *  <code>Disposed</code> cannot be restored because they have been permanently removed from
 * 
 *  storage> </li> <li>
 * 
 *  <code>DisassociateExternalConnection</code>: Removes an existing external connection from a repository.
 * 
 *  </p </li> <li>
 * 
 *  <code>GetAuthorizationToken</code>: Generates a temporary authorization token for accessing repositories in the domain.
 *  The token expires the authorization period has passed. The default authorization period is 12 hours and can be
 *  customized to any length with a maximum of 12
 * 
 *  hours> </li> <li>
 * 
 *  <code>GetDomainPermissionsPolicy</code>: Returns the policy of a resource that is attached to the specified domain.
 * 
 *  </p </li> <li>
 * 
 *  <code>GetPackageVersionAsset</code>: Returns the contents of an asset that is in a package version.
 * 
 *  </p </li> <li>
 * 
 *  <code>GetPackageVersionReadme</code>: Gets the readme file or descriptive text for a package
 * 
 *  version> </li> <li>
 * 
 *  <code>GetRepositoryEndpoint</code>: Returns the endpoint of a repository for a specific package format. A repository has
 *  one endpoint for each package format:
 * 
 *  </p <ul> <li>
 * 
 *  <code>npm</code>
 * 
 *  </p </li> <li>
 * 
 *  <code>pypi</code>
 * 
 *  </p </li> <li>
 * 
 *  <code>maven</code>
 * 
 *  </p </li> </ul> </li> <li>
 * 
 *  <code>GetRepositoryPermissionsPolicy</code>: Returns the resource policy that is set on a repository.
 * 
 *  </p </li> <li>
 * 
 *  <code>ListDomains</code>: Returns a list of <code>DomainSummary</code> objects. Each returned <code>DomainSummary</code>
 *  object contains information about a
 * 
 *  domain> </li> <li>
 * 
 *  <code>ListPackages</code>: Lists the packages in a
 * 
 *  repository> </li> <li>
 * 
 *  <code>ListPackageVersionAssets</code>: Lists the assets for a given package
 * 
 *  version> </li> <li>
 * 
 *  <code>ListPackageVersionDependencies</code>: Returns a list of the direct dependencies for a package version.
 * 
 *  </p </li> <li>
 * 
 *  <code>ListPackageVersions</code>: Returns a list of package versions for a specified package in a
 * 
 *  repository> </li> <li>
 * 
 *  <code>ListRepositories</code>: Returns a list of repositories owned by the AWS account that called this
 * 
 *  method> </li> <li>
 * 
 *  <code>ListRepositoriesInDomain</code>: Returns a list of the repositories in a
 * 
 *  domain> </li> <li>
 * 
 *  <code>PutDomainPermissionsPolicy</code>: Attaches a resource policy to a
 * 
 *  domain> </li> <li>
 * 
 *  <code>PutRepositoryPermissionsPolicy</code>: Sets the resource policy on a repository that specifies permissions to
 *  access it.
 * 
 *  </p </li> <li>
 * 
 *  <code>UpdatePackageVersionsStatus</code>: Updates the status of one or more versions of a
 * 
 *  package> </li> <li>
 * 
 *  <code>UpdateRepository</code>: Updates the properties of a
 */

/*!
 * \brief Constructs a CodeArtifactClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CodeArtifactClient::CodeArtifactClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-09-22"),
    QStringLiteral("codeartifact"),
    QStringLiteral("CodeArtifact"),
    QStringLiteral("codeartifact"),
    parent), d_ptr(new CodeArtifactClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload CodeArtifactClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CodeArtifactClient::CodeArtifactClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-09-22"),
    QStringLiteral("codeartifact"),
    QStringLiteral("CodeArtifact"),
    QStringLiteral("codeartifact"),
    parent), d_ptr(new CodeArtifactClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * AssociateExternalConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an existing external connection to a repository. One external connection is allowed per
 *
 * repository> <note>
 *
 * A repository can have one or more upstream repositories, or an external
 */
AssociateExternalConnectionResponse * CodeArtifactClient::associateExternalConnection(const AssociateExternalConnectionRequest &request)
{
    return qobject_cast<AssociateExternalConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * CopyPackageVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies package versions from one repository to another repository in the same domain.
 *
 * </p <note>
 *
 * You must specify <code>versions</code> or <code>versionRevisions</code>. You cannot specify both.
 */
CopyPackageVersionsResponse * CodeArtifactClient::copyPackageVersions(const CopyPackageVersionsRequest &request)
{
    return qobject_cast<CopyPackageVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * CreateDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a domain. CodeArtifact <i>domains</i> make it easier to manage multiple repositories across an organization. You
 * can use a domain to apply permissions across many repositories owned by different AWS accounts. An asset is stored only
 * once in a domain, even if it's in multiple repositories.
 *
 * </p
 *
 * Although you can have multiple domains, we recommend a single production domain that contains all published artifacts so
 * that your development teams can find and share packages. You can use a second pre-production domain to test changes to
 * the production domain configuration.
 */
CreateDomainResponse * CodeArtifactClient::createDomain(const CreateDomainRequest &request)
{
    return qobject_cast<CreateDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * CreateRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a repository.
 */
CreateRepositoryResponse * CodeArtifactClient::createRepository(const CreateRepositoryRequest &request)
{
    return qobject_cast<CreateRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * DeleteDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a domain. You cannot delete a domain that contains repositories. If you want to delete a domain with
 * repositories, first delete its repositories.
 */
DeleteDomainResponse * CodeArtifactClient::deleteDomain(const DeleteDomainRequest &request)
{
    return qobject_cast<DeleteDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * DeleteDomainPermissionsPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the resource policy set on a domain.
 */
DeleteDomainPermissionsPolicyResponse * CodeArtifactClient::deleteDomainPermissionsPolicy(const DeleteDomainPermissionsPolicyRequest &request)
{
    return qobject_cast<DeleteDomainPermissionsPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * DeletePackageVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes one or more versions of a package. A deleted package version cannot be restored in your repository. If you want
 * to remove a package version from your repository and be able to restore it later, set its status to
 * <code>Archived</code>. Archived packages cannot be downloaded from a repository and don't show up with list package APIs
 * (for example, <a
 * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html">ListackageVersions</a>),
 * but you can restore them using <a
 * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_UpdatePackageVersionsStatus.html">UpdatePackageVersionsStatus</a>.
 */
DeletePackageVersionsResponse * CodeArtifactClient::deletePackageVersions(const DeletePackageVersionsRequest &request)
{
    return qobject_cast<DeletePackageVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * DeleteRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a repository.
 */
DeleteRepositoryResponse * CodeArtifactClient::deleteRepository(const DeleteRepositoryRequest &request)
{
    return qobject_cast<DeleteRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * DeleteRepositoryPermissionsPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the resource policy that is set on a repository. After a resource policy is deleted, the permissions allowed and
 * denied by the deleted policy are removed. The effect of deleting a resource policy might not be immediate.
 *
 * </p <b>
 *
 * Use <code>DeleteRepositoryPermissionsPolicy</code> with caution. After a policy is deleted, AWS users, roles, and
 * accounts lose permissions to perform the repository actions granted by the deleted policy.
 */
DeleteRepositoryPermissionsPolicyResponse * CodeArtifactClient::deleteRepositoryPermissionsPolicy(const DeleteRepositoryPermissionsPolicyRequest &request)
{
    return qobject_cast<DeleteRepositoryPermissionsPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * DescribeDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a <a
 * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DomainDescription.html">DomainDescription</a>
 * object that contains information about the requested domain.
 */
DescribeDomainResponse * CodeArtifactClient::describeDomain(const DescribeDomainRequest &request)
{
    return qobject_cast<DescribeDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * DescribePackageVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a <a
 * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">PackageVersionDescription</a>
 * object that contains information about the requested package version.
 */
DescribePackageVersionResponse * CodeArtifactClient::describePackageVersion(const DescribePackageVersionRequest &request)
{
    return qobject_cast<DescribePackageVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * DescribeRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a <code>RepositoryDescription</code> object that contains detailed information about the requested repository.
 */
DescribeRepositoryResponse * CodeArtifactClient::describeRepository(const DescribeRepositoryRequest &request)
{
    return qobject_cast<DescribeRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * DisassociateExternalConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes an existing external connection from a repository.
 */
DisassociateExternalConnectionResponse * CodeArtifactClient::disassociateExternalConnection(const DisassociateExternalConnectionRequest &request)
{
    return qobject_cast<DisassociateExternalConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * DisposePackageVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the assets in package versions and sets the package versions' status to <code>Disposed</code>. A disposed
 * package version cannot be restored in your repository because its assets are deleted.
 *
 * </p
 *
 * To view all disposed package versions in a repository, use <a
 * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html">ListPackageVersions</a>
 * and set the <a
 * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_ListPackageVersions.html#API_ListPackageVersions_RequestSyntax">status</a>
 * parameter to <code>Disposed</code>.
 *
 * </p
 *
 * To view information about a disposed package version, use <a
 * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_DescribePackageVersion.html">DescribePackageVersion</a>.
 */
DisposePackageVersionsResponse * CodeArtifactClient::disposePackageVersions(const DisposePackageVersionsRequest &request)
{
    return qobject_cast<DisposePackageVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * GetAuthorizationTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a temporary authorization token for accessing repositories in the domain. This API requires the
 * <code>codeartifact:GetAuthorizationToken</code> and <code>sts:GetServiceBearerToken</code> permissions. For more
 * information about authorization tokens, see <a
 * href="https://docs.aws.amazon.com/codeartifact/latest/ug/tokens-authentication.html">AWS CodeArtifact authentication and
 * tokens</a>.
 *
 * </p <note>
 *
 * CodeArtifact authorization tokens are valid for a period of 12 hours when created with the <code>login</code> command.
 * You can call <code>login</code> periodically to refresh the token. When you create an authorization token with the
 * <code>GetAuthorizationToken</code> API, you can set a custom authorization period, up to a maximum of 12 hours, with the
 * <code>durationSeconds</code>
 *
 * parameter>
 *
 * The authorization period begins after <code>login</code> or <code>GetAuthorizationToken</code> is called. If
 * <code>login</code> or <code>GetAuthorizationToken</code> is called while assuming a role, the token lifetime is
 * independent of the maximum session duration of the role. For example, if you call <code>sts assume-role</code> and
 * specify a session duration of 15 minutes, then generate a CodeArtifact authorization token, the token will be valid for
 * the full authorization period even though this is longer than the 15-minute session
 *
 * duration>
 *
 * See <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use.html">Using IAM Roles</a> for more
 * information on controlling session duration.
 */
GetAuthorizationTokenResponse * CodeArtifactClient::getAuthorizationToken(const GetAuthorizationTokenRequest &request)
{
    return qobject_cast<GetAuthorizationTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * GetDomainPermissionsPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the resource policy attached to the specified domain.
 *
 * </p <note>
 *
 * The policy is a resource-based policy, not an identity-based policy. For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_identity-vs-resource.html">Identity-based
 * policies and resource-based policies </a> in the <i>AWS Identity and Access Management User Guide</i>.
 */
GetDomainPermissionsPolicyResponse * CodeArtifactClient::getDomainPermissionsPolicy(const GetDomainPermissionsPolicyRequest &request)
{
    return qobject_cast<GetDomainPermissionsPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * GetPackageVersionAssetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an asset (or file) that is in a package. For example, for a Maven package version, use
 * <code>GetPackageVersionAsset</code> to download a <code>JAR</code> file, a <code>POM</code> file, or any other assets in
 * the package version.
 */
GetPackageVersionAssetResponse * CodeArtifactClient::getPackageVersionAsset(const GetPackageVersionAssetRequest &request)
{
    return qobject_cast<GetPackageVersionAssetResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * GetPackageVersionReadmeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the readme file or descriptive text for a package version. For packages that do not contain a readme file,
 * CodeArtifact extracts a description from a metadata file. For example, from the <code>&lt;description&gt;</code> element
 * in the <code>pom.xml</code> file of a Maven package.
 *
 * </p
 *
 * The returned text might contain formatting. For example, it might contain formatting for Markdown or reStructuredText.
 */
GetPackageVersionReadmeResponse * CodeArtifactClient::getPackageVersionReadme(const GetPackageVersionReadmeRequest &request)
{
    return qobject_cast<GetPackageVersionReadmeResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * GetRepositoryEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the endpoint of a repository for a specific package format. A repository has one endpoint for each package
 * format:
 *
 * </p <ul> <li>
 *
 * <code>npm</code>
 *
 * </p </li> <li>
 *
 * <code>pypi</code>
 *
 * </p </li> <li>
 *
 * <code>maven</code>
 */
GetRepositoryEndpointResponse * CodeArtifactClient::getRepositoryEndpoint(const GetRepositoryEndpointRequest &request)
{
    return qobject_cast<GetRepositoryEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * GetRepositoryPermissionsPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the resource policy that is set on a repository.
 */
GetRepositoryPermissionsPolicyResponse * CodeArtifactClient::getRepositoryPermissionsPolicy(const GetRepositoryPermissionsPolicyRequest &request)
{
    return qobject_cast<GetRepositoryPermissionsPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * ListDomainsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <a
 * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">DomainSummary</a>
 * objects for all domains owned by the AWS account that makes this call. Each returned <code>DomainSummary</code> object
 * contains information about a domain.
 */
ListDomainsResponse * CodeArtifactClient::listDomains(const ListDomainsRequest &request)
{
    return qobject_cast<ListDomainsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * ListPackageVersionAssetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <a
 * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_AssetSummary.html">AssetSummary</a> objects for
 * assets in a package version.
 */
ListPackageVersionAssetsResponse * CodeArtifactClient::listPackageVersionAssets(const ListPackageVersionAssetsRequest &request)
{
    return qobject_cast<ListPackageVersionAssetsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * ListPackageVersionDependenciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the direct dependencies for a package version. The dependencies are returned as <a
 * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageDependency.html">PackageDependency</a>
 * objects. CodeArtifact extracts the dependencies for a package version from the metadata file for the package format (for
 * example, the <code>package.json</code> file for npm packages and the <code>pom.xml</code> file for Maven). Any package
 * version dependencies that are not listed in the configuration file are not returned.
 */
ListPackageVersionDependenciesResponse * CodeArtifactClient::listPackageVersionDependencies(const ListPackageVersionDependenciesRequest &request)
{
    return qobject_cast<ListPackageVersionDependenciesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * ListPackageVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <a
 * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionSummary.html">PackageVersionSummary</a>
 * objects for package versions in a repository that match the request parameters.
 */
ListPackageVersionsResponse * CodeArtifactClient::listPackageVersions(const ListPackageVersionsRequest &request)
{
    return qobject_cast<ListPackageVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * ListPackagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <a
 * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageSummary.html">PackageSummary</a> objects
 * for packages in a repository that match the request parameters.
 */
ListPackagesResponse * CodeArtifactClient::listPackages(const ListPackagesRequest &request)
{
    return qobject_cast<ListPackagesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * ListRepositoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <a
 * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_RepositorySummary.html">RepositorySummary</a>
 * objects. Each <code>RepositorySummary</code> contains information about a repository in the specified AWS account and
 * that matches the input parameters.
 */
ListRepositoriesResponse * CodeArtifactClient::listRepositories(const ListRepositoriesRequest &request)
{
    return qobject_cast<ListRepositoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * ListRepositoriesInDomainResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <a
 * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_RepositorySummary.html">RepositorySummary</a>
 * objects. Each <code>RepositorySummary</code> contains information about a repository in the specified domain and that
 * matches the input parameters.
 */
ListRepositoriesInDomainResponse * CodeArtifactClient::listRepositoriesInDomain(const ListRepositoriesInDomainRequest &request)
{
    return qobject_cast<ListRepositoriesInDomainResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about AWS tags for a specified Amazon Resource Name (ARN) in AWS
 */
ListTagsForResourceResponse * CodeArtifactClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * PutDomainPermissionsPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets a resource policy on a domain that specifies permissions to access it.
 *
 * </p
 *
 * When you call <code>PutDomainPermissionsPolicy</code>, the resource policy on the domain is ignored when evaluting
 * permissions. This ensures that the owner of a domain cannot lock themselves out of the domain, which would prevent them
 * from being able to update the resource policy.
 */
PutDomainPermissionsPolicyResponse * CodeArtifactClient::putDomainPermissionsPolicy(const PutDomainPermissionsPolicyRequest &request)
{
    return qobject_cast<PutDomainPermissionsPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * PutRepositoryPermissionsPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the resource policy on a repository that specifies permissions to access it.
 *
 * </p
 *
 * When you call <code>PutRepositoryPermissionsPolicy</code>, the resource policy on the repository is ignored when
 * evaluting permissions. This ensures that the owner of a repository cannot lock themselves out of the repository, which
 * would prevent them from being able to update the resource policy.
 */
PutRepositoryPermissionsPolicyResponse * CodeArtifactClient::putRepositoryPermissionsPolicy(const PutRepositoryPermissionsPolicyRequest &request)
{
    return qobject_cast<PutRepositoryPermissionsPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates tags for a resource in AWS
 */
TagResourceResponse * CodeArtifactClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a resource in AWS
 */
UntagResourceResponse * CodeArtifactClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * UpdatePackageVersionsStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the status of one or more versions of a package.
 */
UpdatePackageVersionsStatusResponse * CodeArtifactClient::updatePackageVersionsStatus(const UpdatePackageVersionsStatusRequest &request)
{
    return qobject_cast<UpdatePackageVersionsStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeArtifactClient service, and returns a pointer to an
 * UpdateRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update the properties of a repository.
 */
UpdateRepositoryResponse * CodeArtifactClient::updateRepository(const UpdateRepositoryRequest &request)
{
    return qobject_cast<UpdateRepositoryResponse *>(send(request));
}

/*!
 * \class QtAws::CodeArtifact::CodeArtifactClientPrivate
 * \brief The CodeArtifactClientPrivate class provides private implementation for CodeArtifactClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCodeArtifact
 */

/*!
 * Constructs a CodeArtifactClientPrivate object with public implementation \a q.
 */
CodeArtifactClientPrivate::CodeArtifactClientPrivate(CodeArtifactClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace CodeArtifact
} // namespace QtAws
