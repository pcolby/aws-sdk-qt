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

#include "deletecontactchannelresponse.h"
#include "deletecontactchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::DeleteContactChannelResponse
 * \brief The DeleteContactChannelResponse class provides an interace for SSMContacts DeleteContactChannel responses.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::deleteContactChannel
 */

/*!
 * Constructs a DeleteContactChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteContactChannelResponse::DeleteContactChannelResponse(
        const DeleteContactChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMContactsResponse(new DeleteContactChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteContactChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteContactChannelRequest * DeleteContactChannelResponse::request() const
{
    return static_cast<const DeleteContactChannelRequest *>(SSMContactsResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSMContacts DeleteContactChannel \a response.
 */
void DeleteContactChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteContactChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMContacts::DeleteContactChannelResponsePrivate
 * \brief The DeleteContactChannelResponsePrivate class provides private implementation for DeleteContactChannelResponse.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a DeleteContactChannelResponsePrivate object with public implementation \a q.
 */
DeleteContactChannelResponsePrivate::DeleteContactChannelResponsePrivate(
    DeleteContactChannelResponse * const q) : SSMContactsResponsePrivate(q)
{

}

/*!
 * Parses a SSMContacts DeleteContactChannel response element from \a xml.
 */
void DeleteContactChannelResponsePrivate::parseDeleteContactChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteContactChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMContacts
} // namespace QtAws
