// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putaccountsendingattributesresponse.h"
#include "putaccountsendingattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutAccountSendingAttributesResponse
 * \brief The PutAccountSendingAttributesResponse class provides an interace for SESv2 PutAccountSendingAttributes responses.
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
 * \sa SESv2Client::putAccountSendingAttributes
 */

/*!
 * Constructs a PutAccountSendingAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
PutAccountSendingAttributesResponse::PutAccountSendingAttributesResponse(
        const PutAccountSendingAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new PutAccountSendingAttributesResponsePrivate(this), parent)
{
    setRequest(new PutAccountSendingAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAccountSendingAttributesRequest * PutAccountSendingAttributesResponse::request() const
{
    Q_D(const PutAccountSendingAttributesResponse);
    return static_cast<const PutAccountSendingAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 PutAccountSendingAttributes \a response.
 */
void PutAccountSendingAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAccountSendingAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::PutAccountSendingAttributesResponsePrivate
 * \brief The PutAccountSendingAttributesResponsePrivate class provides private implementation for PutAccountSendingAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutAccountSendingAttributesResponsePrivate object with public implementation \a q.
 */
PutAccountSendingAttributesResponsePrivate::PutAccountSendingAttributesResponsePrivate(
    PutAccountSendingAttributesResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 PutAccountSendingAttributes response element from \a xml.
 */
void PutAccountSendingAttributesResponsePrivate::parsePutAccountSendingAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAccountSendingAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
