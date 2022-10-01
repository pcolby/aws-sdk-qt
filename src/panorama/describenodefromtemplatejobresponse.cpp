// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
