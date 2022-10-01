// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listextensionsresponse.h"
#include "listextensionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListExtensionsResponse
 * \brief The ListExtensionsResponse class provides an interace for GameSparks ListExtensions responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listExtensions
 */

/*!
 * Constructs a ListExtensionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListExtensionsResponse::ListExtensionsResponse(
        const ListExtensionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new ListExtensionsResponsePrivate(this), parent)
{
    setRequest(new ListExtensionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExtensionsRequest * ListExtensionsResponse::request() const
{
    Q_D(const ListExtensionsResponse);
    return static_cast<const ListExtensionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks ListExtensions \a response.
 */
void ListExtensionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExtensionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::ListExtensionsResponsePrivate
 * \brief The ListExtensionsResponsePrivate class provides private implementation for ListExtensionsResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListExtensionsResponsePrivate object with public implementation \a q.
 */
ListExtensionsResponsePrivate::ListExtensionsResponsePrivate(
    ListExtensionsResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks ListExtensions response element from \a xml.
 */
void ListExtensionsResponsePrivate::parseListExtensionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExtensionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
