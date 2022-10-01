// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaccountsendingenabledresponse.h"
#include "updateaccountsendingenabledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::UpdateAccountSendingEnabledResponse
 * \brief The UpdateAccountSendingEnabledResponse class provides an interace for Ses UpdateAccountSendingEnabled responses.
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
 * \sa SesClient::updateAccountSendingEnabled
 */

/*!
 * Constructs a UpdateAccountSendingEnabledResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAccountSendingEnabledResponse::UpdateAccountSendingEnabledResponse(
        const UpdateAccountSendingEnabledRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new UpdateAccountSendingEnabledResponsePrivate(this), parent)
{
    setRequest(new UpdateAccountSendingEnabledRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAccountSendingEnabledRequest * UpdateAccountSendingEnabledResponse::request() const
{
    Q_D(const UpdateAccountSendingEnabledResponse);
    return static_cast<const UpdateAccountSendingEnabledRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses UpdateAccountSendingEnabled \a response.
 */
void UpdateAccountSendingEnabledResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAccountSendingEnabledResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::UpdateAccountSendingEnabledResponsePrivate
 * \brief The UpdateAccountSendingEnabledResponsePrivate class provides private implementation for UpdateAccountSendingEnabledResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a UpdateAccountSendingEnabledResponsePrivate object with public implementation \a q.
 */
UpdateAccountSendingEnabledResponsePrivate::UpdateAccountSendingEnabledResponsePrivate(
    UpdateAccountSendingEnabledResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses UpdateAccountSendingEnabled response element from \a xml.
 */
void UpdateAccountSendingEnabledResponsePrivate::parseUpdateAccountSendingEnabledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAccountSendingEnabledResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
