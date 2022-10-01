// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsimulationjobsresponse.h"
#include "listsimulationjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListSimulationJobsResponse
 * \brief The ListSimulationJobsResponse class provides an interace for RoboMaker ListSimulationJobs responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listSimulationJobs
 */

/*!
 * Constructs a ListSimulationJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSimulationJobsResponse::ListSimulationJobsResponse(
        const ListSimulationJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListSimulationJobsResponsePrivate(this), parent)
{
    setRequest(new ListSimulationJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSimulationJobsRequest * ListSimulationJobsResponse::request() const
{
    Q_D(const ListSimulationJobsResponse);
    return static_cast<const ListSimulationJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListSimulationJobs \a response.
 */
void ListSimulationJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSimulationJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListSimulationJobsResponsePrivate
 * \brief The ListSimulationJobsResponsePrivate class provides private implementation for ListSimulationJobsResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListSimulationJobsResponsePrivate object with public implementation \a q.
 */
ListSimulationJobsResponsePrivate::ListSimulationJobsResponsePrivate(
    ListSimulationJobsResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListSimulationJobs response element from \a xml.
 */
void ListSimulationJobsResponsePrivate::parseListSimulationJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSimulationJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
