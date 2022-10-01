// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountpasswordpolicyresponse.h"
#include "getaccountpasswordpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetAccountPasswordPolicyResponse
 * \brief The GetAccountPasswordPolicyResponse class provides an interace for Iam GetAccountPasswordPolicy responses.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::getAccountPasswordPolicy
 */

/*!
 * Constructs a GetAccountPasswordPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccountPasswordPolicyResponse::GetAccountPasswordPolicyResponse(
        const GetAccountPasswordPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetAccountPasswordPolicyResponsePrivate(this), parent)
{
    setRequest(new GetAccountPasswordPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccountPasswordPolicyRequest * GetAccountPasswordPolicyResponse::request() const
{
    Q_D(const GetAccountPasswordPolicyResponse);
    return static_cast<const GetAccountPasswordPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetAccountPasswordPolicy \a response.
 */
void GetAccountPasswordPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccountPasswordPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetAccountPasswordPolicyResponsePrivate
 * \brief The GetAccountPasswordPolicyResponsePrivate class provides private implementation for GetAccountPasswordPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetAccountPasswordPolicyResponsePrivate object with public implementation \a q.
 */
GetAccountPasswordPolicyResponsePrivate::GetAccountPasswordPolicyResponsePrivate(
    GetAccountPasswordPolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetAccountPasswordPolicy response element from \a xml.
 */
void GetAccountPasswordPolicyResponsePrivate::parseGetAccountPasswordPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountPasswordPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
