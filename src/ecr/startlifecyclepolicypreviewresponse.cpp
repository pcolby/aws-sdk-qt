// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startlifecyclepolicypreviewresponse.h"
#include "startlifecyclepolicypreviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::StartLifecyclePolicyPreviewResponse
 * \brief The StartLifecyclePolicyPreviewResponse class provides an interace for Ecr StartLifecyclePolicyPreview responses.
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
 * \sa EcrClient::startLifecyclePolicyPreview
 */

/*!
 * Constructs a StartLifecyclePolicyPreviewResponse object for \a reply to \a request, with parent \a parent.
 */
StartLifecyclePolicyPreviewResponse::StartLifecyclePolicyPreviewResponse(
        const StartLifecyclePolicyPreviewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new StartLifecyclePolicyPreviewResponsePrivate(this), parent)
{
    setRequest(new StartLifecyclePolicyPreviewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartLifecyclePolicyPreviewRequest * StartLifecyclePolicyPreviewResponse::request() const
{
    Q_D(const StartLifecyclePolicyPreviewResponse);
    return static_cast<const StartLifecyclePolicyPreviewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr StartLifecyclePolicyPreview \a response.
 */
void StartLifecyclePolicyPreviewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartLifecyclePolicyPreviewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::StartLifecyclePolicyPreviewResponsePrivate
 * \brief The StartLifecyclePolicyPreviewResponsePrivate class provides private implementation for StartLifecyclePolicyPreviewResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a StartLifecyclePolicyPreviewResponsePrivate object with public implementation \a q.
 */
StartLifecyclePolicyPreviewResponsePrivate::StartLifecyclePolicyPreviewResponsePrivate(
    StartLifecyclePolicyPreviewResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr StartLifecyclePolicyPreview response element from \a xml.
 */
void StartLifecyclePolicyPreviewResponsePrivate::parseStartLifecyclePolicyPreviewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartLifecyclePolicyPreviewResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
