// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getservercertificateresponse.h"
#include "getservercertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetServerCertificateResponse
 * \brief The GetServerCertificateResponse class provides an interace for Iam GetServerCertificate responses.
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
 * \sa IamClient::getServerCertificate
 */

/*!
 * Constructs a GetServerCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
GetServerCertificateResponse::GetServerCertificateResponse(
        const GetServerCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetServerCertificateResponsePrivate(this), parent)
{
    setRequest(new GetServerCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetServerCertificateRequest * GetServerCertificateResponse::request() const
{
    Q_D(const GetServerCertificateResponse);
    return static_cast<const GetServerCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetServerCertificate \a response.
 */
void GetServerCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetServerCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetServerCertificateResponsePrivate
 * \brief The GetServerCertificateResponsePrivate class provides private implementation for GetServerCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetServerCertificateResponsePrivate object with public implementation \a q.
 */
GetServerCertificateResponsePrivate::GetServerCertificateResponsePrivate(
    GetServerCertificateResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetServerCertificate response element from \a xml.
 */
void GetServerCertificateResponsePrivate::parseGetServerCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServerCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
