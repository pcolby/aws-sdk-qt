// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgrouppolicyresponse.h"
#include "getgrouppolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetGroupPolicyResponse
 * \brief The GetGroupPolicyResponse class provides an interace for Iam GetGroupPolicy responses.
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
 * \sa IamClient::getGroupPolicy
 */

/*!
 * Constructs a GetGroupPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetGroupPolicyResponse::GetGroupPolicyResponse(
        const GetGroupPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetGroupPolicyResponsePrivate(this), parent)
{
    setRequest(new GetGroupPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGroupPolicyRequest * GetGroupPolicyResponse::request() const
{
    Q_D(const GetGroupPolicyResponse);
    return static_cast<const GetGroupPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetGroupPolicy \a response.
 */
void GetGroupPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGroupPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetGroupPolicyResponsePrivate
 * \brief The GetGroupPolicyResponsePrivate class provides private implementation for GetGroupPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetGroupPolicyResponsePrivate object with public implementation \a q.
 */
GetGroupPolicyResponsePrivate::GetGroupPolicyResponsePrivate(
    GetGroupPolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetGroupPolicy response element from \a xml.
 */
void GetGroupPolicyResponsePrivate::parseGetGroupPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGroupPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
