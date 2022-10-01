// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendcustomverificationemailresponse.h"
#include "sendcustomverificationemailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SendCustomVerificationEmailResponse
 * \brief The SendCustomVerificationEmailResponse class provides an interace for Ses SendCustomVerificationEmail responses.
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
 * \sa SesClient::sendCustomVerificationEmail
 */

/*!
 * Constructs a SendCustomVerificationEmailResponse object for \a reply to \a request, with parent \a parent.
 */
SendCustomVerificationEmailResponse::SendCustomVerificationEmailResponse(
        const SendCustomVerificationEmailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new SendCustomVerificationEmailResponsePrivate(this), parent)
{
    setRequest(new SendCustomVerificationEmailRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendCustomVerificationEmailRequest * SendCustomVerificationEmailResponse::request() const
{
    Q_D(const SendCustomVerificationEmailResponse);
    return static_cast<const SendCustomVerificationEmailRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses SendCustomVerificationEmail \a response.
 */
void SendCustomVerificationEmailResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendCustomVerificationEmailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::SendCustomVerificationEmailResponsePrivate
 * \brief The SendCustomVerificationEmailResponsePrivate class provides private implementation for SendCustomVerificationEmailResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SendCustomVerificationEmailResponsePrivate object with public implementation \a q.
 */
SendCustomVerificationEmailResponsePrivate::SendCustomVerificationEmailResponsePrivate(
    SendCustomVerificationEmailResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses SendCustomVerificationEmail response element from \a xml.
 */
void SendCustomVerificationEmailResponsePrivate::parseSendCustomVerificationEmailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendCustomVerificationEmailResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
