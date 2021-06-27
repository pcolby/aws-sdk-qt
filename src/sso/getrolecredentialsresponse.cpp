/*
    Copyright 2013-2021 Paul Colby

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

#include "getrolecredentialsresponse.h"
#include "getrolecredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSO {

/*!
 * \class QtAws::SSO::GetRoleCredentialsResponse
 * \brief The GetRoleCredentialsResponse class provides an interace for SSO GetRoleCredentials responses.
 *
 * \inmodule QtAwsSSO
 *
 *  AWS Single Sign-On Portal is a web service that makes it easy for you to assign user access to AWS SSO resources such as
 *  the user portal. Users can get AWS account applications and roles assigned to them and get federated into the
 * 
 *  application>
 * 
 *  For general information about AWS SSO, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html">What is AWS Single Sign-On?</a> in the
 *  <i>AWS SSO User
 * 
 *  Guide</i>>
 * 
 *  This API reference guide describes the AWS SSO Portal operations that you can call programatically and includes detailed
 *  information on data types and
 * 
 *  errors> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms, such as
 *  Java, Ruby, .Net, iOS, or Android. The SDKs provide a convenient way to create programmatic access to AWS SSO and other
 *  AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa SsoClient::getRoleCredentials
 */

/*!
 * Constructs a GetRoleCredentialsResponse object for \a reply to \a request, with parent \a parent.
 */
GetRoleCredentialsResponse::GetRoleCredentialsResponse(
        const GetRoleCredentialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsoResponse(new GetRoleCredentialsResponsePrivate(this), parent)
{
    setRequest(new GetRoleCredentialsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRoleCredentialsRequest * GetRoleCredentialsResponse::request() const
{
    return static_cast<const GetRoleCredentialsRequest *>(SsoResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSO GetRoleCredentials \a response.
 */
void GetRoleCredentialsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRoleCredentialsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSO::GetRoleCredentialsResponsePrivate
 * \brief The GetRoleCredentialsResponsePrivate class provides private implementation for GetRoleCredentialsResponse.
 * \internal
 *
 * \inmodule QtAwsSSO
 */

/*!
 * Constructs a GetRoleCredentialsResponsePrivate object with public implementation \a q.
 */
GetRoleCredentialsResponsePrivate::GetRoleCredentialsResponsePrivate(
    GetRoleCredentialsResponse * const q) : SsoResponsePrivate(q)
{

}

/*!
 * Parses a SSO GetRoleCredentials response element from \a xml.
 */
void GetRoleCredentialsResponsePrivate::parseGetRoleCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRoleCredentialsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSO
} // namespace QtAws
