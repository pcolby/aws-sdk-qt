// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrolecredentialsresponse.h"
#include "getrolecredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sso {

/*!
 * \class QtAws::Sso::GetRoleCredentialsResponse
 * \brief The GetRoleCredentialsResponse class provides an interace for Sso GetRoleCredentials responses.
 *
 * \inmodule QtAwsSso
 *
 *  AWS IAM Identity Center (successor to AWS Single Sign-On) Portal is a web service that makes it easy for you to assign
 *  user access to IAM Identity Center resources such as the AWS access portal. Users can get AWS account applications and
 *  roles assigned to them and get federated into the
 * 
 *  application> <note>
 * 
 *  Although AWS Single Sign-On was renamed, the <code>sso</code> and <code>identitystore</code> API namespaces will
 *  continue to retain their original name for backward compatibility purposes. For more information, see <a
 *  href="https://docs.aws.amazon.com/singlesignon/latest/userguide/what-is.html#renamed">IAM Identity Center
 * 
 *  rename</a>> </note>
 * 
 *  This reference guide describes the IAM Identity Center Portal operations that you can call programatically and includes
 *  detailed information on data types and
 * 
 *  errors> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms, such as
 *  Java, Ruby, .Net, iOS, or Android. The SDKs provide a convenient way to create programmatic access to IAM Identity
 *  Center and other AWS services. For more information about the AWS SDKs, including how to download and install them, see
 *  <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
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
    Q_D(const GetRoleCredentialsResponse);
    return static_cast<const GetRoleCredentialsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sso GetRoleCredentials \a response.
 */
void GetRoleCredentialsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRoleCredentialsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sso::GetRoleCredentialsResponsePrivate
 * \brief The GetRoleCredentialsResponsePrivate class provides private implementation for GetRoleCredentialsResponse.
 * \internal
 *
 * \inmodule QtAwsSso
 */

/*!
 * Constructs a GetRoleCredentialsResponsePrivate object with public implementation \a q.
 */
GetRoleCredentialsResponsePrivate::GetRoleCredentialsResponsePrivate(
    GetRoleCredentialsResponse * const q) : SsoResponsePrivate(q)
{

}

/*!
 * Parses a Sso GetRoleCredentials response element from \a xml.
 */
void GetRoleCredentialsResponsePrivate::parseGetRoleCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRoleCredentialsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sso
} // namespace QtAws
