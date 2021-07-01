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

#include "getcertificateauthoritycsrresponse.h"
#include "getcertificateauthoritycsrresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::GetCertificateAuthorityCsrResponse
 * \brief The GetCertificateAuthorityCsrResponse class provides an interace for ACMPCA GetCertificateAuthorityCsr responses.
 *
 * \inmodule QtAwsACMPCA
 *
 *  This is the <i>ACM Private CA API Reference</i>. It provides descriptions, syntax, and usage examples for each of the
 *  actions and data types involved in creating and managing private certificate authorities (CA) for your
 * 
 *  organization>
 * 
 *  The documentation for each action shows the Query API request parameters and the XML response. Alternatively, you can
 *  use one of the AWS SDKs to access an API that's tailored to the programming language or platform that you're using. For
 *  more information, see <a href="https://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>> <note>
 * 
 *  Each ACM Private CA API action has a quota that determines the number of times the action can be called per second. For
 *  more information, see <a href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaLimits.html#PcaLimits-api">API
 *  Rate Quotas in ACM Private CA</a> in the ACM Private CA user
 *
 * \sa AcmpcaClient::getCertificateAuthorityCsr
 */

/*!
 * Constructs a GetCertificateAuthorityCsrResponse object for \a reply to \a request, with parent \a parent.
 */
GetCertificateAuthorityCsrResponse::GetCertificateAuthorityCsrResponse(
        const GetCertificateAuthorityCsrRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmpcaResponse(new GetCertificateAuthorityCsrResponsePrivate(this), parent)
{
    setRequest(new GetCertificateAuthorityCsrRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCertificateAuthorityCsrRequest * GetCertificateAuthorityCsrResponse::request() const
{
    Q_D(const GetCertificateAuthorityCsrResponse);
    return static_cast<const GetCertificateAuthorityCsrRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ACMPCA GetCertificateAuthorityCsr \a response.
 */
void GetCertificateAuthorityCsrResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCertificateAuthorityCsrResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ACMPCA::GetCertificateAuthorityCsrResponsePrivate
 * \brief The GetCertificateAuthorityCsrResponsePrivate class provides private implementation for GetCertificateAuthorityCsrResponse.
 * \internal
 *
 * \inmodule QtAwsACMPCA
 */

/*!
 * Constructs a GetCertificateAuthorityCsrResponsePrivate object with public implementation \a q.
 */
GetCertificateAuthorityCsrResponsePrivate::GetCertificateAuthorityCsrResponsePrivate(
    GetCertificateAuthorityCsrResponse * const q) : AcmpcaResponsePrivate(q)
{

}

/*!
 * Parses a ACMPCA GetCertificateAuthorityCsr response element from \a xml.
 */
void GetCertificateAuthorityCsrResponsePrivate::parseGetCertificateAuthorityCsrResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCertificateAuthorityCsrResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ACMPCA
} // namespace QtAws
