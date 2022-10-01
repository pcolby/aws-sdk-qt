// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getauthorizationtokenresponse.h"
#include "getauthorizationtokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::GetAuthorizationTokenResponse
 * \brief The GetAuthorizationTokenResponse class provides an interace for Ecr GetAuthorizationToken responses.
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
 * \sa EcrClient::getAuthorizationToken
 */

/*!
 * Constructs a GetAuthorizationTokenResponse object for \a reply to \a request, with parent \a parent.
 */
GetAuthorizationTokenResponse::GetAuthorizationTokenResponse(
        const GetAuthorizationTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new GetAuthorizationTokenResponsePrivate(this), parent)
{
    setRequest(new GetAuthorizationTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAuthorizationTokenRequest * GetAuthorizationTokenResponse::request() const
{
    Q_D(const GetAuthorizationTokenResponse);
    return static_cast<const GetAuthorizationTokenRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr GetAuthorizationToken \a response.
 */
void GetAuthorizationTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAuthorizationTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::GetAuthorizationTokenResponsePrivate
 * \brief The GetAuthorizationTokenResponsePrivate class provides private implementation for GetAuthorizationTokenResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a GetAuthorizationTokenResponsePrivate object with public implementation \a q.
 */
GetAuthorizationTokenResponsePrivate::GetAuthorizationTokenResponsePrivate(
    GetAuthorizationTokenResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr GetAuthorizationToken response element from \a xml.
 */
void GetAuthorizationTokenResponsePrivate::parseGetAuthorizationTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAuthorizationTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
