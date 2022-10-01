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

#include "describenodefromtemplatejobresponse.h"
#include "describenodefromtemplatejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribeNodeFromTemplateJobResponse
 * \brief The DescribeNodeFromTemplateJobResponse class provides an interace for Panorama DescribeNodeFromTemplateJob responses.
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
 * \sa PanoramaClient::describeNodeFromTemplateJob
 */

/*!
 * Constructs a DescribeNodeFromTemplateJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeNodeFromTemplateJobResponse::DescribeNodeFromTemplateJobResponse(
        const DescribeNodeFromTemplateJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new DescribeNodeFromTemplateJobResponsePrivate(this), parent)
{
    setRequest(new DescribeNodeFromTemplateJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeNodeFromTemplateJobRequest * DescribeNodeFromTemplateJobResponse::request() const
{
    Q_D(const DescribeNodeFromTemplateJobResponse);
    return static_cast<const DescribeNodeFromTemplateJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama DescribeNodeFromTemplateJob \a response.
 */
void DescribeNodeFromTemplateJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeNodeFromTemplateJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::DescribeNodeFromTemplateJobResponsePrivate
 * \brief The DescribeNodeFromTemplateJobResponsePrivate class provides private implementation for DescribeNodeFromTemplateJobResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribeNodeFromTemplateJobResponsePrivate object with public implementation \a q.
 */
DescribeNodeFromTemplateJobResponsePrivate::DescribeNodeFromTemplateJobResponsePrivate(
    DescribeNodeFromTemplateJobResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama DescribeNodeFromTemplateJob response element from \a xml.
 */
void DescribeNodeFromTemplateJobResponsePrivate::parseDescribeNodeFromTemplateJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNodeFromTemplateJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
