/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listnodefromtemplatejobsresponse.h"
#include "listnodefromtemplatejobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListNodeFromTemplateJobsResponse
 * \brief The ListNodeFromTemplateJobsResponse class provides an interace for Panorama ListNodeFromTemplateJobs responses.
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
 * \sa PanoramaClient::listNodeFromTemplateJobs
 */

/*!
 * Constructs a ListNodeFromTemplateJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListNodeFromTemplateJobsResponse::ListNodeFromTemplateJobsResponse(
        const ListNodeFromTemplateJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new ListNodeFromTemplateJobsResponsePrivate(this), parent)
{
    setRequest(new ListNodeFromTemplateJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNodeFromTemplateJobsRequest * ListNodeFromTemplateJobsResponse::request() const
{
    Q_D(const ListNodeFromTemplateJobsResponse);
    return static_cast<const ListNodeFromTemplateJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama ListNodeFromTemplateJobs \a response.
 */
void ListNodeFromTemplateJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNodeFromTemplateJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::ListNodeFromTemplateJobsResponsePrivate
 * \brief The ListNodeFromTemplateJobsResponsePrivate class provides private implementation for ListNodeFromTemplateJobsResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListNodeFromTemplateJobsResponsePrivate object with public implementation \a q.
 */
ListNodeFromTemplateJobsResponsePrivate::ListNodeFromTemplateJobsResponsePrivate(
    ListNodeFromTemplateJobsResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama ListNodeFromTemplateJobs response element from \a xml.
 */
void ListNodeFromTemplateJobsResponsePrivate::parseListNodeFromTemplateJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNodeFromTemplateJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
