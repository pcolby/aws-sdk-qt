// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcontactlistsresponse.h"
#include "listcontactlistsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::ListContactListsResponse
 * \brief The ListContactListsResponse class provides an interace for SESv2 ListContactLists responses.
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
 * \sa SESv2Client::listContactLists
 */

/*!
 * Constructs a ListContactListsResponse object for \a reply to \a request, with parent \a parent.
 */
ListContactListsResponse::ListContactListsResponse(
        const ListContactListsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new ListContactListsResponsePrivate(this), parent)
{
    setRequest(new ListContactListsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListContactListsRequest * ListContactListsResponse::request() const
{
    Q_D(const ListContactListsResponse);
    return static_cast<const ListContactListsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 ListContactLists \a response.
 */
void ListContactListsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListContactListsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::ListContactListsResponsePrivate
 * \brief The ListContactListsResponsePrivate class provides private implementation for ListContactListsResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a ListContactListsResponsePrivate object with public implementation \a q.
 */
ListContactListsResponsePrivate::ListContactListsResponsePrivate(
    ListContactListsResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 ListContactLists response element from \a xml.
 */
void ListContactListsResponsePrivate::parseListContactListsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListContactListsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
