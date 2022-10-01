// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworldgenerationjobsresponse.h"
#include "listworldgenerationjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListWorldGenerationJobsResponse
 * \brief The ListWorldGenerationJobsResponse class provides an interace for RoboMaker ListWorldGenerationJobs responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listWorldGenerationJobs
 */

/*!
 * Constructs a ListWorldGenerationJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorldGenerationJobsResponse::ListWorldGenerationJobsResponse(
        const ListWorldGenerationJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListWorldGenerationJobsResponsePrivate(this), parent)
{
    setRequest(new ListWorldGenerationJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorldGenerationJobsRequest * ListWorldGenerationJobsResponse::request() const
{
    Q_D(const ListWorldGenerationJobsResponse);
    return static_cast<const ListWorldGenerationJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListWorldGenerationJobs \a response.
 */
void ListWorldGenerationJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorldGenerationJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListWorldGenerationJobsResponsePrivate
 * \brief The ListWorldGenerationJobsResponsePrivate class provides private implementation for ListWorldGenerationJobsResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListWorldGenerationJobsResponsePrivate object with public implementation \a q.
 */
ListWorldGenerationJobsResponsePrivate::ListWorldGenerationJobsResponsePrivate(
    ListWorldGenerationJobsResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListWorldGenerationJobs response element from \a xml.
 */
void ListWorldGenerationJobsResponsePrivate::parseListWorldGenerationJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorldGenerationJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
