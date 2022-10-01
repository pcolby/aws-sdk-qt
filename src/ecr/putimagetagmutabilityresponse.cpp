// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putimagetagmutabilityresponse.h"
#include "putimagetagmutabilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::PutImageTagMutabilityResponse
 * \brief The PutImageTagMutabilityResponse class provides an interace for Ecr PutImageTagMutability responses.
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
 * \sa EcrClient::putImageTagMutability
 */

/*!
 * Constructs a PutImageTagMutabilityResponse object for \a reply to \a request, with parent \a parent.
 */
PutImageTagMutabilityResponse::PutImageTagMutabilityResponse(
        const PutImageTagMutabilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new PutImageTagMutabilityResponsePrivate(this), parent)
{
    setRequest(new PutImageTagMutabilityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutImageTagMutabilityRequest * PutImageTagMutabilityResponse::request() const
{
    Q_D(const PutImageTagMutabilityResponse);
    return static_cast<const PutImageTagMutabilityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr PutImageTagMutability \a response.
 */
void PutImageTagMutabilityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutImageTagMutabilityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::PutImageTagMutabilityResponsePrivate
 * \brief The PutImageTagMutabilityResponsePrivate class provides private implementation for PutImageTagMutabilityResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a PutImageTagMutabilityResponsePrivate object with public implementation \a q.
 */
PutImageTagMutabilityResponsePrivate::PutImageTagMutabilityResponsePrivate(
    PutImageTagMutabilityResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr PutImageTagMutability response element from \a xml.
 */
void PutImageTagMutabilityResponsePrivate::parsePutImageTagMutabilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutImageTagMutabilityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
