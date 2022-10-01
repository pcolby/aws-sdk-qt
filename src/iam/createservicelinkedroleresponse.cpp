// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createservicelinkedroleresponse.h"
#include "createservicelinkedroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateServiceLinkedRoleResponse
 * \brief The CreateServiceLinkedRoleResponse class provides an interace for Iam CreateServiceLinkedRole responses.
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
 * \sa IamClient::createServiceLinkedRole
 */

/*!
 * Constructs a CreateServiceLinkedRoleResponse object for \a reply to \a request, with parent \a parent.
 */
CreateServiceLinkedRoleResponse::CreateServiceLinkedRoleResponse(
        const CreateServiceLinkedRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new CreateServiceLinkedRoleResponsePrivate(this), parent)
{
    setRequest(new CreateServiceLinkedRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateServiceLinkedRoleRequest * CreateServiceLinkedRoleResponse::request() const
{
    Q_D(const CreateServiceLinkedRoleResponse);
    return static_cast<const CreateServiceLinkedRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam CreateServiceLinkedRole \a response.
 */
void CreateServiceLinkedRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateServiceLinkedRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::CreateServiceLinkedRoleResponsePrivate
 * \brief The CreateServiceLinkedRoleResponsePrivate class provides private implementation for CreateServiceLinkedRoleResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateServiceLinkedRoleResponsePrivate object with public implementation \a q.
 */
CreateServiceLinkedRoleResponsePrivate::CreateServiceLinkedRoleResponsePrivate(
    CreateServiceLinkedRoleResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam CreateServiceLinkedRole response element from \a xml.
 */
void CreateServiceLinkedRoleResponsePrivate::parseCreateServiceLinkedRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateServiceLinkedRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
