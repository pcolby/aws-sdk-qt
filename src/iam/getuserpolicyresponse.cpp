// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuserpolicyresponse.h"
#include "getuserpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetUserPolicyResponse
 * \brief The GetUserPolicyResponse class provides an interace for Iam GetUserPolicy responses.
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
 * \sa IamClient::getUserPolicy
 */

/*!
 * Constructs a GetUserPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetUserPolicyResponse::GetUserPolicyResponse(
        const GetUserPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetUserPolicyResponsePrivate(this), parent)
{
    setRequest(new GetUserPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUserPolicyRequest * GetUserPolicyResponse::request() const
{
    Q_D(const GetUserPolicyResponse);
    return static_cast<const GetUserPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetUserPolicy \a response.
 */
void GetUserPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUserPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetUserPolicyResponsePrivate
 * \brief The GetUserPolicyResponsePrivate class provides private implementation for GetUserPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetUserPolicyResponsePrivate object with public implementation \a q.
 */
GetUserPolicyResponsePrivate::GetUserPolicyResponsePrivate(
    GetUserPolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetUserPolicy response element from \a xml.
 */
void GetUserPolicyResponsePrivate::parseGetUserPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
