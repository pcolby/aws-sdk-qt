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

#include "listcertificateauthoritiesresponse.h"
#include "listcertificateauthoritiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::ListCertificateAuthoritiesResponse
 * \brief The ListCertificateAuthoritiesResponse class provides an interace for ACMPCA ListCertificateAuthorities responses.
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
 * \sa AcmpcaClient::listCertificateAuthorities
 */

/*!
 * Constructs a ListCertificateAuthoritiesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCertificateAuthoritiesResponse::ListCertificateAuthoritiesResponse(
        const ListCertificateAuthoritiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmpcaResponse(new ListCertificateAuthoritiesResponsePrivate(this), parent)
{
    setRequest(new ListCertificateAuthoritiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCertificateAuthoritiesRequest * ListCertificateAuthoritiesResponse::request() const
{
    Q_D(const ListCertificateAuthoritiesResponse);
    return static_cast<const ListCertificateAuthoritiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ACMPCA ListCertificateAuthorities \a response.
 */
void ListCertificateAuthoritiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCertificateAuthoritiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ACMPCA::ListCertificateAuthoritiesResponsePrivate
 * \brief The ListCertificateAuthoritiesResponsePrivate class provides private implementation for ListCertificateAuthoritiesResponse.
 * \internal
 *
 * \inmodule QtAwsACMPCA
 */

/*!
 * Constructs a ListCertificateAuthoritiesResponsePrivate object with public implementation \a q.
 */
ListCertificateAuthoritiesResponsePrivate::ListCertificateAuthoritiesResponsePrivate(
    ListCertificateAuthoritiesResponse * const q) : AcmpcaResponsePrivate(q)
{

}

/*!
 * Parses a ACMPCA ListCertificateAuthorities response element from \a xml.
 */
void ListCertificateAuthoritiesResponsePrivate::parseListCertificateAuthoritiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCertificateAuthoritiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ACMPCA
} // namespace QtAws
