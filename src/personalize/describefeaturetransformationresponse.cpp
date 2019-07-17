/*
    Copyright 2013-2019 Paul Colby

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

#include "describefeaturetransformationresponse.h"
#include "describefeaturetransformationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeFeatureTransformationResponse
 * \brief The DescribeFeatureTransformationResponse class provides an interace for Personalize DescribeFeatureTransformation responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeFeatureTransformation
 */

/*!
 * Constructs a DescribeFeatureTransformationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFeatureTransformationResponse::DescribeFeatureTransformationResponse(
        const DescribeFeatureTransformationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DescribeFeatureTransformationResponsePrivate(this), parent)
{
    setRequest(new DescribeFeatureTransformationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFeatureTransformationRequest * DescribeFeatureTransformationResponse::request() const
{
    Q_D(const DescribeFeatureTransformationResponse);
    return static_cast<const DescribeFeatureTransformationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DescribeFeatureTransformation \a response.
 */
void DescribeFeatureTransformationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFeatureTransformationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DescribeFeatureTransformationResponsePrivate
 * \brief The DescribeFeatureTransformationResponsePrivate class provides private implementation for DescribeFeatureTransformationResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeFeatureTransformationResponsePrivate object with public implementation \a q.
 */
DescribeFeatureTransformationResponsePrivate::DescribeFeatureTransformationResponsePrivate(
    DescribeFeatureTransformationResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DescribeFeatureTransformation response element from \a xml.
 */
void DescribeFeatureTransformationResponsePrivate::parseDescribeFeatureTransformationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFeatureTransformationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
