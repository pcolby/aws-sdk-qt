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

#include "listenvironmentsresponse.h"
#include "listenvironmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace finspace {

/*!
 * \class QtAws::finspace::ListEnvironmentsResponse
 * \brief The ListEnvironmentsResponse class provides an interace for finspace ListEnvironments responses.
 *
 * \inmodule QtAwsfinspace
 *
 *  The FinSpace management service provides the APIs for managing the FinSpace environments.
 *
 * \sa finspaceClient::listEnvironments
 */

/*!
 * Constructs a ListEnvironmentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEnvironmentsResponse::ListEnvironmentsResponse(
        const ListEnvironmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : finspaceResponse(new ListEnvironmentsResponsePrivate(this), parent)
{
    setRequest(new ListEnvironmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEnvironmentsRequest * ListEnvironmentsResponse::request() const
{
    Q_D(const ListEnvironmentsResponse);
    return static_cast<const ListEnvironmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful finspace ListEnvironments \a response.
 */
void ListEnvironmentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEnvironmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::finspace::ListEnvironmentsResponsePrivate
 * \brief The ListEnvironmentsResponsePrivate class provides private implementation for ListEnvironmentsResponse.
 * \internal
 *
 * \inmodule QtAwsfinspace
 */

/*!
 * Constructs a ListEnvironmentsResponsePrivate object with public implementation \a q.
 */
ListEnvironmentsResponsePrivate::ListEnvironmentsResponsePrivate(
    ListEnvironmentsResponse * const q) : finspaceResponsePrivate(q)
{

}

/*!
 * Parses a finspace ListEnvironments response element from \a xml.
 */
void ListEnvironmentsResponsePrivate::parseListEnvironmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEnvironmentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace finspace
} // namespace QtAws
