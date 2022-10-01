// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "clonereceiptrulesetresponse.h"
#include "clonereceiptrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::CloneReceiptRuleSetResponse
 * \brief The CloneReceiptRuleSetResponse class provides an interace for Ses CloneReceiptRuleSet responses.
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
 * \sa SesClient::cloneReceiptRuleSet
 */

/*!
 * Constructs a CloneReceiptRuleSetResponse object for \a reply to \a request, with parent \a parent.
 */
CloneReceiptRuleSetResponse::CloneReceiptRuleSetResponse(
        const CloneReceiptRuleSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new CloneReceiptRuleSetResponsePrivate(this), parent)
{
    setRequest(new CloneReceiptRuleSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CloneReceiptRuleSetRequest * CloneReceiptRuleSetResponse::request() const
{
    Q_D(const CloneReceiptRuleSetResponse);
    return static_cast<const CloneReceiptRuleSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses CloneReceiptRuleSet \a response.
 */
void CloneReceiptRuleSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CloneReceiptRuleSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::CloneReceiptRuleSetResponsePrivate
 * \brief The CloneReceiptRuleSetResponsePrivate class provides private implementation for CloneReceiptRuleSetResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a CloneReceiptRuleSetResponsePrivate object with public implementation \a q.
 */
CloneReceiptRuleSetResponsePrivate::CloneReceiptRuleSetResponsePrivate(
    CloneReceiptRuleSetResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses CloneReceiptRuleSet response element from \a xml.
 */
void CloneReceiptRuleSetResponsePrivate::parseCloneReceiptRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CloneReceiptRuleSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
