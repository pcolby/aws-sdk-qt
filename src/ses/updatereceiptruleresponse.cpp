// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatereceiptruleresponse.h"
#include "updatereceiptruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::UpdateReceiptRuleResponse
 * \brief The UpdateReceiptRuleResponse class provides an interace for Ses UpdateReceiptRule responses.
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
 * \sa SesClient::updateReceiptRule
 */

/*!
 * Constructs a UpdateReceiptRuleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateReceiptRuleResponse::UpdateReceiptRuleResponse(
        const UpdateReceiptRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new UpdateReceiptRuleResponsePrivate(this), parent)
{
    setRequest(new UpdateReceiptRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateReceiptRuleRequest * UpdateReceiptRuleResponse::request() const
{
    Q_D(const UpdateReceiptRuleResponse);
    return static_cast<const UpdateReceiptRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses UpdateReceiptRule \a response.
 */
void UpdateReceiptRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateReceiptRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::UpdateReceiptRuleResponsePrivate
 * \brief The UpdateReceiptRuleResponsePrivate class provides private implementation for UpdateReceiptRuleResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a UpdateReceiptRuleResponsePrivate object with public implementation \a q.
 */
UpdateReceiptRuleResponsePrivate::UpdateReceiptRuleResponsePrivate(
    UpdateReceiptRuleResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses UpdateReceiptRule response element from \a xml.
 */
void UpdateReceiptRuleResponsePrivate::parseUpdateReceiptRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateReceiptRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
