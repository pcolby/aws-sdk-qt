// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpackageimportjobsresponse.h"
#include "listpackageimportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListPackageImportJobsResponse
 * \brief The ListPackageImportJobsResponse class provides an interace for Panorama ListPackageImportJobs responses.
 *
 * \inmodule QtAwsPanorama
 *
 *  <fullname>AWS Panorama</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
 *  href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What is AWS Panorama?</a> in the <i>AWS
 *  Panorama Developer
 *
 * \sa PanoramaClient::listPackageImportJobs
 */

/*!
 * Constructs a ListPackageImportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPackageImportJobsResponse::ListPackageImportJobsResponse(
        const ListPackageImportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new ListPackageImportJobsResponsePrivate(this), parent)
{
    setRequest(new ListPackageImportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPackageImportJobsRequest * ListPackageImportJobsResponse::request() const
{
    Q_D(const ListPackageImportJobsResponse);
    return static_cast<const ListPackageImportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama ListPackageImportJobs \a response.
 */
void ListPackageImportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPackageImportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::ListPackageImportJobsResponsePrivate
 * \brief The ListPackageImportJobsResponsePrivate class provides private implementation for ListPackageImportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListPackageImportJobsResponsePrivate object with public implementation \a q.
 */
ListPackageImportJobsResponsePrivate::ListPackageImportJobsResponsePrivate(
    ListPackageImportJobsResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama ListPackageImportJobs response element from \a xml.
 */
void ListPackageImportJobsResponsePrivate::parseListPackageImportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPackageImportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
