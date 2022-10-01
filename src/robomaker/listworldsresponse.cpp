// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworldsresponse.h"
#include "listworldsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListWorldsResponse
 * \brief The ListWorldsResponse class provides an interace for RoboMaker ListWorlds responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listWorlds
 */

/*!
 * Constructs a ListWorldsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorldsResponse::ListWorldsResponse(
        const ListWorldsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListWorldsResponsePrivate(this), parent)
{
    setRequest(new ListWorldsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorldsRequest * ListWorldsResponse::request() const
{
    Q_D(const ListWorldsResponse);
    return static_cast<const ListWorldsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListWorlds \a response.
 */
void ListWorldsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorldsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListWorldsResponsePrivate
 * \brief The ListWorldsResponsePrivate class provides private implementation for ListWorldsResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListWorldsResponsePrivate object with public implementation \a q.
 */
ListWorldsResponsePrivate::ListWorldsResponsePrivate(
    ListWorldsResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListWorlds response element from \a xml.
 */
void ListWorldsResponsePrivate::parseListWorldsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorldsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
