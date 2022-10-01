// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountsendingenabledresponse.h"
#include "getaccountsendingenabledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetAccountSendingEnabledResponse
 * \brief The GetAccountSendingEnabledResponse class provides an interace for Ses GetAccountSendingEnabled responses.
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
 * \sa SesClient::getAccountSendingEnabled
 */

/*!
 * Constructs a GetAccountSendingEnabledResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccountSendingEnabledResponse::GetAccountSendingEnabledResponse(
        const GetAccountSendingEnabledRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new GetAccountSendingEnabledResponsePrivate(this), parent)
{
    setRequest(new GetAccountSendingEnabledRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccountSendingEnabledRequest * GetAccountSendingEnabledResponse::request() const
{
    Q_D(const GetAccountSendingEnabledResponse);
    return static_cast<const GetAccountSendingEnabledRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses GetAccountSendingEnabled \a response.
 */
void GetAccountSendingEnabledResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccountSendingEnabledResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::GetAccountSendingEnabledResponsePrivate
 * \brief The GetAccountSendingEnabledResponsePrivate class provides private implementation for GetAccountSendingEnabledResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetAccountSendingEnabledResponsePrivate object with public implementation \a q.
 */
GetAccountSendingEnabledResponsePrivate::GetAccountSendingEnabledResponsePrivate(
    GetAccountSendingEnabledResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses GetAccountSendingEnabled response element from \a xml.
 */
void GetAccountSendingEnabledResponsePrivate::parseGetAccountSendingEnabledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountSendingEnabledResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
