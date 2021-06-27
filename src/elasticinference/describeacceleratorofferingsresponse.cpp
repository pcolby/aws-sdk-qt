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

#include "describeacceleratorofferingsresponse.h"
#include "describeacceleratorofferingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticInference {

/*!
 * \class QtAws::ElasticInference::DescribeAcceleratorOfferingsResponse
 * \brief The DescribeAcceleratorOfferingsResponse class provides an interace for ElasticInference DescribeAcceleratorOfferings responses.
 *
 * \inmodule QtAwsElasticInference
 *
 *  Elastic Inference public APIs.
 *
 * \sa ElasticInferenceClient::describeAcceleratorOfferings
 */

/*!
 * Constructs a DescribeAcceleratorOfferingsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAcceleratorOfferingsResponse::DescribeAcceleratorOfferingsResponse(
        const DescribeAcceleratorOfferingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticInferenceResponse(new DescribeAcceleratorOfferingsResponsePrivate(this), parent)
{
    setRequest(new DescribeAcceleratorOfferingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAcceleratorOfferingsRequest * DescribeAcceleratorOfferingsResponse::request() const
{
    return static_cast<const DescribeAcceleratorOfferingsRequest *>(ElasticInferenceResponse::request());
}

/*!
 * \reimp
 * Parses a successful ElasticInference DescribeAcceleratorOfferings \a response.
 */
void DescribeAcceleratorOfferingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAcceleratorOfferingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticInference::DescribeAcceleratorOfferingsResponsePrivate
 * \brief The DescribeAcceleratorOfferingsResponsePrivate class provides private implementation for DescribeAcceleratorOfferingsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticInference
 */

/*!
 * Constructs a DescribeAcceleratorOfferingsResponsePrivate object with public implementation \a q.
 */
DescribeAcceleratorOfferingsResponsePrivate::DescribeAcceleratorOfferingsResponsePrivate(
    DescribeAcceleratorOfferingsResponse * const q) : ElasticInferenceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticInference DescribeAcceleratorOfferings response element from \a xml.
 */
void DescribeAcceleratorOfferingsResponsePrivate::parseDescribeAcceleratorOfferingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAcceleratorOfferingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticInference
} // namespace QtAws
