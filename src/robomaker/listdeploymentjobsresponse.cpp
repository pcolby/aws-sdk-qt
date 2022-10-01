// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeploymentjobsresponse.h"
#include "listdeploymentjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListDeploymentJobsResponse
 * \brief The ListDeploymentJobsResponse class provides an interace for RoboMaker ListDeploymentJobs responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listDeploymentJobs
 */

/*!
 * Constructs a ListDeploymentJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeploymentJobsResponse::ListDeploymentJobsResponse(
        const ListDeploymentJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListDeploymentJobsResponsePrivate(this), parent)
{
    setRequest(new ListDeploymentJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDeploymentJobsRequest * ListDeploymentJobsResponse::request() const
{
    Q_D(const ListDeploymentJobsResponse);
    return static_cast<const ListDeploymentJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListDeploymentJobs \a response.
 */
void ListDeploymentJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeploymentJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListDeploymentJobsResponsePrivate
 * \brief The ListDeploymentJobsResponsePrivate class provides private implementation for ListDeploymentJobsResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListDeploymentJobsResponsePrivate object with public implementation \a q.
 */
ListDeploymentJobsResponsePrivate::ListDeploymentJobsResponsePrivate(
    ListDeploymentJobsResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListDeploymentJobs response element from \a xml.
 */
void ListDeploymentJobsResponsePrivate::parseListDeploymentJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeploymentJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
