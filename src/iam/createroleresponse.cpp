// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createroleresponse.h"
#include "createroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateRoleResponse
 * \brief The CreateRoleResponse class provides an interace for Iam CreateRole responses.
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
 * \sa IamClient::createRole
 */

/*!
 * Constructs a CreateRoleResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRoleResponse::CreateRoleResponse(
        const CreateRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new CreateRoleResponsePrivate(this), parent)
{
    setRequest(new CreateRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRoleRequest * CreateRoleResponse::request() const
{
    Q_D(const CreateRoleResponse);
    return static_cast<const CreateRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam CreateRole \a response.
 */
void CreateRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::CreateRoleResponsePrivate
 * \brief The CreateRoleResponsePrivate class provides private implementation for CreateRoleResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateRoleResponsePrivate object with public implementation \a q.
 */
CreateRoleResponsePrivate::CreateRoleResponsePrivate(
    CreateRoleResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam CreateRole response element from \a xml.
 */
void CreateRoleResponsePrivate::parseCreateRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
