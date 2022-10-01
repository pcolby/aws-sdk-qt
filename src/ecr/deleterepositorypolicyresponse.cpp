// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterepositorypolicyresponse.h"
#include "deleterepositorypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::DeleteRepositoryPolicyResponse
 * \brief The DeleteRepositoryPolicyResponse class provides an interace for Ecr DeleteRepositoryPolicy responses.
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
 * \sa EcrClient::deleteRepositoryPolicy
 */

/*!
 * Constructs a DeleteRepositoryPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRepositoryPolicyResponse::DeleteRepositoryPolicyResponse(
        const DeleteRepositoryPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new DeleteRepositoryPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteRepositoryPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRepositoryPolicyRequest * DeleteRepositoryPolicyResponse::request() const
{
    Q_D(const DeleteRepositoryPolicyResponse);
    return static_cast<const DeleteRepositoryPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr DeleteRepositoryPolicy \a response.
 */
void DeleteRepositoryPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRepositoryPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::DeleteRepositoryPolicyResponsePrivate
 * \brief The DeleteRepositoryPolicyResponsePrivate class provides private implementation for DeleteRepositoryPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a DeleteRepositoryPolicyResponsePrivate object with public implementation \a q.
 */
DeleteRepositoryPolicyResponsePrivate::DeleteRepositoryPolicyResponsePrivate(
    DeleteRepositoryPolicyResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr DeleteRepositoryPolicy response element from \a xml.
 */
void DeleteRepositoryPolicyResponsePrivate::parseDeleteRepositoryPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRepositoryPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
