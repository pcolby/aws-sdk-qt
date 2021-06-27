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

#include "createcontactchannelresponse.h"
#include "createcontactchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::CreateContactChannelResponse
 * \brief The CreateContactChannelResponse class provides an interace for SSMContacts CreateContactChannel responses.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::createContactChannel
 */

/*!
 * Constructs a CreateContactChannelResponse object for \a reply to \a request, with parent \a parent.
 */
CreateContactChannelResponse::CreateContactChannelResponse(
        const CreateContactChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMContactsResponse(new CreateContactChannelResponsePrivate(this), parent)
{
    setRequest(new CreateContactChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateContactChannelRequest * CreateContactChannelResponse::request() const
{
    return static_cast<const CreateContactChannelRequest *>(SSMContactsResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSMContacts CreateContactChannel \a response.
 */
void CreateContactChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateContactChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMContacts::CreateContactChannelResponsePrivate
 * \brief The CreateContactChannelResponsePrivate class provides private implementation for CreateContactChannelResponse.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a CreateContactChannelResponsePrivate object with public implementation \a q.
 */
CreateContactChannelResponsePrivate::CreateContactChannelResponsePrivate(
    CreateContactChannelResponse * const q) : SSMContactsResponsePrivate(q)
{

}

/*!
 * Parses a SSMContacts CreateContactChannel response element from \a xml.
 */
void CreateContactChannelResponsePrivate::parseCreateContactChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateContactChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMContacts
} // namespace QtAws
