// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjobsresponse.h"
#include "listjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::ListJobsResponse
 * \brief The ListJobsResponse class provides an interace for MediaConvert ListJobs responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::listJobs
 */

/*!
 * Constructs a ListJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListJobsResponse::ListJobsResponse(
        const ListJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new ListJobsResponsePrivate(this), parent)
{
    setRequest(new ListJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListJobsRequest * ListJobsResponse::request() const
{
    Q_D(const ListJobsResponse);
    return static_cast<const ListJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert ListJobs \a response.
 */
void ListJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::ListJobsResponsePrivate
 * \brief The ListJobsResponsePrivate class provides private implementation for ListJobsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a ListJobsResponsePrivate object with public implementation \a q.
 */
ListJobsResponsePrivate::ListJobsResponsePrivate(
    ListJobsResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert ListJobs response element from \a xml.
 */
void ListJobsResponsePrivate::parseListJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws
