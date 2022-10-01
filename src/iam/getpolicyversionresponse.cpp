// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpolicyversionresponse.h"
#include "getpolicyversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetPolicyVersionResponse
 * \brief The GetPolicyVersionResponse class provides an interace for Iam GetPolicyVersion responses.
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
 * \sa IamClient::getPolicyVersion
 */

/*!
 * Constructs a GetPolicyVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetPolicyVersionResponse::GetPolicyVersionResponse(
        const GetPolicyVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetPolicyVersionResponsePrivate(this), parent)
{
    setRequest(new GetPolicyVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPolicyVersionRequest * GetPolicyVersionResponse::request() const
{
    Q_D(const GetPolicyVersionResponse);
    return static_cast<const GetPolicyVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetPolicyVersion \a response.
 */
void GetPolicyVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPolicyVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetPolicyVersionResponsePrivate
 * \brief The GetPolicyVersionResponsePrivate class provides private implementation for GetPolicyVersionResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetPolicyVersionResponsePrivate object with public implementation \a q.
 */
GetPolicyVersionResponsePrivate::GetPolicyVersionResponsePrivate(
    GetPolicyVersionResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetPolicyVersion response element from \a xml.
 */
void GetPolicyVersionResponsePrivate::parseGetPolicyVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPolicyVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
