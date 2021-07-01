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

#include "getcontactchannelresponse.h"
#include "getcontactchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::GetContactChannelResponse
 * \brief The GetContactChannelResponse class provides an interace for SSMContacts GetContactChannel responses.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::getContactChannel
 */

/*!
 * Constructs a GetContactChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetContactChannelResponse::GetContactChannelResponse(
        const GetContactChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMContactsResponse(new GetContactChannelResponsePrivate(this), parent)
{
    setRequest(new GetContactChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContactChannelRequest * GetContactChannelResponse::request() const
{
    Q_D(const GetContactChannelResponse);
    return static_cast<const GetContactChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSMContacts GetContactChannel \a response.
 */
void GetContactChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContactChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMContacts::GetContactChannelResponsePrivate
 * \brief The GetContactChannelResponsePrivate class provides private implementation for GetContactChannelResponse.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a GetContactChannelResponsePrivate object with public implementation \a q.
 */
GetContactChannelResponsePrivate::GetContactChannelResponsePrivate(
    GetContactChannelResponse * const q) : SSMContactsResponsePrivate(q)
{

}

/*!
 * Parses a SSMContacts GetContactChannel response element from \a xml.
 */
void GetContactChannelResponsePrivate::parseGetContactChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContactChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMContacts
} // namespace QtAws
