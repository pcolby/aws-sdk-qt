// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworldexportjobsresponse.h"
#include "listworldexportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListWorldExportJobsResponse
 * \brief The ListWorldExportJobsResponse class provides an interace for RoboMaker ListWorldExportJobs responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listWorldExportJobs
 */

/*!
 * Constructs a ListWorldExportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorldExportJobsResponse::ListWorldExportJobsResponse(
        const ListWorldExportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListWorldExportJobsResponsePrivate(this), parent)
{
    setRequest(new ListWorldExportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorldExportJobsRequest * ListWorldExportJobsResponse::request() const
{
    Q_D(const ListWorldExportJobsResponse);
    return static_cast<const ListWorldExportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListWorldExportJobs \a response.
 */
void ListWorldExportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorldExportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListWorldExportJobsResponsePrivate
 * \brief The ListWorldExportJobsResponsePrivate class provides private implementation for ListWorldExportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListWorldExportJobsResponsePrivate object with public implementation \a q.
 */
ListWorldExportJobsResponsePrivate::ListWorldExportJobsResponsePrivate(
    ListWorldExportJobsResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListWorldExportJobs response element from \a xml.
 */
void ListWorldExportJobsResponsePrivate::parseListWorldExportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorldExportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
