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

#include "describedetectorresponse.h"
#include "describedetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DescribeDetectorResponse
 * \brief The DescribeDetectorResponse class provides an interace for FraudDetector DescribeDetector responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::describeDetector
 */

/*!
 * Constructs a DescribeDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDetectorResponse::DescribeDetectorResponse(
        const DescribeDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new DescribeDetectorResponsePrivate(this), parent)
{
    setRequest(new DescribeDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDetectorRequest * DescribeDetectorResponse::request() const
{
    Q_D(const DescribeDetectorResponse);
    return static_cast<const DescribeDetectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector DescribeDetector \a response.
 */
void DescribeDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::DescribeDetectorResponsePrivate
 * \brief The DescribeDetectorResponsePrivate class provides private implementation for DescribeDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DescribeDetectorResponsePrivate object with public implementation \a q.
 */
DescribeDetectorResponsePrivate::DescribeDetectorResponsePrivate(
    DescribeDetectorResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector DescribeDetector response element from \a xml.
 */
void DescribeDetectorResponsePrivate::parseDescribeDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
