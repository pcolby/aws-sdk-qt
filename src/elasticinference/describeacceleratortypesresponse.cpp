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

#include "describeacceleratortypesresponse.h"
#include "describeacceleratortypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticInference {

/*!
 * \class QtAws::ElasticInference::DescribeAcceleratorTypesResponse
 * \brief The DescribeAcceleratorTypesResponse class provides an interace for ElasticInference DescribeAcceleratorTypes responses.
 *
 * \inmodule QtAwsElasticInference
 *
 *  Elastic Inference public APIs.
 *
 * \sa ElasticInferenceClient::describeAcceleratorTypes
 */

/*!
 * Constructs a DescribeAcceleratorTypesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAcceleratorTypesResponse::DescribeAcceleratorTypesResponse(
        const DescribeAcceleratorTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticInferenceResponse(new DescribeAcceleratorTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeAcceleratorTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAcceleratorTypesRequest * DescribeAcceleratorTypesResponse::request() const
{
    Q_D(const DescribeAcceleratorTypesResponse);
    return static_cast<const DescribeAcceleratorTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticInference DescribeAcceleratorTypes \a response.
 */
void DescribeAcceleratorTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAcceleratorTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticInference::DescribeAcceleratorTypesResponsePrivate
 * \brief The DescribeAcceleratorTypesResponsePrivate class provides private implementation for DescribeAcceleratorTypesResponse.
 * \internal
 *
 * \inmodule QtAwsElasticInference
 */

/*!
 * Constructs a DescribeAcceleratorTypesResponsePrivate object with public implementation \a q.
 */
DescribeAcceleratorTypesResponsePrivate::DescribeAcceleratorTypesResponsePrivate(
    DescribeAcceleratorTypesResponse * const q) : ElasticInferenceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticInference DescribeAcceleratorTypes response element from \a xml.
 */
void DescribeAcceleratorTypesResponsePrivate::parseDescribeAcceleratorTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAcceleratorTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticInference
} // namespace QtAws
