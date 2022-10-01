// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendtemplatedemailresponse.h"
#include "sendtemplatedemailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SendTemplatedEmailResponse
 * \brief The SendTemplatedEmailResponse class provides an interace for Ses SendTemplatedEmail responses.
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
 * \sa SesClient::sendTemplatedEmail
 */

/*!
 * Constructs a SendTemplatedEmailResponse object for \a reply to \a request, with parent \a parent.
 */
SendTemplatedEmailResponse::SendTemplatedEmailResponse(
        const SendTemplatedEmailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new SendTemplatedEmailResponsePrivate(this), parent)
{
    setRequest(new SendTemplatedEmailRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendTemplatedEmailRequest * SendTemplatedEmailResponse::request() const
{
    Q_D(const SendTemplatedEmailResponse);
    return static_cast<const SendTemplatedEmailRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses SendTemplatedEmail \a response.
 */
void SendTemplatedEmailResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendTemplatedEmailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::SendTemplatedEmailResponsePrivate
 * \brief The SendTemplatedEmailResponsePrivate class provides private implementation for SendTemplatedEmailResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SendTemplatedEmailResponsePrivate object with public implementation \a q.
 */
SendTemplatedEmailResponsePrivate::SendTemplatedEmailResponsePrivate(
    SendTemplatedEmailResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses SendTemplatedEmail response element from \a xml.
 */
void SendTemplatedEmailResponsePrivate::parseSendTemplatedEmailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendTemplatedEmailResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
