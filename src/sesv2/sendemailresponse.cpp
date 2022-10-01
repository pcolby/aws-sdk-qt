// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendemailresponse.h"
#include "sendemailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::SendEmailResponse
 * \brief The SendEmailResponse class provides an interace for SESv2 SendEmail responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::sendEmail
 */

/*!
 * Constructs a SendEmailResponse object for \a reply to \a request, with parent \a parent.
 */
SendEmailResponse::SendEmailResponse(
        const SendEmailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new SendEmailResponsePrivate(this), parent)
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
 * Parses a successful SESv2 SendEmail \a response.
 */
void SendEmailResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendEmailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::SendEmailResponsePrivate
 * \brief The SendEmailResponsePrivate class provides private implementation for SendEmailResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a SendEmailResponsePrivate object with public implementation \a q.
 */
SendEmailResponsePrivate::SendEmailResponsePrivate(
    SendEmailResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 SendEmail response element from \a xml.
 */
void SendEmailResponsePrivate::parseSendEmailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendEmailResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
