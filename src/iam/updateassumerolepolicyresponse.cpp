// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateassumerolepolicyresponse.h"
#include "updateassumerolepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateAssumeRolePolicyResponse
 * \brief The UpdateAssumeRolePolicyResponse class provides an interace for Iam UpdateAssumeRolePolicy responses.
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
 * \sa IamClient::updateAssumeRolePolicy
 */

/*!
 * Constructs a UpdateAssumeRolePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAssumeRolePolicyResponse::UpdateAssumeRolePolicyResponse(
        const UpdateAssumeRolePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UpdateAssumeRolePolicyResponsePrivate(this), parent)
{
    setRequest(new UpdateAssumeRolePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAssumeRolePolicyRequest * UpdateAssumeRolePolicyResponse::request() const
{
    Q_D(const UpdateAssumeRolePolicyResponse);
    return static_cast<const UpdateAssumeRolePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam UpdateAssumeRolePolicy \a response.
 */
void UpdateAssumeRolePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAssumeRolePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::UpdateAssumeRolePolicyResponsePrivate
 * \brief The UpdateAssumeRolePolicyResponsePrivate class provides private implementation for UpdateAssumeRolePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateAssumeRolePolicyResponsePrivate object with public implementation \a q.
 */
UpdateAssumeRolePolicyResponsePrivate::UpdateAssumeRolePolicyResponsePrivate(
    UpdateAssumeRolePolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam UpdateAssumeRolePolicy response element from \a xml.
 */
void UpdateAssumeRolePolicyResponsePrivate::parseUpdateAssumeRolePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAssumeRolePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
