// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsshpublickeyresponse.h"
#include "getsshpublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetSSHPublicKeyResponse
 * \brief The GetSSHPublicKeyResponse class provides an interace for Iam GetSSHPublicKey responses.
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
 * \sa IamClient::getSSHPublicKey
 */

/*!
 * Constructs a GetSSHPublicKeyResponse object for \a reply to \a request, with parent \a parent.
 */
GetSSHPublicKeyResponse::GetSSHPublicKeyResponse(
        const GetSSHPublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetSSHPublicKeyResponsePrivate(this), parent)
{
    setRequest(new GetSSHPublicKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSSHPublicKeyRequest * GetSSHPublicKeyResponse::request() const
{
    Q_D(const GetSSHPublicKeyResponse);
    return static_cast<const GetSSHPublicKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetSSHPublicKey \a response.
 */
void GetSSHPublicKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSSHPublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetSSHPublicKeyResponsePrivate
 * \brief The GetSSHPublicKeyResponsePrivate class provides private implementation for GetSSHPublicKeyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetSSHPublicKeyResponsePrivate object with public implementation \a q.
 */
GetSSHPublicKeyResponsePrivate::GetSSHPublicKeyResponsePrivate(
    GetSSHPublicKeyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetSSHPublicKey response element from \a xml.
 */
void GetSSHPublicKeyResponsePrivate::parseGetSSHPublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSSHPublicKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
