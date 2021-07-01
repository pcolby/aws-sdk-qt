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

#include "describepackageversionresponse.h"
#include "describepackageversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeArtifact {

/*!
 * \class QtAws::CodeArtifact::DescribePackageVersionResponse
 * \brief The DescribePackageVersionResponse class provides an interace for CodeArtifact DescribePackageVersion responses.
 *
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
 *
 * \sa CodeArtifactClient::describePackageVersion
 */

/*!
 * Constructs a DescribePackageVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePackageVersionResponse::DescribePackageVersionResponse(
        const DescribePackageVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeArtifactResponse(new DescribePackageVersionResponsePrivate(this), parent)
{
    setRequest(new DescribePackageVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePackageVersionRequest * DescribePackageVersionResponse::request() const
{
    Q_D(const DescribePackageVersionResponse);
    return static_cast<const DescribePackageVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeArtifact DescribePackageVersion \a response.
 */
void DescribePackageVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePackageVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeArtifact::DescribePackageVersionResponsePrivate
 * \brief The DescribePackageVersionResponsePrivate class provides private implementation for DescribePackageVersionResponse.
 * \internal
 *
 * \inmodule QtAwsCodeArtifact
 */

/*!
 * Constructs a DescribePackageVersionResponsePrivate object with public implementation \a q.
 */
DescribePackageVersionResponsePrivate::DescribePackageVersionResponsePrivate(
    DescribePackageVersionResponse * const q) : CodeArtifactResponsePrivate(q)
{

}

/*!
 * Parses a CodeArtifact DescribePackageVersion response element from \a xml.
 */
void DescribePackageVersionResponsePrivate::parseDescribePackageVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePackageVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeArtifact
} // namespace QtAws
