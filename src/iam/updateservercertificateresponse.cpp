// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateservercertificateresponse.h"
#include "updateservercertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateServerCertificateResponse
 * \brief The UpdateServerCertificateResponse class provides an interace for Iam UpdateServerCertificate responses.
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
 * \sa IamClient::updateServerCertificate
 */

/*!
 * Constructs a UpdateServerCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateServerCertificateResponse::UpdateServerCertificateResponse(
        const UpdateServerCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UpdateServerCertificateResponsePrivate(this), parent)
{
    setRequest(new UpdateServerCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateServerCertificateRequest * UpdateServerCertificateResponse::request() const
{
    Q_D(const UpdateServerCertificateResponse);
    return static_cast<const UpdateServerCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam UpdateServerCertificate \a response.
 */
void UpdateServerCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateServerCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::UpdateServerCertificateResponsePrivate
 * \brief The UpdateServerCertificateResponsePrivate class provides private implementation for UpdateServerCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateServerCertificateResponsePrivate object with public implementation \a q.
 */
UpdateServerCertificateResponsePrivate::UpdateServerCertificateResponsePrivate(
    UpdateServerCertificateResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam UpdateServerCertificate response element from \a xml.
 */
void UpdateServerCertificateResponsePrivate::parseUpdateServerCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServerCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
