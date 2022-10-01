// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendbulkemailresponse.h"
#include "sendbulkemailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::SendBulkEmailResponse
 * \brief The SendBulkEmailResponse class provides an interace for SESv2 SendBulkEmail responses.
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
 * \sa SESv2Client::sendBulkEmail
 */

/*!
 * Constructs a SendBulkEmailResponse object for \a reply to \a request, with parent \a parent.
 */
SendBulkEmailResponse::SendBulkEmailResponse(
        const SendBulkEmailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new SendBulkEmailResponsePrivate(this), parent)
{
    setRequest(new SendBulkEmailRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendBulkEmailRequest * SendBulkEmailResponse::request() const
{
    Q_D(const SendBulkEmailResponse);
    return static_cast<const SendBulkEmailRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 SendBulkEmail \a response.
 */
void SendBulkEmailResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendBulkEmailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::SendBulkEmailResponsePrivate
 * \brief The SendBulkEmailResponsePrivate class provides private implementation for SendBulkEmailResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a SendBulkEmailResponsePrivate object with public implementation \a q.
 */
SendBulkEmailResponsePrivate::SendBulkEmailResponsePrivate(
    SendBulkEmailResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 SendBulkEmail response element from \a xml.
 */
void SendBulkEmailResponsePrivate::parseSendBulkEmailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendBulkEmailResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
