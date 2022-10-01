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

#include "removetagsfromcertificateresponse.h"
#include "removetagsfromcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::RemoveTagsFromCertificateResponse
 * \brief The RemoveTagsFromCertificateResponse class provides an interace for Acm RemoveTagsFromCertificate responses.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::removeTagsFromCertificate
 */

/*!
 * Constructs a RemoveTagsFromCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveTagsFromCertificateResponse::RemoveTagsFromCertificateResponse(
        const RemoveTagsFromCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new RemoveTagsFromCertificateResponsePrivate(this), parent)
{
    setRequest(new RemoveTagsFromCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveTagsFromCertificateRequest * RemoveTagsFromCertificateResponse::request() const
{
    Q_D(const RemoveTagsFromCertificateResponse);
    return static_cast<const RemoveTagsFromCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Acm RemoveTagsFromCertificate \a response.
 */
void RemoveTagsFromCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveTagsFromCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Acm::RemoveTagsFromCertificateResponsePrivate
 * \brief The RemoveTagsFromCertificateResponsePrivate class provides private implementation for RemoveTagsFromCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a RemoveTagsFromCertificateResponsePrivate object with public implementation \a q.
 */
RemoveTagsFromCertificateResponsePrivate::RemoveTagsFromCertificateResponsePrivate(
    RemoveTagsFromCertificateResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a Acm RemoveTagsFromCertificate response element from \a xml.
 */
void RemoveTagsFromCertificateResponsePrivate::parseRemoveTagsFromCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTagsFromCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Acm
} // namespace QtAws
