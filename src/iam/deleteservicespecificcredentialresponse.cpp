// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteservicespecificcredentialresponse.h"
#include "deleteservicespecificcredentialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteServiceSpecificCredentialResponse
 * \brief The DeleteServiceSpecificCredentialResponse class provides an interace for Iam DeleteServiceSpecificCredential responses.
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
 * \sa IamClient::deleteServiceSpecificCredential
 */

/*!
 * Constructs a DeleteServiceSpecificCredentialResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteServiceSpecificCredentialResponse::DeleteServiceSpecificCredentialResponse(
        const DeleteServiceSpecificCredentialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteServiceSpecificCredentialResponsePrivate(this), parent)
{
    setRequest(new DeleteServiceSpecificCredentialRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteServiceSpecificCredentialRequest * DeleteServiceSpecificCredentialResponse::request() const
{
    Q_D(const DeleteServiceSpecificCredentialResponse);
    return static_cast<const DeleteServiceSpecificCredentialRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeleteServiceSpecificCredential \a response.
 */
void DeleteServiceSpecificCredentialResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteServiceSpecificCredentialResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeleteServiceSpecificCredentialResponsePrivate
 * \brief The DeleteServiceSpecificCredentialResponsePrivate class provides private implementation for DeleteServiceSpecificCredentialResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteServiceSpecificCredentialResponsePrivate object with public implementation \a q.
 */
DeleteServiceSpecificCredentialResponsePrivate::DeleteServiceSpecificCredentialResponsePrivate(
    DeleteServiceSpecificCredentialResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeleteServiceSpecificCredential response element from \a xml.
 */
void DeleteServiceSpecificCredentialResponsePrivate::parseDeleteServiceSpecificCredentialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteServiceSpecificCredentialResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
