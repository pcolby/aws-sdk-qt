/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "exportcertificateresponse.h"
#include "exportcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::ExportCertificateResponse
 * \brief The ExportCertificateResponse class provides an interace for Acm ExportCertificate responses.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::exportCertificate
 */

/*!
 * Constructs a ExportCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
ExportCertificateResponse::ExportCertificateResponse(
        const ExportCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new ExportCertificateResponsePrivate(this), parent)
{
    setRequest(new ExportCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportCertificateRequest * ExportCertificateResponse::request() const
{
    Q_D(const ExportCertificateResponse);
    return static_cast<const ExportCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Acm ExportCertificate \a response.
 */
void ExportCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Acm::ExportCertificateResponsePrivate
 * \brief The ExportCertificateResponsePrivate class provides private implementation for ExportCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a ExportCertificateResponsePrivate object with public implementation \a q.
 */
ExportCertificateResponsePrivate::ExportCertificateResponsePrivate(
    ExportCertificateResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a Acm ExportCertificate response element from \a xml.
 */
void ExportCertificateResponsePrivate::parseExportCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Acm
} // namespace QtAws
