// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpullthroughcacheruleresponse.h"
#include "createpullthroughcacheruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::CreatePullThroughCacheRuleResponse
 * \brief The CreatePullThroughCacheRuleResponse class provides an interace for Ecr CreatePullThroughCacheRule responses.
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
 * \sa EcrClient::createPullThroughCacheRule
 */

/*!
 * Constructs a CreatePullThroughCacheRuleResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePullThroughCacheRuleResponse::CreatePullThroughCacheRuleResponse(
        const CreatePullThroughCacheRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new CreatePullThroughCacheRuleResponsePrivate(this), parent)
{
    setRequest(new CreatePullThroughCacheRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePullThroughCacheRuleRequest * CreatePullThroughCacheRuleResponse::request() const
{
    Q_D(const CreatePullThroughCacheRuleResponse);
    return static_cast<const CreatePullThroughCacheRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr CreatePullThroughCacheRule \a response.
 */
void CreatePullThroughCacheRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePullThroughCacheRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::CreatePullThroughCacheRuleResponsePrivate
 * \brief The CreatePullThroughCacheRuleResponsePrivate class provides private implementation for CreatePullThroughCacheRuleResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a CreatePullThroughCacheRuleResponsePrivate object with public implementation \a q.
 */
CreatePullThroughCacheRuleResponsePrivate::CreatePullThroughCacheRuleResponsePrivate(
    CreatePullThroughCacheRuleResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr CreatePullThroughCacheRule response element from \a xml.
 */
void CreatePullThroughCacheRuleResponsePrivate::parseCreatePullThroughCacheRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePullThroughCacheRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
