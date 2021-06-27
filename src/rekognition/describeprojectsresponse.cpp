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

#include "describeprojectsresponse.h"
#include "describeprojectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DescribeProjectsResponse
 * \brief The DescribeProjectsResponse class provides an interace for Rekognition DescribeProjects responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::describeProjects
 */

/*!
 * Constructs a DescribeProjectsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProjectsResponse::DescribeProjectsResponse(
        const DescribeProjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DescribeProjectsResponsePrivate(this), parent)
{
    setRequest(new DescribeProjectsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProjectsRequest * DescribeProjectsResponse::request() const
{
    return static_cast<const DescribeProjectsRequest *>(RekognitionResponse::request());
}

/*!
 * \reimp
 * Parses a successful Rekognition DescribeProjects \a response.
 */
void DescribeProjectsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProjectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::DescribeProjectsResponsePrivate
 * \brief The DescribeProjectsResponsePrivate class provides private implementation for DescribeProjectsResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DescribeProjectsResponsePrivate object with public implementation \a q.
 */
DescribeProjectsResponsePrivate::DescribeProjectsResponsePrivate(
    DescribeProjectsResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition DescribeProjects response element from \a xml.
 */
void DescribeProjectsResponsePrivate::parseDescribeProjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProjectsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
