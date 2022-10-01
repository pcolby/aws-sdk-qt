// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setrepositorypolicyresponse.h"
#include "setrepositorypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::SetRepositoryPolicyResponse
 * \brief The SetRepositoryPolicyResponse class provides an interace for Ecr SetRepositoryPolicy responses.
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
 * \sa EcrClient::setRepositoryPolicy
 */

/*!
 * Constructs a SetRepositoryPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
SetRepositoryPolicyResponse::SetRepositoryPolicyResponse(
        const SetRepositoryPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new SetRepositoryPolicyResponsePrivate(this), parent)
{
    setRequest(new SetRepositoryPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetRepositoryPolicyRequest * SetRepositoryPolicyResponse::request() const
{
    Q_D(const SetRepositoryPolicyResponse);
    return static_cast<const SetRepositoryPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr SetRepositoryPolicy \a response.
 */
void SetRepositoryPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetRepositoryPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::SetRepositoryPolicyResponsePrivate
 * \brief The SetRepositoryPolicyResponsePrivate class provides private implementation for SetRepositoryPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a SetRepositoryPolicyResponsePrivate object with public implementation \a q.
 */
SetRepositoryPolicyResponsePrivate::SetRepositoryPolicyResponsePrivate(
    SetRepositoryPolicyResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr SetRepositoryPolicy response element from \a xml.
 */
void SetRepositoryPolicyResponsePrivate::parseSetRepositoryPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetRepositoryPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
