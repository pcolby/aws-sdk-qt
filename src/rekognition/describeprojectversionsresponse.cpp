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

#include "describeprojectversionsresponse.h"
#include "describeprojectversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DescribeProjectVersionsResponse
 * \brief The DescribeProjectVersionsResponse class provides an interace for Rekognition DescribeProjectVersions responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::describeProjectVersions
 */

/*!
 * Constructs a DescribeProjectVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProjectVersionsResponse::DescribeProjectVersionsResponse(
        const DescribeProjectVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DescribeProjectVersionsResponsePrivate(this), parent)
{
    setRequest(new DescribeProjectVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProjectVersionsRequest * DescribeProjectVersionsResponse::request() const
{
    return static_cast<const DescribeProjectVersionsRequest *>(RekognitionResponse::request());
}

/*!
 * \reimp
 * Parses a successful Rekognition DescribeProjectVersions \a response.
 */
void DescribeProjectVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProjectVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::DescribeProjectVersionsResponsePrivate
 * \brief The DescribeProjectVersionsResponsePrivate class provides private implementation for DescribeProjectVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DescribeProjectVersionsResponsePrivate object with public implementation \a q.
 */
DescribeProjectVersionsResponsePrivate::DescribeProjectVersionsResponsePrivate(
    DescribeProjectVersionsResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition DescribeProjectVersions response element from \a xml.
 */
void DescribeProjectVersionsResponsePrivate::parseDescribeProjectVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProjectVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
