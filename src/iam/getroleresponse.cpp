// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getroleresponse.h"
#include "getroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetRoleResponse
 * \brief The GetRoleResponse class provides an interace for Iam GetRole responses.
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
 * \sa IamClient::getRole
 */

/*!
 * Constructs a GetRoleResponse object for \a reply to \a request, with parent \a parent.
 */
GetRoleResponse::GetRoleResponse(
        const GetRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetRoleResponsePrivate(this), parent)
{
    setRequest(new GetRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRoleRequest * GetRoleResponse::request() const
{
    Q_D(const GetRoleResponse);
    return static_cast<const GetRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetRole \a response.
 */
void GetRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetRoleResponsePrivate
 * \brief The GetRoleResponsePrivate class provides private implementation for GetRoleResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetRoleResponsePrivate object with public implementation \a q.
 */
GetRoleResponsePrivate::GetRoleResponsePrivate(
    GetRoleResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetRole response element from \a xml.
 */
void GetRoleResponsePrivate::parseGetRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
