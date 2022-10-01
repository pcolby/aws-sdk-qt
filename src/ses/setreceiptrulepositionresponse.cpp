// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setreceiptrulepositionresponse.h"
#include "setreceiptrulepositionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SetReceiptRulePositionResponse
 * \brief The SetReceiptRulePositionResponse class provides an interace for Ses SetReceiptRulePosition responses.
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
 * \sa SesClient::setReceiptRulePosition
 */

/*!
 * Constructs a SetReceiptRulePositionResponse object for \a reply to \a request, with parent \a parent.
 */
SetReceiptRulePositionResponse::SetReceiptRulePositionResponse(
        const SetReceiptRulePositionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new SetReceiptRulePositionResponsePrivate(this), parent)
{
    setRequest(new SetReceiptRulePositionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetReceiptRulePositionRequest * SetReceiptRulePositionResponse::request() const
{
    Q_D(const SetReceiptRulePositionResponse);
    return static_cast<const SetReceiptRulePositionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses SetReceiptRulePosition \a response.
 */
void SetReceiptRulePositionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetReceiptRulePositionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::SetReceiptRulePositionResponsePrivate
 * \brief The SetReceiptRulePositionResponsePrivate class provides private implementation for SetReceiptRulePositionResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SetReceiptRulePositionResponsePrivate object with public implementation \a q.
 */
SetReceiptRulePositionResponsePrivate::SetReceiptRulePositionResponsePrivate(
    SetReceiptRulePositionResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses SetReceiptRulePosition response element from \a xml.
 */
void SetReceiptRulePositionResponsePrivate::parseSetReceiptRulePositionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetReceiptRulePositionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
