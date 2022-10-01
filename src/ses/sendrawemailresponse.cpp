// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendrawemailresponse.h"
#include "sendrawemailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SendRawEmailResponse
 * \brief The SendRawEmailResponse class provides an interace for Ses SendRawEmail responses.
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
 * \sa SesClient::sendRawEmail
 */

/*!
 * Constructs a SendRawEmailResponse object for \a reply to \a request, with parent \a parent.
 */
SendRawEmailResponse::SendRawEmailResponse(
        const SendRawEmailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new SendRawEmailResponsePrivate(this), parent)
{
    setRequest(new SendRawEmailRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendRawEmailRequest * SendRawEmailResponse::request() const
{
    Q_D(const SendRawEmailResponse);
    return static_cast<const SendRawEmailRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses SendRawEmail \a response.
 */
void SendRawEmailResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendRawEmailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::SendRawEmailResponsePrivate
 * \brief The SendRawEmailResponsePrivate class provides private implementation for SendRawEmailResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SendRawEmailResponsePrivate object with public implementation \a q.
 */
SendRawEmailResponsePrivate::SendRawEmailResponsePrivate(
    SendRawEmailResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses SendRawEmail response element from \a xml.
 */
void SendRawEmailResponsePrivate::parseSendRawEmailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendRawEmailResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
