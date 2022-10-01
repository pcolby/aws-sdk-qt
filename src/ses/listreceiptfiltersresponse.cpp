// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreceiptfiltersresponse.h"
#include "listreceiptfiltersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::ListReceiptFiltersResponse
 * \brief The ListReceiptFiltersResponse class provides an interace for Ses ListReceiptFilters responses.
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
 * \sa SesClient::listReceiptFilters
 */

/*!
 * Constructs a ListReceiptFiltersResponse object for \a reply to \a request, with parent \a parent.
 */
ListReceiptFiltersResponse::ListReceiptFiltersResponse(
        const ListReceiptFiltersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new ListReceiptFiltersResponsePrivate(this), parent)
{
    setRequest(new ListReceiptFiltersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReceiptFiltersRequest * ListReceiptFiltersResponse::request() const
{
    Q_D(const ListReceiptFiltersResponse);
    return static_cast<const ListReceiptFiltersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses ListReceiptFilters \a response.
 */
void ListReceiptFiltersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReceiptFiltersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::ListReceiptFiltersResponsePrivate
 * \brief The ListReceiptFiltersResponsePrivate class provides private implementation for ListReceiptFiltersResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a ListReceiptFiltersResponsePrivate object with public implementation \a q.
 */
ListReceiptFiltersResponsePrivate::ListReceiptFiltersResponsePrivate(
    ListReceiptFiltersResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses ListReceiptFilters response element from \a xml.
 */
void ListReceiptFiltersResponsePrivate::parseListReceiptFiltersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReceiptFiltersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
