// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendemailresponse.h"
#include "sendemailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SendEmailResponse
 * \brief The SendEmailResponse class provides an interace for Ses SendEmail responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::sendEmail
 */

/*!
 * Constructs a SendEmailResponse object for \a reply to \a request, with parent \a parent.
 */
SendEmailResponse::SendEmailResponse(
        const SendEmailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new SendEmailResponsePrivate(this), parent)
{
    setRequest(new SendEmailRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendEmailRequest * SendEmailResponse::request() const
{
    Q_D(const SendEmailResponse);
    return static_cast<const SendEmailRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses SendEmail \a response.
 */
void SendEmailResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendEmailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::SendEmailResponsePrivate
 * \brief The SendEmailResponsePrivate class provides private implementation for SendEmailResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SendEmailResponsePrivate object with public implementation \a q.
 */
SendEmailResponsePrivate::SendEmailResponsePrivate(
    SendEmailResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses SendEmail response element from \a xml.
 */
void SendEmailResponsePrivate::parseSendEmailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendEmailResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
