// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicesjobsresponse.h"
#include "listdevicesjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListDevicesJobsResponse
 * \brief The ListDevicesJobsResponse class provides an interace for Panorama ListDevicesJobs responses.
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
 * \sa PanoramaClient::listDevicesJobs
 */

/*!
 * Constructs a ListDevicesJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDevicesJobsResponse::ListDevicesJobsResponse(
        const ListDevicesJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new ListDevicesJobsResponsePrivate(this), parent)
{
    setRequest(new ListDevicesJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDevicesJobsRequest * ListDevicesJobsResponse::request() const
{
    Q_D(const ListDevicesJobsResponse);
    return static_cast<const ListDevicesJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama ListDevicesJobs \a response.
 */
void ListDevicesJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDevicesJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::ListDevicesJobsResponsePrivate
 * \brief The ListDevicesJobsResponsePrivate class provides private implementation for ListDevicesJobsResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListDevicesJobsResponsePrivate object with public implementation \a q.
 */
ListDevicesJobsResponsePrivate::ListDevicesJobsResponsePrivate(
    ListDevicesJobsResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama ListDevicesJobs response element from \a xml.
 */
void ListDevicesJobsResponsePrivate::parseListDevicesJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDevicesJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
