// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putregistrypolicyresponse.h"
#include "putregistrypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::PutRegistryPolicyResponse
 * \brief The PutRegistryPolicyResponse class provides an interace for Ecr PutRegistryPolicy responses.
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
 * \sa EcrClient::putRegistryPolicy
 */

/*!
 * Constructs a PutRegistryPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutRegistryPolicyResponse::PutRegistryPolicyResponse(
        const PutRegistryPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new PutRegistryPolicyResponsePrivate(this), parent)
{
    setRequest(new PutRegistryPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRegistryPolicyRequest * PutRegistryPolicyResponse::request() const
{
    Q_D(const PutRegistryPolicyResponse);
    return static_cast<const PutRegistryPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr PutRegistryPolicy \a response.
 */
void PutRegistryPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRegistryPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::PutRegistryPolicyResponsePrivate
 * \brief The PutRegistryPolicyResponsePrivate class provides private implementation for PutRegistryPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a PutRegistryPolicyResponsePrivate object with public implementation \a q.
 */
PutRegistryPolicyResponsePrivate::PutRegistryPolicyResponsePrivate(
    PutRegistryPolicyResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr PutRegistryPolicy response element from \a xml.
 */
void PutRegistryPolicyResponsePrivate::parsePutRegistryPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRegistryPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
