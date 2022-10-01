// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrolepolicyresponse.h"
#include "getrolepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetRolePolicyResponse
 * \brief The GetRolePolicyResponse class provides an interace for Iam GetRolePolicy responses.
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
 * \sa IamClient::getRolePolicy
 */

/*!
 * Constructs a GetRolePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetRolePolicyResponse::GetRolePolicyResponse(
        const GetRolePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetRolePolicyResponsePrivate(this), parent)
{
    setRequest(new GetRolePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRolePolicyRequest * GetRolePolicyResponse::request() const
{
    Q_D(const GetRolePolicyResponse);
    return static_cast<const GetRolePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetRolePolicy \a response.
 */
void GetRolePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRolePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetRolePolicyResponsePrivate
 * \brief The GetRolePolicyResponsePrivate class provides private implementation for GetRolePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetRolePolicyResponsePrivate object with public implementation \a q.
 */
GetRolePolicyResponsePrivate::GetRolePolicyResponsePrivate(
    GetRolePolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetRolePolicy response element from \a xml.
 */
void GetRolePolicyResponsePrivate::parseGetRolePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRolePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
