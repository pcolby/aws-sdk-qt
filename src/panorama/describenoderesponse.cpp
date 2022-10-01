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

#include "describenoderesponse.h"
#include "describenoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DescribeNodeResponse
 * \brief The DescribeNodeResponse class provides an interace for Panorama DescribeNode responses.
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
 * \sa PanoramaClient::describeNode
 */

/*!
 * Constructs a DescribeNodeResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeNodeResponse::DescribeNodeResponse(
        const DescribeNodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new DescribeNodeResponsePrivate(this), parent)
{
    setRequest(new DescribeNodeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeNodeRequest * DescribeNodeResponse::request() const
{
    Q_D(const DescribeNodeResponse);
    return static_cast<const DescribeNodeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama DescribeNode \a response.
 */
void DescribeNodeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeNodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::DescribeNodeResponsePrivate
 * \brief The DescribeNodeResponsePrivate class provides private implementation for DescribeNodeResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DescribeNodeResponsePrivate object with public implementation \a q.
 */
DescribeNodeResponsePrivate::DescribeNodeResponsePrivate(
    DescribeNodeResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama DescribeNode response element from \a xml.
 */
void DescribeNodeResponsePrivate::parseDescribeNodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNodeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
