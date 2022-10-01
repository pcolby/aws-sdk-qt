// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlifecyclepolicyresponse.h"
#include "getlifecyclepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::GetLifecyclePolicyResponse
 * \brief The GetLifecyclePolicyResponse class provides an interace for Ecr GetLifecyclePolicy responses.
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
 * \sa EcrClient::getLifecyclePolicy
 */

/*!
 * Constructs a GetLifecyclePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetLifecyclePolicyResponse::GetLifecyclePolicyResponse(
        const GetLifecyclePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new GetLifecyclePolicyResponsePrivate(this), parent)
{
    setRequest(new GetLifecyclePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLifecyclePolicyRequest * GetLifecyclePolicyResponse::request() const
{
    Q_D(const GetLifecyclePolicyResponse);
    return static_cast<const GetLifecyclePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr GetLifecyclePolicy \a response.
 */
void GetLifecyclePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLifecyclePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::GetLifecyclePolicyResponsePrivate
 * \brief The GetLifecyclePolicyResponsePrivate class provides private implementation for GetLifecyclePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a GetLifecyclePolicyResponsePrivate object with public implementation \a q.
 */
GetLifecyclePolicyResponsePrivate::GetLifecyclePolicyResponsePrivate(
    GetLifecyclePolicyResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr GetLifecyclePolicy response element from \a xml.
 */
void GetLifecyclePolicyResponsePrivate::parseGetLifecyclePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLifecyclePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
