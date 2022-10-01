/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listdomaindeliverabilitycampaignsresponse.h"
#include "listdomaindeliverabilitycampaignsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::ListDomainDeliverabilityCampaignsResponse
 * \brief The ListDomainDeliverabilityCampaignsResponse class provides an interace for SESv2 ListDomainDeliverabilityCampaigns responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::listDomainDeliverabilityCampaigns
 */

/*!
 * Constructs a ListDomainDeliverabilityCampaignsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDomainDeliverabilityCampaignsResponse::ListDomainDeliverabilityCampaignsResponse(
        const ListDomainDeliverabilityCampaignsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new ListDomainDeliverabilityCampaignsResponsePrivate(this), parent)
{
    setRequest(new ListDomainDeliverabilityCampaignsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDomainDeliverabilityCampaignsRequest * ListDomainDeliverabilityCampaignsResponse::request() const
{
    Q_D(const ListDomainDeliverabilityCampaignsResponse);
    return static_cast<const ListDomainDeliverabilityCampaignsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 ListDomainDeliverabilityCampaigns \a response.
 */
void ListDomainDeliverabilityCampaignsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDomainDeliverabilityCampaignsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::ListDomainDeliverabilityCampaignsResponsePrivate
 * \brief The ListDomainDeliverabilityCampaignsResponsePrivate class provides private implementation for ListDomainDeliverabilityCampaignsResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a ListDomainDeliverabilityCampaignsResponsePrivate object with public implementation \a q.
 */
ListDomainDeliverabilityCampaignsResponsePrivate::ListDomainDeliverabilityCampaignsResponsePrivate(
    ListDomainDeliverabilityCampaignsResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 ListDomainDeliverabilityCampaigns response element from \a xml.
 */
void ListDomainDeliverabilityCampaignsResponsePrivate::parseListDomainDeliverabilityCampaignsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDomainDeliverabilityCampaignsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
