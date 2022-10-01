// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsforcertificateresponse.h"
#include "listtagsforcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::ListTagsForCertificateResponse
 * \brief The ListTagsForCertificateResponse class provides an interace for Acm ListTagsForCertificate responses.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::listTagsForCertificate
 */

/*!
 * Constructs a ListTagsForCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
ListTagsForCertificateResponse::ListTagsForCertificateResponse(
        const ListTagsForCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new ListTagsForCertificateResponsePrivate(this), parent)
{
    setRequest(new ListTagsForCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTagsForCertificateRequest * ListTagsForCertificateResponse::request() const
{
    Q_D(const ListTagsForCertificateResponse);
    return static_cast<const ListTagsForCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Acm ListTagsForCertificate \a response.
 */
void ListTagsForCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTagsForCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Acm::ListTagsForCertificateResponsePrivate
 * \brief The ListTagsForCertificateResponsePrivate class provides private implementation for ListTagsForCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a ListTagsForCertificateResponsePrivate object with public implementation \a q.
 */
ListTagsForCertificateResponsePrivate::ListTagsForCertificateResponsePrivate(
    ListTagsForCertificateResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a Acm ListTagsForCertificate response element from \a xml.
 */
void ListTagsForCertificateResponsePrivate::parseListTagsForCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Acm
} // namespace QtAws
