// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listverifiedemailaddressesresponse.h"
#include "listverifiedemailaddressesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::ListVerifiedEmailAddressesResponse
 * \brief The ListVerifiedEmailAddressesResponse class provides an interace for Ses ListVerifiedEmailAddresses responses.
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
 * \sa SesClient::listVerifiedEmailAddresses
 */

/*!
 * Constructs a ListVerifiedEmailAddressesResponse object for \a reply to \a request, with parent \a parent.
 */
ListVerifiedEmailAddressesResponse::ListVerifiedEmailAddressesResponse(
        const ListVerifiedEmailAddressesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new ListVerifiedEmailAddressesResponsePrivate(this), parent)
{
    setRequest(new ListVerifiedEmailAddressesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListVerifiedEmailAddressesRequest * ListVerifiedEmailAddressesResponse::request() const
{
    Q_D(const ListVerifiedEmailAddressesResponse);
    return static_cast<const ListVerifiedEmailAddressesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses ListVerifiedEmailAddresses \a response.
 */
void ListVerifiedEmailAddressesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListVerifiedEmailAddressesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::ListVerifiedEmailAddressesResponsePrivate
 * \brief The ListVerifiedEmailAddressesResponsePrivate class provides private implementation for ListVerifiedEmailAddressesResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a ListVerifiedEmailAddressesResponsePrivate object with public implementation \a q.
 */
ListVerifiedEmailAddressesResponsePrivate::ListVerifiedEmailAddressesResponsePrivate(
    ListVerifiedEmailAddressesResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses ListVerifiedEmailAddresses response element from \a xml.
 */
void ListVerifiedEmailAddressesResponsePrivate::parseListVerifiedEmailAddressesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVerifiedEmailAddressesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
