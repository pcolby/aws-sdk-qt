// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecertificateoptionsresponse.h"
#include "updatecertificateoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::UpdateCertificateOptionsResponse
 * \brief The UpdateCertificateOptionsResponse class provides an interace for Acm UpdateCertificateOptions responses.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::updateCertificateOptions
 */

/*!
 * Constructs a UpdateCertificateOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCertificateOptionsResponse::UpdateCertificateOptionsResponse(
        const UpdateCertificateOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new UpdateCertificateOptionsResponsePrivate(this), parent)
{
    setRequest(new UpdateCertificateOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCertificateOptionsRequest * UpdateCertificateOptionsResponse::request() const
{
    Q_D(const UpdateCertificateOptionsResponse);
    return static_cast<const UpdateCertificateOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Acm UpdateCertificateOptions \a response.
 */
void UpdateCertificateOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCertificateOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Acm::UpdateCertificateOptionsResponsePrivate
 * \brief The UpdateCertificateOptionsResponsePrivate class provides private implementation for UpdateCertificateOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a UpdateCertificateOptionsResponsePrivate object with public implementation \a q.
 */
UpdateCertificateOptionsResponsePrivate::UpdateCertificateOptionsResponsePrivate(
    UpdateCertificateOptionsResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a Acm UpdateCertificateOptions response element from \a xml.
 */
void UpdateCertificateOptionsResponsePrivate::parseUpdateCertificateOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCertificateOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Acm
} // namespace QtAws
