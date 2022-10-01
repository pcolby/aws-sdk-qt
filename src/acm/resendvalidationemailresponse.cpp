// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resendvalidationemailresponse.h"
#include "resendvalidationemailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::ResendValidationEmailResponse
 * \brief The ResendValidationEmailResponse class provides an interace for Acm ResendValidationEmail responses.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::resendValidationEmail
 */

/*!
 * Constructs a ResendValidationEmailResponse object for \a reply to \a request, with parent \a parent.
 */
ResendValidationEmailResponse::ResendValidationEmailResponse(
        const ResendValidationEmailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new ResendValidationEmailResponsePrivate(this), parent)
{
    setRequest(new ResendValidationEmailRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResendValidationEmailRequest * ResendValidationEmailResponse::request() const
{
    Q_D(const ResendValidationEmailResponse);
    return static_cast<const ResendValidationEmailRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Acm ResendValidationEmail \a response.
 */
void ResendValidationEmailResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResendValidationEmailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Acm::ResendValidationEmailResponsePrivate
 * \brief The ResendValidationEmailResponsePrivate class provides private implementation for ResendValidationEmailResponse.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a ResendValidationEmailResponsePrivate object with public implementation \a q.
 */
ResendValidationEmailResponsePrivate::ResendValidationEmailResponsePrivate(
    ResendValidationEmailResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a Acm ResendValidationEmail response element from \a xml.
 */
void ResendValidationEmailResponsePrivate::parseResendValidationEmailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResendValidationEmailResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Acm
} // namespace QtAws
