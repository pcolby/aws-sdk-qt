// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
