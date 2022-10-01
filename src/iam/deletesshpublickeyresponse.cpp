// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesshpublickeyresponse.h"
#include "deletesshpublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteSSHPublicKeyResponse
 * \brief The DeleteSSHPublicKeyResponse class provides an interace for Iam DeleteSSHPublicKey responses.
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
 * \sa IamClient::deleteSSHPublicKey
 */

/*!
 * Constructs a DeleteSSHPublicKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSSHPublicKeyResponse::DeleteSSHPublicKeyResponse(
        const DeleteSSHPublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteSSHPublicKeyResponsePrivate(this), parent)
{
    setRequest(new DeleteSSHPublicKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSSHPublicKeyRequest * DeleteSSHPublicKeyResponse::request() const
{
    Q_D(const DeleteSSHPublicKeyResponse);
    return static_cast<const DeleteSSHPublicKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeleteSSHPublicKey \a response.
 */
void DeleteSSHPublicKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSSHPublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeleteSSHPublicKeyResponsePrivate
 * \brief The DeleteSSHPublicKeyResponsePrivate class provides private implementation for DeleteSSHPublicKeyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteSSHPublicKeyResponsePrivate object with public implementation \a q.
 */
DeleteSSHPublicKeyResponsePrivate::DeleteSSHPublicKeyResponsePrivate(
    DeleteSSHPublicKeyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeleteSSHPublicKey response element from \a xml.
 */
void DeleteSSHPublicKeyResponsePrivate::parseDeleteSSHPublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSSHPublicKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
