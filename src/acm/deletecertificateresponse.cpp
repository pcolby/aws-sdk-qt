// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecertificateresponse.h"
#include "deletecertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::DeleteCertificateResponse
 * \brief The DeleteCertificateResponse class provides an interace for Acm DeleteCertificate responses.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::deleteCertificate
 */

/*!
 * Constructs a DeleteCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCertificateResponse::DeleteCertificateResponse(
        const DeleteCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new DeleteCertificateResponsePrivate(this), parent)
{
    setRequest(new DeleteCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCertificateRequest * DeleteCertificateResponse::request() const
{
    Q_D(const DeleteCertificateResponse);
    return static_cast<const DeleteCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Acm DeleteCertificate \a response.
 */
void DeleteCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Acm::DeleteCertificateResponsePrivate
 * \brief The DeleteCertificateResponsePrivate class provides private implementation for DeleteCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a DeleteCertificateResponsePrivate object with public implementation \a q.
 */
DeleteCertificateResponsePrivate::DeleteCertificateResponsePrivate(
    DeleteCertificateResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a Acm DeleteCertificate response element from \a xml.
 */
void DeleteCertificateResponsePrivate::parseDeleteCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Acm
} // namespace QtAws
