// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "uploadsshpublickeyresponse.h"
#include "uploadsshpublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UploadSSHPublicKeyResponse
 * \brief The UploadSSHPublicKeyResponse class provides an interace for Iam UploadSSHPublicKey responses.
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
 * \sa IamClient::uploadSSHPublicKey
 */

/*!
 * Constructs a UploadSSHPublicKeyResponse object for \a reply to \a request, with parent \a parent.
 */
UploadSSHPublicKeyResponse::UploadSSHPublicKeyResponse(
        const UploadSSHPublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UploadSSHPublicKeyResponsePrivate(this), parent)
{
    setRequest(new UploadSSHPublicKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UploadSSHPublicKeyRequest * UploadSSHPublicKeyResponse::request() const
{
    Q_D(const UploadSSHPublicKeyResponse);
    return static_cast<const UploadSSHPublicKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam UploadSSHPublicKey \a response.
 */
void UploadSSHPublicKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UploadSSHPublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::UploadSSHPublicKeyResponsePrivate
 * \brief The UploadSSHPublicKeyResponsePrivate class provides private implementation for UploadSSHPublicKeyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UploadSSHPublicKeyResponsePrivate object with public implementation \a q.
 */
UploadSSHPublicKeyResponsePrivate::UploadSSHPublicKeyResponsePrivate(
    UploadSSHPublicKeyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam UploadSSHPublicKey response element from \a xml.
 */
void UploadSSHPublicKeyResponsePrivate::parseUploadSSHPublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadSSHPublicKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
