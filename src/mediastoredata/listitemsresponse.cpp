// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listitemsresponse.h"
#include "listitemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::ListItemsResponse
 * \brief The ListItemsResponse class provides an interace for MediaStoreData ListItems responses.
 *
 * \inmodule QtAwsMediaStoreData
 *
 *  An AWS Elemental MediaStore asset is an object, similar to an object in the Amazon S3 service. Objects are the
 *  fundamental entities that are stored in AWS Elemental
 *
 * \sa MediaStoreDataClient::listItems
 */

/*!
 * Constructs a ListItemsResponse object for \a reply to \a request, with parent \a parent.
 */
ListItemsResponse::ListItemsResponse(
        const ListItemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreDataResponse(new ListItemsResponsePrivate(this), parent)
{
    setRequest(new ListItemsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListItemsRequest * ListItemsResponse::request() const
{
    Q_D(const ListItemsResponse);
    return static_cast<const ListItemsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStoreData ListItems \a response.
 */
void ListItemsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListItemsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStoreData::ListItemsResponsePrivate
 * \brief The ListItemsResponsePrivate class provides private implementation for ListItemsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStoreData
 */

/*!
 * Constructs a ListItemsResponsePrivate object with public implementation \a q.
 */
ListItemsResponsePrivate::ListItemsResponsePrivate(
    ListItemsResponse * const q) : MediaStoreDataResponsePrivate(q)
{

}

/*!
 * Parses a MediaStoreData ListItems response element from \a xml.
 */
void ListItemsResponsePrivate::parseListItemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListItemsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStoreData
} // namespace QtAws
