// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrolepermissionsboundaryresponse.h"
#include "putrolepermissionsboundaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::PutRolePermissionsBoundaryResponse
 * \brief The PutRolePermissionsBoundaryResponse class provides an interace for Iam PutRolePermissionsBoundary responses.
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
 * \sa IamClient::putRolePermissionsBoundary
 */

/*!
 * Constructs a PutRolePermissionsBoundaryResponse object for \a reply to \a request, with parent \a parent.
 */
PutRolePermissionsBoundaryResponse::PutRolePermissionsBoundaryResponse(
        const PutRolePermissionsBoundaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new PutRolePermissionsBoundaryResponsePrivate(this), parent)
{
    setRequest(new PutRolePermissionsBoundaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRolePermissionsBoundaryRequest * PutRolePermissionsBoundaryResponse::request() const
{
    Q_D(const PutRolePermissionsBoundaryResponse);
    return static_cast<const PutRolePermissionsBoundaryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam PutRolePermissionsBoundary \a response.
 */
void PutRolePermissionsBoundaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRolePermissionsBoundaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::PutRolePermissionsBoundaryResponsePrivate
 * \brief The PutRolePermissionsBoundaryResponsePrivate class provides private implementation for PutRolePermissionsBoundaryResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a PutRolePermissionsBoundaryResponsePrivate object with public implementation \a q.
 */
PutRolePermissionsBoundaryResponsePrivate::PutRolePermissionsBoundaryResponsePrivate(
    PutRolePermissionsBoundaryResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam PutRolePermissionsBoundary response element from \a xml.
 */
void PutRolePermissionsBoundaryResponsePrivate::parsePutRolePermissionsBoundaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRolePermissionsBoundaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
