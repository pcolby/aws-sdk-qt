// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getregistrypolicyresponse.h"
#include "getregistrypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::GetRegistryPolicyResponse
 * \brief The GetRegistryPolicyResponse class provides an interace for Ecr GetRegistryPolicy responses.
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
 * \sa EcrClient::getRegistryPolicy
 */

/*!
 * Constructs a GetRegistryPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetRegistryPolicyResponse::GetRegistryPolicyResponse(
        const GetRegistryPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new GetRegistryPolicyResponsePrivate(this), parent)
{
    setRequest(new GetRegistryPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRegistryPolicyRequest * GetRegistryPolicyResponse::request() const
{
    Q_D(const GetRegistryPolicyResponse);
    return static_cast<const GetRegistryPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr GetRegistryPolicy \a response.
 */
void GetRegistryPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRegistryPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::GetRegistryPolicyResponsePrivate
 * \brief The GetRegistryPolicyResponsePrivate class provides private implementation for GetRegistryPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a GetRegistryPolicyResponsePrivate object with public implementation \a q.
 */
GetRegistryPolicyResponsePrivate::GetRegistryPolicyResponsePrivate(
    GetRegistryPolicyResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr GetRegistryPolicy response element from \a xml.
 */
void GetRegistryPolicyResponsePrivate::parseGetRegistryPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRegistryPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
