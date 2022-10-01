// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsuppresseddestinationsresponse.h"
#include "listsuppresseddestinationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::ListSuppressedDestinationsResponse
 * \brief The ListSuppressedDestinationsResponse class provides an interace for SESv2 ListSuppressedDestinations responses.
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
 * \sa SESv2Client::listSuppressedDestinations
 */

/*!
 * Constructs a ListSuppressedDestinationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSuppressedDestinationsResponse::ListSuppressedDestinationsResponse(
        const ListSuppressedDestinationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new ListSuppressedDestinationsResponsePrivate(this), parent)
{
    setRequest(new ListSuppressedDestinationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSuppressedDestinationsRequest * ListSuppressedDestinationsResponse::request() const
{
    Q_D(const ListSuppressedDestinationsResponse);
    return static_cast<const ListSuppressedDestinationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 ListSuppressedDestinations \a response.
 */
void ListSuppressedDestinationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSuppressedDestinationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::ListSuppressedDestinationsResponsePrivate
 * \brief The ListSuppressedDestinationsResponsePrivate class provides private implementation for ListSuppressedDestinationsResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a ListSuppressedDestinationsResponsePrivate object with public implementation \a q.
 */
ListSuppressedDestinationsResponsePrivate::ListSuppressedDestinationsResponsePrivate(
    ListSuppressedDestinationsResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 ListSuppressedDestinations response element from \a xml.
 */
void ListSuppressedDestinationsResponsePrivate::parseListSuppressedDestinationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSuppressedDestinationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
