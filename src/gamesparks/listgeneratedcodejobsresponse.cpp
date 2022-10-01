// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgeneratedcodejobsresponse.h"
#include "listgeneratedcodejobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListGeneratedCodeJobsResponse
 * \brief The ListGeneratedCodeJobsResponse class provides an interace for GameSparks ListGeneratedCodeJobs responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listGeneratedCodeJobs
 */

/*!
 * Constructs a ListGeneratedCodeJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListGeneratedCodeJobsResponse::ListGeneratedCodeJobsResponse(
        const ListGeneratedCodeJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new ListGeneratedCodeJobsResponsePrivate(this), parent)
{
    setRequest(new ListGeneratedCodeJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGeneratedCodeJobsRequest * ListGeneratedCodeJobsResponse::request() const
{
    Q_D(const ListGeneratedCodeJobsResponse);
    return static_cast<const ListGeneratedCodeJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks ListGeneratedCodeJobs \a response.
 */
void ListGeneratedCodeJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListGeneratedCodeJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::ListGeneratedCodeJobsResponsePrivate
 * \brief The ListGeneratedCodeJobsResponsePrivate class provides private implementation for ListGeneratedCodeJobsResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListGeneratedCodeJobsResponsePrivate object with public implementation \a q.
 */
ListGeneratedCodeJobsResponsePrivate::ListGeneratedCodeJobsResponsePrivate(
    ListGeneratedCodeJobsResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks ListGeneratedCodeJobs response element from \a xml.
 */
void ListGeneratedCodeJobsResponsePrivate::parseListGeneratedCodeJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGeneratedCodeJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
