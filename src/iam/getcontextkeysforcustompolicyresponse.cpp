// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontextkeysforcustompolicyresponse.h"
#include "getcontextkeysforcustompolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetContextKeysForCustomPolicyResponse
 * \brief The GetContextKeysForCustomPolicyResponse class provides an interace for Iam GetContextKeysForCustomPolicy responses.
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
 * \sa IamClient::getContextKeysForCustomPolicy
 */

/*!
 * Constructs a GetContextKeysForCustomPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetContextKeysForCustomPolicyResponse::GetContextKeysForCustomPolicyResponse(
        const GetContextKeysForCustomPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetContextKeysForCustomPolicyResponsePrivate(this), parent)
{
    setRequest(new GetContextKeysForCustomPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContextKeysForCustomPolicyRequest * GetContextKeysForCustomPolicyResponse::request() const
{
    Q_D(const GetContextKeysForCustomPolicyResponse);
    return static_cast<const GetContextKeysForCustomPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetContextKeysForCustomPolicy \a response.
 */
void GetContextKeysForCustomPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContextKeysForCustomPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetContextKeysForCustomPolicyResponsePrivate
 * \brief The GetContextKeysForCustomPolicyResponsePrivate class provides private implementation for GetContextKeysForCustomPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetContextKeysForCustomPolicyResponsePrivate object with public implementation \a q.
 */
GetContextKeysForCustomPolicyResponsePrivate::GetContextKeysForCustomPolicyResponsePrivate(
    GetContextKeysForCustomPolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetContextKeysForCustomPolicy response element from \a xml.
 */
void GetContextKeysForCustomPolicyResponsePrivate::parseGetContextKeysForCustomPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContextKeysForCustomPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
