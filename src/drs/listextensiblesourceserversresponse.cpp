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

#include "listextensiblesourceserversresponse.h"
#include "listextensiblesourceserversresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::ListExtensibleSourceServersResponse
 * \brief The ListExtensibleSourceServersResponse class provides an interace for Drs ListExtensibleSourceServers responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::listExtensibleSourceServers
 */

/*!
 * Constructs a ListExtensibleSourceServersResponse object for \a reply to \a request, with parent \a parent.
 */
ListExtensibleSourceServersResponse::ListExtensibleSourceServersResponse(
        const ListExtensibleSourceServersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new ListExtensibleSourceServersResponsePrivate(this), parent)
{
    setRequest(new ListExtensibleSourceServersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExtensibleSourceServersRequest * ListExtensibleSourceServersResponse::request() const
{
    Q_D(const ListExtensibleSourceServersResponse);
    return static_cast<const ListExtensibleSourceServersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs ListExtensibleSourceServers \a response.
 */
void ListExtensibleSourceServersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExtensibleSourceServersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::ListExtensibleSourceServersResponsePrivate
 * \brief The ListExtensibleSourceServersResponsePrivate class provides private implementation for ListExtensibleSourceServersResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a ListExtensibleSourceServersResponsePrivate object with public implementation \a q.
 */
ListExtensibleSourceServersResponsePrivate::ListExtensibleSourceServersResponsePrivate(
    ListExtensibleSourceServersResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs ListExtensibleSourceServers response element from \a xml.
 */
void ListExtensibleSourceServersResponsePrivate::parseListExtensibleSourceServersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExtensibleSourceServersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
