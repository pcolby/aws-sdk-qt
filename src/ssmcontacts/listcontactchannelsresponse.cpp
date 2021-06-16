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

#include "listcontactchannelsresponse.h"
#include "listcontactchannelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::ListContactChannelsResponse
 * \brief The ListContactChannelsResponse class provides an interace for SSMContacts ListContactChannels responses.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::listContactChannels
 */

/*!
 * Constructs a ListContactChannelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListContactChannelsResponse::ListContactChannelsResponse(
        const ListContactChannelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMContactsResponse(new ListContactChannelsResponsePrivate(this), parent)
{
    setRequest(new ListContactChannelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListContactChannelsRequest * ListContactChannelsResponse::request() const
{
    Q_D(const ListContactChannelsResponse);
    return static_cast<const ListContactChannelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSMContacts ListContactChannels \a response.
 */
void ListContactChannelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListContactChannelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMContacts::ListContactChannelsResponsePrivate
 * \brief The ListContactChannelsResponsePrivate class provides private implementation for ListContactChannelsResponse.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a ListContactChannelsResponsePrivate object with public implementation \a q.
 */
ListContactChannelsResponsePrivate::ListContactChannelsResponsePrivate(
    ListContactChannelsResponse * const q) : SSMContactsResponsePrivate(q)
{

}

/*!
 * Parses a SSMContacts ListContactChannels response element from \a xml.
 */
void ListContactChannelsResponsePrivate::parseListContactChannelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListContactChannelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMContacts
} // namespace QtAws
