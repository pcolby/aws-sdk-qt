// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreceiptrulesetsresponse.h"
#include "listreceiptrulesetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::ListReceiptRuleSetsResponse
 * \brief The ListReceiptRuleSetsResponse class provides an interace for Ses ListReceiptRuleSets responses.
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
 * \sa SesClient::listReceiptRuleSets
 */

/*!
 * Constructs a ListReceiptRuleSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListReceiptRuleSetsResponse::ListReceiptRuleSetsResponse(
        const ListReceiptRuleSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new ListReceiptRuleSetsResponsePrivate(this), parent)
{
    setRequest(new ListReceiptRuleSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReceiptRuleSetsRequest * ListReceiptRuleSetsResponse::request() const
{
    Q_D(const ListReceiptRuleSetsResponse);
    return static_cast<const ListReceiptRuleSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses ListReceiptRuleSets \a response.
 */
void ListReceiptRuleSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReceiptRuleSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::ListReceiptRuleSetsResponsePrivate
 * \brief The ListReceiptRuleSetsResponsePrivate class provides private implementation for ListReceiptRuleSetsResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a ListReceiptRuleSetsResponsePrivate object with public implementation \a q.
 */
ListReceiptRuleSetsResponsePrivate::ListReceiptRuleSetsResponsePrivate(
    ListReceiptRuleSetsResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses ListReceiptRuleSets response element from \a xml.
 */
void ListReceiptRuleSetsResponsePrivate::parseListReceiptRuleSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReceiptRuleSetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
