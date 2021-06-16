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

#include "deletecertificateauthorityresponse.h"
#include "deletecertificateauthorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::DeleteCertificateAuthorityResponse
 * \brief The DeleteCertificateAuthorityResponse class provides an interace for ACMPCA DeleteCertificateAuthority responses.
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
 * \sa AcmpcaClient::deleteCertificateAuthority
 */

/*!
 * Constructs a DeleteCertificateAuthorityResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCertificateAuthorityResponse::DeleteCertificateAuthorityResponse(
        const DeleteCertificateAuthorityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmpcaResponse(new DeleteCertificateAuthorityResponsePrivate(this), parent)
{
    setRequest(new DeleteCertificateAuthorityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCertificateAuthorityRequest * DeleteCertificateAuthorityResponse::request() const
{
    Q_D(const DeleteCertificateAuthorityResponse);
    return static_cast<const DeleteCertificateAuthorityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ACMPCA DeleteCertificateAuthority \a response.
 */
void DeleteCertificateAuthorityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCertificateAuthorityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ACMPCA::DeleteCertificateAuthorityResponsePrivate
 * \brief The DeleteCertificateAuthorityResponsePrivate class provides private implementation for DeleteCertificateAuthorityResponse.
 * \internal
 *
 * \inmodule QtAwsACMPCA
 */

/*!
 * Constructs a DeleteCertificateAuthorityResponsePrivate object with public implementation \a q.
 */
DeleteCertificateAuthorityResponsePrivate::DeleteCertificateAuthorityResponsePrivate(
    DeleteCertificateAuthorityResponse * const q) : AcmpcaResponsePrivate(q)
{

}

/*!
 * Parses a ACMPCA DeleteCertificateAuthority response element from \a xml.
 */
void DeleteCertificateAuthorityResponsePrivate::parseDeleteCertificateAuthorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCertificateAuthorityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ACMPCA
} // namespace QtAws
