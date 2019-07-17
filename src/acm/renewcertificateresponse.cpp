/*
    Copyright 2013-2019 Paul Colby

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

#include "renewcertificateresponse.h"
#include "renewcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::RenewCertificateResponse
 * \brief The RenewCertificateResponse class provides an interace for ACM RenewCertificate responses.
 *
 * \inmodule QtAwsACM
 *
 *  <fullname>AWS Certificate Manager</fullname>
 * 
 *  Welcome to the AWS Certificate Manager (ACM) API
 * 
 *  documentation>
 * 
 *  You can use ACM to manage SSL/TLS certificates for your AWS-based websites and applications. For general information
 *  about using ACM, see the <a href="https://docs.aws.amazon.com/acm/latest/userguide/"> <i>AWS Certificate Manager User
 *  Guide</i>
 *
 * \sa AcmClient::renewCertificate
 */

/*!
 * Constructs a RenewCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
RenewCertificateResponse::RenewCertificateResponse(
        const RenewCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new RenewCertificateResponsePrivate(this), parent)
{
    setRequest(new RenewCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RenewCertificateRequest * RenewCertificateResponse::request() const
{
    Q_D(const RenewCertificateResponse);
    return static_cast<const RenewCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ACM RenewCertificate \a response.
 */
void RenewCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RenewCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ACM::RenewCertificateResponsePrivate
 * \brief The RenewCertificateResponsePrivate class provides private implementation for RenewCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a RenewCertificateResponsePrivate object with public implementation \a q.
 */
RenewCertificateResponsePrivate::RenewCertificateResponsePrivate(
    RenewCertificateResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a ACM RenewCertificate response element from \a xml.
 */
void RenewCertificateResponsePrivate::parseRenewCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RenewCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ACM
} // namespace QtAws
