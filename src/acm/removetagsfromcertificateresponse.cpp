// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
