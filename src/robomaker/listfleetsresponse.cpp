// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfleetsresponse.h"
#include "listfleetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListFleetsResponse
 * \brief The ListFleetsResponse class provides an interace for RoboMaker ListFleets responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listFleets
 */

/*!
 * Constructs a ListFleetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFleetsResponse::ListFleetsResponse(
        const ListFleetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListFleetsResponsePrivate(this), parent)
{
    setRequest(new ListFleetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFleetsRequest * ListFleetsResponse::request() const
{
    Q_D(const ListFleetsResponse);
    return static_cast<const ListFleetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListFleets \a response.
 */
void ListFleetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFleetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListFleetsResponsePrivate
 * \brief The ListFleetsResponsePrivate class provides private implementation for ListFleetsResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListFleetsResponsePrivate object with public implementation \a q.
 */
ListFleetsResponsePrivate::ListFleetsResponsePrivate(
    ListFleetsResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListFleets response element from \a xml.
 */
void ListFleetsResponsePrivate::parseListFleetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFleetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
