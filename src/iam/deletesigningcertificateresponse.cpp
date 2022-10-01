// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesigningcertificateresponse.h"
#include "deletesigningcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteSigningCertificateResponse
 * \brief The DeleteSigningCertificateResponse class provides an interace for Iam DeleteSigningCertificate responses.
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
 * \sa IamClient::deleteSigningCertificate
 */

/*!
 * Constructs a DeleteSigningCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSigningCertificateResponse::DeleteSigningCertificateResponse(
        const DeleteSigningCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteSigningCertificateResponsePrivate(this), parent)
{
    setRequest(new DeleteSigningCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSigningCertificateRequest * DeleteSigningCertificateResponse::request() const
{
    Q_D(const DeleteSigningCertificateResponse);
    return static_cast<const DeleteSigningCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeleteSigningCertificate \a response.
 */
void DeleteSigningCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSigningCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeleteSigningCertificateResponsePrivate
 * \brief The DeleteSigningCertificateResponsePrivate class provides private implementation for DeleteSigningCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteSigningCertificateResponsePrivate object with public implementation \a q.
 */
DeleteSigningCertificateResponsePrivate::DeleteSigningCertificateResponsePrivate(
    DeleteSigningCertificateResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeleteSigningCertificate response element from \a xml.
 */
void DeleteSigningCertificateResponsePrivate::parseDeleteSigningCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSigningCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
