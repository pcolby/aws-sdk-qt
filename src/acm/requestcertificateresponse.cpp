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

#include "requestcertificateresponse.h"
#include "requestcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::RequestCertificateResponse
 * \brief The RequestCertificateResponse class provides an interace for Acm RequestCertificate responses.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::requestCertificate
 */

/*!
 * Constructs a RequestCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
RequestCertificateResponse::RequestCertificateResponse(
        const RequestCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new RequestCertificateResponsePrivate(this), parent)
{
    setRequest(new RequestCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RequestCertificateRequest * RequestCertificateResponse::request() const
{
    Q_D(const RequestCertificateResponse);
    return static_cast<const RequestCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Acm RequestCertificate \a response.
 */
void RequestCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RequestCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Acm::RequestCertificateResponsePrivate
 * \brief The RequestCertificateResponsePrivate class provides private implementation for RequestCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a RequestCertificateResponsePrivate object with public implementation \a q.
 */
RequestCertificateResponsePrivate::RequestCertificateResponsePrivate(
    RequestCertificateResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a Acm RequestCertificate response element from \a xml.
 */
void RequestCertificateResponsePrivate::parseRequestCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RequestCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Acm
} // namespace QtAws
