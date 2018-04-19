/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "requestcertificateresponse.h"
#include "requestcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::RequestCertificateResponse
 * \brief The RequestCertificateResponse class provides an interace for ACM RequestCertificate responses.
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
 *  about using ACM, see the <a href="http://docs.aws.amazon.com/http:/docs.aws.amazon.comacm/latest/userguide/"> <i>AWS
 *  Certificate Manager User Guide</i>
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
    : ACMResponse(new RequestCertificateResponsePrivate(this), parent)
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
 * Parses a successful ACM RequestCertificate \a response.
 */
void RequestCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(RequestCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ACM::RequestCertificateResponsePrivate
 * \brief The RequestCertificateResponsePrivate class provides private implementation for RequestCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a RequestCertificateResponsePrivate object with public implementation \a q.
 */
RequestCertificateResponsePrivate::RequestCertificateResponsePrivate(
    RequestCertificateResponse * const q) : ACMResponsePrivate(q)
{

}

/*!
 * Parses a ACM RequestCertificate response element from \a xml.
 */
void RequestCertificateResponsePrivate::parseRequestCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RequestCertificateResponse"));
    /// @todo
}

} // namespace ACM
} // namespace QtAws
