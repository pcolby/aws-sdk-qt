// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrepositorypolicyresponse.h"
#include "getrepositorypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::GetRepositoryPolicyResponse
 * \brief The GetRepositoryPolicyResponse class provides an interace for Ecr GetRepositoryPolicy responses.
 *
 * \inmodule QtAwsEcr
 *
 *  <fullname>Amazon Elastic Container Registry</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Customers can use the
 *  familiar Docker CLI, or their preferred client, to push, pull, and manage images. Amazon ECR provides a secure,
 *  scalable, and reliable registry for your Docker or Open Container Initiative (OCI) images. Amazon ECR supports private
 *  repositories with resource-based permissions using IAM so that specific users or Amazon EC2 instances can access
 *  repositories and
 * 
 *  images>
 * 
 *  Amazon ECR has service endpoints in each supported Region. For more information, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/ecr.html">Amazon ECR endpoints</a> in the <i>Amazon Web Services
 *  General
 *
 * \sa EcrClient::getRepositoryPolicy
 */

/*!
 * Constructs a GetRepositoryPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetRepositoryPolicyResponse::GetRepositoryPolicyResponse(
        const GetRepositoryPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new GetRepositoryPolicyResponsePrivate(this), parent)
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
 * Parses a successful Ecr GetRepositoryPolicy \a response.
 */
void GetRepositoryPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRepositoryPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::GetRepositoryPolicyResponsePrivate
 * \brief The GetRepositoryPolicyResponsePrivate class provides private implementation for GetRepositoryPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a GetRepositoryPolicyResponsePrivate object with public implementation \a q.
 */
GetRepositoryPolicyResponsePrivate::GetRepositoryPolicyResponsePrivate(
    GetRepositoryPolicyResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr GetRepositoryPolicy response element from \a xml.
 */
void GetRepositoryPolicyResponsePrivate::parseGetRepositoryPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRepositoryPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
