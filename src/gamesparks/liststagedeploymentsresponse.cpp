// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
