// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
