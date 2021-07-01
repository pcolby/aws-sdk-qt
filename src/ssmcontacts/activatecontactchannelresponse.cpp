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

#include "activatecontactchannelresponse.h"
#include "activatecontactchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::ActivateContactChannelResponse
 * \brief The ActivateContactChannelResponse class provides an interace for SSMContacts ActivateContactChannel responses.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::activateContactChannel
 */

/*!
 * Constructs a ActivateContactChannelResponse object for \a reply to \a request, with parent \a parent.
 */
ActivateContactChannelResponse::ActivateContactChannelResponse(
        const ActivateContactChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMContactsResponse(new ActivateContactChannelResponsePrivate(this), parent)
{
    setRequest(new ActivateContactChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ActivateContactChannelRequest * ActivateContactChannelResponse::request() const
{
    Q_D(const ActivateContactChannelResponse);
    return static_cast<const ActivateContactChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSMContacts ActivateContactChannel \a response.
 */
void ActivateContactChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ActivateContactChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMContacts::ActivateContactChannelResponsePrivate
 * \brief The ActivateContactChannelResponsePrivate class provides private implementation for ActivateContactChannelResponse.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a ActivateContactChannelResponsePrivate object with public implementation \a q.
 */
ActivateContactChannelResponsePrivate::ActivateContactChannelResponsePrivate(
    ActivateContactChannelResponse * const q) : SSMContactsResponsePrivate(q)
{

}

/*!
 * Parses a SSMContacts ActivateContactChannel response element from \a xml.
 */
void ActivateContactChannelResponsePrivate::parseActivateContactChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ActivateContactChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMContacts
} // namespace QtAws
