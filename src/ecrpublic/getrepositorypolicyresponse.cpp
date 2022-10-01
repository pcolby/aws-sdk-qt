// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrepositorypolicyresponse.h"
#include "getrepositorypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::GetRepositoryPolicyResponse
 * \brief The GetRepositoryPolicyResponse class provides an interace for EcrPublic GetRepositoryPolicy responses.
 *
 * \inmodule QtAwsEcrPublic
 *
 *  <fullname>Amazon Elastic Container Registry Public</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Amazon ECR provides both
 *  public and private registries to host your container images. You can use the familiar Docker CLI, or their preferred
 *  client, to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry for your Docker
 *  or Open Container Initiative (OCI) images. Amazon ECR supports public repositories with this API. For information about
 *  the Amazon ECR API for private repositories, see <a
 *  href="https://docs.aws.amazon.com/AmazonECR/latest/APIReference/Welcome.html">Amazon Elastic Container Registry API
 *
 * \sa EcrPublicClient::getRepositoryPolicy
 */

/*!
 * Constructs a GetRepositoryPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetRepositoryPolicyResponse::GetRepositoryPolicyResponse(
        const GetRepositoryPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrPublicResponse(new GetRepositoryPolicyResponsePrivate(this), parent)
{
    setRequest(new GetRepositoryPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRepositoryPolicyRequest * GetRepositoryPolicyResponse::request() const
{
    Q_D(const GetRepositoryPolicyResponse);
    return static_cast<const GetRepositoryPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EcrPublic GetRepositoryPolicy \a response.
 */
void GetRepositoryPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRepositoryPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EcrPublic::GetRepositoryPolicyResponsePrivate
 * \brief The GetRepositoryPolicyResponsePrivate class provides private implementation for GetRepositoryPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a GetRepositoryPolicyResponsePrivate object with public implementation \a q.
 */
GetRepositoryPolicyResponsePrivate::GetRepositoryPolicyResponsePrivate(
    GetRepositoryPolicyResponse * const q) : EcrPublicResponsePrivate(q)
{

}

/*!
 * Parses a EcrPublic GetRepositoryPolicy response element from \a xml.
 */
void GetRepositoryPolicyResponsePrivate::parseGetRepositoryPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRepositoryPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EcrPublic
} // namespace QtAws
