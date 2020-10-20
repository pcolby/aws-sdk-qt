/*
    Copyright 2013-2020 Paul Colby

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

#include "restorecertificateauthorityresponse.h"
#include "restorecertificateauthorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::RestoreCertificateAuthorityResponse
 * \brief The RestoreCertificateAuthorityResponse class provides an interace for ACMPCA RestoreCertificateAuthority responses.
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
 *  Each ACM Private CA API action has a throttling limit which determines the number of times the action can be called per
 *  second. For more information, see <a
 *  href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaLimits.html#PcaLimits-api">API Rate Limits in ACM Private
 *  CA</a> in the ACM Private CA user
 *
 * \sa AcmpcaClient::restoreCertificateAuthority
 */

/*!
 * Constructs a RestoreCertificateAuthorityResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreCertificateAuthorityResponse::RestoreCertificateAuthorityResponse(
        const RestoreCertificateAuthorityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmpcaResponse(new RestoreCertificateAuthorityResponsePrivate(this), parent)
{
    setRequest(new RestoreCertificateAuthorityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreCertificateAuthorityRequest * RestoreCertificateAuthorityResponse::request() const
{
    Q_D(const RestoreCertificateAuthorityResponse);
    return static_cast<const RestoreCertificateAuthorityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ACMPCA RestoreCertificateAuthority \a response.
 */
void RestoreCertificateAuthorityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestoreCertificateAuthorityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ACMPCA::RestoreCertificateAuthorityResponsePrivate
 * \brief The RestoreCertificateAuthorityResponsePrivate class provides private implementation for RestoreCertificateAuthorityResponse.
 * \internal
 *
 * \inmodule QtAwsACMPCA
 */

/*!
 * Constructs a RestoreCertificateAuthorityResponsePrivate object with public implementation \a q.
 */
RestoreCertificateAuthorityResponsePrivate::RestoreCertificateAuthorityResponsePrivate(
    RestoreCertificateAuthorityResponse * const q) : AcmpcaResponsePrivate(q)
{

}

/*!
 * Parses a ACMPCA RestoreCertificateAuthority response element from \a xml.
 */
void RestoreCertificateAuthorityResponsePrivate::parseRestoreCertificateAuthorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreCertificateAuthorityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ACMPCA
} // namespace QtAws
