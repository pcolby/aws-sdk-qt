// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "logoutresponse.h"
#include "logoutresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sso {

/*!
 * \class QtAws::Sso::LogoutResponse
 * \brief The LogoutResponse class provides an interace for Sso Logout responses.
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
 * \sa SsoClient::logout
 */

/*!
 * Constructs a LogoutResponse object for \a reply to \a request, with parent \a parent.
 */
LogoutResponse::LogoutResponse(
        const LogoutRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsoResponse(new LogoutResponsePrivate(this), parent)
{
    setRequest(new LogoutRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const LogoutRequest * LogoutResponse::request() const
{
    Q_D(const LogoutResponse);
    return static_cast<const LogoutRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sso Logout \a response.
 */
void LogoutResponse::parseSuccess(QIODevice &response)
{
    //Q_D(LogoutResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sso::LogoutResponsePrivate
 * \brief The LogoutResponsePrivate class provides private implementation for LogoutResponse.
 * \internal
 *
 * \inmodule QtAwsSso
 */

/*!
 * Constructs a LogoutResponsePrivate object with public implementation \a q.
 */
LogoutResponsePrivate::LogoutResponsePrivate(
    LogoutResponse * const q) : SsoResponsePrivate(q)
{

}

/*!
 * Parses a Sso Logout response element from \a xml.
 */
void LogoutResponsePrivate::parseLogoutResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("LogoutResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sso
} // namespace QtAws
