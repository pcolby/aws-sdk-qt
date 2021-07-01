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

#include "describemodelversionsresponse.h"
#include "describemodelversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DescribeModelVersionsResponse
 * \brief The DescribeModelVersionsResponse class provides an interace for FraudDetector DescribeModelVersions responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::describeModelVersions
 */

/*!
 * Constructs a DescribeModelVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeModelVersionsResponse::DescribeModelVersionsResponse(
        const DescribeModelVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new DescribeModelVersionsResponsePrivate(this), parent)
{
    setRequest(new DescribeModelVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeModelVersionsRequest * DescribeModelVersionsResponse::request() const
{
    Q_D(const DescribeModelVersionsResponse);
    return static_cast<const DescribeModelVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector DescribeModelVersions \a response.
 */
void DescribeModelVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeModelVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::DescribeModelVersionsResponsePrivate
 * \brief The DescribeModelVersionsResponsePrivate class provides private implementation for DescribeModelVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DescribeModelVersionsResponsePrivate object with public implementation \a q.
 */
DescribeModelVersionsResponsePrivate::DescribeModelVersionsResponsePrivate(
    DescribeModelVersionsResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector DescribeModelVersions response element from \a xml.
 */
void DescribeModelVersionsResponsePrivate::parseDescribeModelVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeModelVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
