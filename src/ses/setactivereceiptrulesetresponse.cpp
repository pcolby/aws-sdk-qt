// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setactivereceiptrulesetresponse.h"
#include "setactivereceiptrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SetActiveReceiptRuleSetResponse
 * \brief The SetActiveReceiptRuleSetResponse class provides an interace for Ses SetActiveReceiptRuleSet responses.
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
 * \sa SesClient::setActiveReceiptRuleSet
 */

/*!
 * Constructs a SetActiveReceiptRuleSetResponse object for \a reply to \a request, with parent \a parent.
 */
SetActiveReceiptRuleSetResponse::SetActiveReceiptRuleSetResponse(
        const SetActiveReceiptRuleSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new SetActiveReceiptRuleSetResponsePrivate(this), parent)
{
    setRequest(new SetActiveReceiptRuleSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetActiveReceiptRuleSetRequest * SetActiveReceiptRuleSetResponse::request() const
{
    Q_D(const SetActiveReceiptRuleSetResponse);
    return static_cast<const SetActiveReceiptRuleSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses SetActiveReceiptRuleSet \a response.
 */
void SetActiveReceiptRuleSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetActiveReceiptRuleSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::SetActiveReceiptRuleSetResponsePrivate
 * \brief The SetActiveReceiptRuleSetResponsePrivate class provides private implementation for SetActiveReceiptRuleSetResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SetActiveReceiptRuleSetResponsePrivate object with public implementation \a q.
 */
SetActiveReceiptRuleSetResponsePrivate::SetActiveReceiptRuleSetResponsePrivate(
    SetActiveReceiptRuleSetResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses SetActiveReceiptRuleSet response element from \a xml.
 */
void SetActiveReceiptRuleSetResponsePrivate::parseSetActiveReceiptRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetActiveReceiptRuleSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
