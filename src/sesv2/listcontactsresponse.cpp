// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcontactsresponse.h"
#include "listcontactsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::ListContactsResponse
 * \brief The ListContactsResponse class provides an interace for SESv2 ListContacts responses.
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
 * \sa SESv2Client::listContacts
 */

/*!
 * Constructs a ListContactsResponse object for \a reply to \a request, with parent \a parent.
 */
ListContactsResponse::ListContactsResponse(
        const ListContactsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new ListContactsResponsePrivate(this), parent)
{
    setRequest(new ListContactsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListContactsRequest * ListContactsResponse::request() const
{
    Q_D(const ListContactsResponse);
    return static_cast<const ListContactsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 ListContacts \a response.
 */
void ListContactsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListContactsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::ListContactsResponsePrivate
 * \brief The ListContactsResponsePrivate class provides private implementation for ListContactsResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a ListContactsResponsePrivate object with public implementation \a q.
 */
ListContactsResponsePrivate::ListContactsResponsePrivate(
    ListContactsResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 ListContacts response element from \a xml.
 */
void ListContactsResponsePrivate::parseListContactsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListContactsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
