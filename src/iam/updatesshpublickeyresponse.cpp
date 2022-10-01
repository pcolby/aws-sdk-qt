// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesshpublickeyresponse.h"
#include "updatesshpublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateSSHPublicKeyResponse
 * \brief The UpdateSSHPublicKeyResponse class provides an interace for Iam UpdateSSHPublicKey responses.
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
 * \sa IamClient::updateSSHPublicKey
 */

/*!
 * Constructs a UpdateSSHPublicKeyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSSHPublicKeyResponse::UpdateSSHPublicKeyResponse(
        const UpdateSSHPublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UpdateSSHPublicKeyResponsePrivate(this), parent)
{
    setRequest(new UpdateSSHPublicKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSSHPublicKeyRequest * UpdateSSHPublicKeyResponse::request() const
{
    Q_D(const UpdateSSHPublicKeyResponse);
    return static_cast<const UpdateSSHPublicKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam UpdateSSHPublicKey \a response.
 */
void UpdateSSHPublicKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSSHPublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::UpdateSSHPublicKeyResponsePrivate
 * \brief The UpdateSSHPublicKeyResponsePrivate class provides private implementation for UpdateSSHPublicKeyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateSSHPublicKeyResponsePrivate object with public implementation \a q.
 */
UpdateSSHPublicKeyResponsePrivate::UpdateSSHPublicKeyResponsePrivate(
    UpdateSSHPublicKeyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam UpdateSSHPublicKey response element from \a xml.
 */
void UpdateSSHPublicKeyResponsePrivate::parseUpdateSSHPublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSSHPublicKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
