// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listextensionversionsresponse.h"
#include "listextensionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListExtensionVersionsResponse
 * \brief The ListExtensionVersionsResponse class provides an interace for GameSparks ListExtensionVersions responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listExtensionVersions
 */

/*!
 * Constructs a ListExtensionVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListExtensionVersionsResponse::ListExtensionVersionsResponse(
        const ListExtensionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new ListExtensionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListExtensionVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExtensionVersionsRequest * ListExtensionVersionsResponse::request() const
{
    Q_D(const ListExtensionVersionsResponse);
    return static_cast<const ListExtensionVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks ListExtensionVersions \a response.
 */
void ListExtensionVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExtensionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::ListExtensionVersionsResponsePrivate
 * \brief The ListExtensionVersionsResponsePrivate class provides private implementation for ListExtensionVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListExtensionVersionsResponsePrivate object with public implementation \a q.
 */
ListExtensionVersionsResponsePrivate::ListExtensionVersionsResponsePrivate(
    ListExtensionVersionsResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks ListExtensionVersions response element from \a xml.
 */
void ListExtensionVersionsResponsePrivate::parseListExtensionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExtensionVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
