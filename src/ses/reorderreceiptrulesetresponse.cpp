// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "reorderreceiptrulesetresponse.h"
#include "reorderreceiptrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::ReorderReceiptRuleSetResponse
 * \brief The ReorderReceiptRuleSetResponse class provides an interace for Ses ReorderReceiptRuleSet responses.
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
 * \sa SesClient::reorderReceiptRuleSet
 */

/*!
 * Constructs a ReorderReceiptRuleSetResponse object for \a reply to \a request, with parent \a parent.
 */
ReorderReceiptRuleSetResponse::ReorderReceiptRuleSetResponse(
        const ReorderReceiptRuleSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new ReorderReceiptRuleSetResponsePrivate(this), parent)
{
    setRequest(new ReorderReceiptRuleSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ReorderReceiptRuleSetRequest * ReorderReceiptRuleSetResponse::request() const
{
    Q_D(const ReorderReceiptRuleSetResponse);
    return static_cast<const ReorderReceiptRuleSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses ReorderReceiptRuleSet \a response.
 */
void ReorderReceiptRuleSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ReorderReceiptRuleSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::ReorderReceiptRuleSetResponsePrivate
 * \brief The ReorderReceiptRuleSetResponsePrivate class provides private implementation for ReorderReceiptRuleSetResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a ReorderReceiptRuleSetResponsePrivate object with public implementation \a q.
 */
ReorderReceiptRuleSetResponsePrivate::ReorderReceiptRuleSetResponsePrivate(
    ReorderReceiptRuleSetResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses ReorderReceiptRuleSet response element from \a xml.
 */
void ReorderReceiptRuleSetResponsePrivate::parseReorderReceiptRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReorderReceiptRuleSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
