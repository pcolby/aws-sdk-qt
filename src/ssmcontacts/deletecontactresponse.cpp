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

#include "deletecontactresponse.h"
#include "deletecontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::DeleteContactResponse
 * \brief The DeleteContactResponse class provides an interace for SSMContacts DeleteContact responses.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::deleteContact
 */

/*!
 * Constructs a DeleteContactResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteContactResponse::DeleteContactResponse(
        const DeleteContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMContactsResponse(new DeleteContactResponsePrivate(this), parent)
{
    setRequest(new DeleteContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteContactRequest * DeleteContactResponse::request() const
{
    Q_D(const DeleteContactResponse);
    return static_cast<const DeleteContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSMContacts DeleteContact \a response.
 */
void DeleteContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMContacts::DeleteContactResponsePrivate
 * \brief The DeleteContactResponsePrivate class provides private implementation for DeleteContactResponse.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a DeleteContactResponsePrivate object with public implementation \a q.
 */
DeleteContactResponsePrivate::DeleteContactResponsePrivate(
    DeleteContactResponse * const q) : SSMContactsResponsePrivate(q)
{

}

/*!
 * Parses a SSMContacts DeleteContact response element from \a xml.
 */
void DeleteContactResponsePrivate::parseDeleteContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMContacts
} // namespace QtAws
