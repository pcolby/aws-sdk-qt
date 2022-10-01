// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listharvestjobsresponse.h"
#include "listharvestjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::ListHarvestJobsResponse
 * \brief The ListHarvestJobsResponse class provides an interace for MediaPackage ListHarvestJobs responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::listHarvestJobs
 */

/*!
 * Constructs a ListHarvestJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListHarvestJobsResponse::ListHarvestJobsResponse(
        const ListHarvestJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new ListHarvestJobsResponsePrivate(this), parent)
{
    setRequest(new ListHarvestJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHarvestJobsRequest * ListHarvestJobsResponse::request() const
{
    Q_D(const ListHarvestJobsResponse);
    return static_cast<const ListHarvestJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage ListHarvestJobs \a response.
 */
void ListHarvestJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListHarvestJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::ListHarvestJobsResponsePrivate
 * \brief The ListHarvestJobsResponsePrivate class provides private implementation for ListHarvestJobsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a ListHarvestJobsResponsePrivate object with public implementation \a q.
 */
ListHarvestJobsResponsePrivate::ListHarvestJobsResponsePrivate(
    ListHarvestJobsResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage ListHarvestJobs response element from \a xml.
 */
void ListHarvestJobsResponsePrivate::parseListHarvestJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHarvestJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
