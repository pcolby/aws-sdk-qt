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

#include "listcontainersresponse.h"
#include "listcontainersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::ListContainersResponse
 * \brief The ListContainersResponse class provides an interace for MediaStore ListContainers responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::listContainers
 */

/*!
 * Constructs a ListContainersResponse object for \a reply to \a request, with parent \a parent.
 */
ListContainersResponse::ListContainersResponse(
        const ListContainersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new ListContainersResponsePrivate(this), parent)
{
    setRequest(new ListContainersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListContainersRequest * ListContainersResponse::request() const
{
    Q_D(const ListContainersResponse);
    return static_cast<const ListContainersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore ListContainers \a response.
 */
void ListContainersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListContainersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::ListContainersResponsePrivate
 * \brief The ListContainersResponsePrivate class provides private implementation for ListContainersResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a ListContainersResponsePrivate object with public implementation \a q.
 */
ListContainersResponsePrivate::ListContainersResponsePrivate(
    ListContainersResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore ListContainers response element from \a xml.
 */
void ListContainersResponsePrivate::parseListContainersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListContainersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
