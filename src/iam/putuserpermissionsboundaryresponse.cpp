// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putuserpermissionsboundaryresponse.h"
#include "putuserpermissionsboundaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::PutUserPermissionsBoundaryResponse
 * \brief The PutUserPermissionsBoundaryResponse class provides an interace for Iam PutUserPermissionsBoundary responses.
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
 * \sa IamClient::putUserPermissionsBoundary
 */

/*!
 * Constructs a PutUserPermissionsBoundaryResponse object for \a reply to \a request, with parent \a parent.
 */
PutUserPermissionsBoundaryResponse::PutUserPermissionsBoundaryResponse(
        const PutUserPermissionsBoundaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new PutUserPermissionsBoundaryResponsePrivate(this), parent)
{
    setRequest(new PutUserPermissionsBoundaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutUserPermissionsBoundaryRequest * PutUserPermissionsBoundaryResponse::request() const
{
    Q_D(const PutUserPermissionsBoundaryResponse);
    return static_cast<const PutUserPermissionsBoundaryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam PutUserPermissionsBoundary \a response.
 */
void PutUserPermissionsBoundaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutUserPermissionsBoundaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::PutUserPermissionsBoundaryResponsePrivate
 * \brief The PutUserPermissionsBoundaryResponsePrivate class provides private implementation for PutUserPermissionsBoundaryResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a PutUserPermissionsBoundaryResponsePrivate object with public implementation \a q.
 */
PutUserPermissionsBoundaryResponsePrivate::PutUserPermissionsBoundaryResponsePrivate(
    PutUserPermissionsBoundaryResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam PutUserPermissionsBoundary response element from \a xml.
 */
void PutUserPermissionsBoundaryResponsePrivate::parsePutUserPermissionsBoundaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutUserPermissionsBoundaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
