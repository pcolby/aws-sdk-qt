// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrobotapplicationsresponse.h"
#include "listrobotapplicationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListRobotApplicationsResponse
 * \brief The ListRobotApplicationsResponse class provides an interace for RoboMaker ListRobotApplications responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listRobotApplications
 */

/*!
 * Constructs a ListRobotApplicationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRobotApplicationsResponse::ListRobotApplicationsResponse(
        const ListRobotApplicationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListRobotApplicationsResponsePrivate(this), parent)
{
    setRequest(new ListRobotApplicationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRobotApplicationsRequest * ListRobotApplicationsResponse::request() const
{
    Q_D(const ListRobotApplicationsResponse);
    return static_cast<const ListRobotApplicationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListRobotApplications \a response.
 */
void ListRobotApplicationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRobotApplicationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListRobotApplicationsResponsePrivate
 * \brief The ListRobotApplicationsResponsePrivate class provides private implementation for ListRobotApplicationsResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListRobotApplicationsResponsePrivate object with public implementation \a q.
 */
ListRobotApplicationsResponsePrivate::ListRobotApplicationsResponsePrivate(
    ListRobotApplicationsResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListRobotApplications response element from \a xml.
 */
void ListRobotApplicationsResponsePrivate::parseListRobotApplicationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRobotApplicationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
