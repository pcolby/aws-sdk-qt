/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getauthorizationtokenresponse.h"
#include "getauthorizationtokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::GetAuthorizationTokenResponse
 * \brief The GetAuthorizationTokenResponse class provides an interace for ECR GetAuthorizationToken responses.
 *
 * \inmodule QtAwsECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
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
 * Parses a successful ECR GetAuthorizationToken \a response.
 */
void GetAuthorizationTokenResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAuthorizationTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ECR::GetAuthorizationTokenResponsePrivate
 * \brief The GetAuthorizationTokenResponsePrivate class provides private implementation for GetAuthorizationTokenResponse.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a GetAuthorizationTokenResponsePrivate object with public implementation \a q.
 */
GetAuthorizationTokenResponsePrivate::GetAuthorizationTokenResponsePrivate(
    GetAuthorizationTokenResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a ECR GetAuthorizationToken response element from \a xml.
 */
void GetAuthorizationTokenResponsePrivate::parseGetAuthorizationTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAuthorizationTokenResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
