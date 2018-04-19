/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "disassociatecontactfromaddressbookresponse.h"
#include "disassociatecontactfromaddressbookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DisassociateContactFromAddressBookResponse
 * \brief The DisassociateContactFromAddressBookResponse class provides an interace for AlexaForBusiness DisassociateContactFromAddressBook responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::disassociateContactFromAddressBook
 */

/*!
 * Constructs a DisassociateContactFromAddressBookResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateContactFromAddressBookResponse::DisassociateContactFromAddressBookResponse(
        const DisassociateContactFromAddressBookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DisassociateContactFromAddressBookResponsePrivate(this), parent)
{
    setRequest(new DisassociateContactFromAddressBookRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateContactFromAddressBookRequest * DisassociateContactFromAddressBookResponse::request() const
{
    Q_D(const DisassociateContactFromAddressBookResponse);
    return static_cast<const DisassociateContactFromAddressBookRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DisassociateContactFromAddressBook \a response.
 */
void DisassociateContactFromAddressBookResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateContactFromAddressBookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DisassociateContactFromAddressBookResponsePrivate
 * \brief The DisassociateContactFromAddressBookResponsePrivate class provides private implementation for DisassociateContactFromAddressBookResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DisassociateContactFromAddressBookResponsePrivate object with public implementation \a q.
 */
DisassociateContactFromAddressBookResponsePrivate::DisassociateContactFromAddressBookResponsePrivate(
    DisassociateContactFromAddressBookResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DisassociateContactFromAddressBook response element from \a xml.
 */
void DisassociateContactFromAddressBookResponsePrivate::parseDisassociateContactFromAddressBookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateContactFromAddressBookResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
