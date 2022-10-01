// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setrepositorypolicyresponse.h"
#include "setrepositorypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::SetRepositoryPolicyResponse
 * \brief The SetRepositoryPolicyResponse class provides an interace for EcrPublic SetRepositoryPolicy responses.
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
 * \sa EcrPublicClient::setRepositoryPolicy
 */

/*!
 * Constructs a SetRepositoryPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
SetRepositoryPolicyResponse::SetRepositoryPolicyResponse(
        const SetRepositoryPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrPublicResponse(new SetRepositoryPolicyResponsePrivate(this), parent)
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
 * Parses a successful EcrPublic SetRepositoryPolicy \a response.
 */
void SetRepositoryPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetRepositoryPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EcrPublic::SetRepositoryPolicyResponsePrivate
 * \brief The SetRepositoryPolicyResponsePrivate class provides private implementation for SetRepositoryPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a SetRepositoryPolicyResponsePrivate object with public implementation \a q.
 */
SetRepositoryPolicyResponsePrivate::SetRepositoryPolicyResponsePrivate(
    SetRepositoryPolicyResponse * const q) : EcrPublicResponsePrivate(q)
{

}

/*!
 * Parses a EcrPublic SetRepositoryPolicy response element from \a xml.
 */
void SetRepositoryPolicyResponsePrivate::parseSetRepositoryPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetRepositoryPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EcrPublic
} // namespace QtAws
