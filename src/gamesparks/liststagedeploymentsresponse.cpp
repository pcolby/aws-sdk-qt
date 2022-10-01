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

#include "liststagedeploymentsresponse.h"
#include "liststagedeploymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListStageDeploymentsResponse
 * \brief The ListStageDeploymentsResponse class provides an interace for GameSparks ListStageDeployments responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listStageDeployments
 */

/*!
 * Constructs a ListStageDeploymentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStageDeploymentsResponse::ListStageDeploymentsResponse(
        const ListStageDeploymentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new ListStageDeploymentsResponsePrivate(this), parent)
{
    setRequest(new ListStageDeploymentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStageDeploymentsRequest * ListStageDeploymentsResponse::request() const
{
    Q_D(const ListStageDeploymentsResponse);
    return static_cast<const ListStageDeploymentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks ListStageDeployments \a response.
 */
void ListStageDeploymentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStageDeploymentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::ListStageDeploymentsResponsePrivate
 * \brief The ListStageDeploymentsResponsePrivate class provides private implementation for ListStageDeploymentsResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListStageDeploymentsResponsePrivate object with public implementation \a q.
 */
ListStageDeploymentsResponsePrivate::ListStageDeploymentsResponsePrivate(
    ListStageDeploymentsResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks ListStageDeployments response element from \a xml.
 */
void ListStageDeploymentsResponsePrivate::parseListStageDeploymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStageDeploymentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
