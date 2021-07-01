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

#include "describeacceleratorsresponse.h"
#include "describeacceleratorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticInference {

/*!
 * \class QtAws::ElasticInference::DescribeAcceleratorsResponse
 * \brief The DescribeAcceleratorsResponse class provides an interace for ElasticInference DescribeAccelerators responses.
 *
 * \inmodule QtAwsElasticInference
 *
 *  Elastic Inference public APIs.
 *
 * \sa ElasticInferenceClient::describeAccelerators
 */

/*!
 * Constructs a DescribeAcceleratorsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAcceleratorsResponse::DescribeAcceleratorsResponse(
        const DescribeAcceleratorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticInferenceResponse(new DescribeAcceleratorsResponsePrivate(this), parent)
{
    setRequest(new DescribeAcceleratorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAcceleratorsRequest * DescribeAcceleratorsResponse::request() const
{
    Q_D(const DescribeAcceleratorsResponse);
    return static_cast<const DescribeAcceleratorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticInference DescribeAccelerators \a response.
 */
void DescribeAcceleratorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAcceleratorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticInference::DescribeAcceleratorsResponsePrivate
 * \brief The DescribeAcceleratorsResponsePrivate class provides private implementation for DescribeAcceleratorsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticInference
 */

/*!
 * Constructs a DescribeAcceleratorsResponsePrivate object with public implementation \a q.
 */
DescribeAcceleratorsResponsePrivate::DescribeAcceleratorsResponsePrivate(
    DescribeAcceleratorsResponse * const q) : ElasticInferenceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticInference DescribeAccelerators response element from \a xml.
 */
void DescribeAcceleratorsResponsePrivate::parseDescribeAcceleratorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAcceleratorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticInference
} // namespace QtAws
