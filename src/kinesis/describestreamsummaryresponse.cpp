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

#include "describestreamsummaryresponse.h"
#include "describestreamsummaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DescribeStreamSummaryResponse
 * \brief The DescribeStreamSummaryResponse class provides an interace for Kinesis DescribeStreamSummary responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::describeStreamSummary
 */

/*!
 * Constructs a DescribeStreamSummaryResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeStreamSummaryResponse::DescribeStreamSummaryResponse(
        const DescribeStreamSummaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new DescribeStreamSummaryResponsePrivate(this), parent)
{
    setRequest(new DescribeStreamSummaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeStreamSummaryRequest * DescribeStreamSummaryResponse::request() const
{
    Q_D(const DescribeStreamSummaryResponse);
    return static_cast<const DescribeStreamSummaryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis DescribeStreamSummary \a response.
 */
void DescribeStreamSummaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeStreamSummaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::DescribeStreamSummaryResponsePrivate
 * \brief The DescribeStreamSummaryResponsePrivate class provides private implementation for DescribeStreamSummaryResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DescribeStreamSummaryResponsePrivate object with public implementation \a q.
 */
DescribeStreamSummaryResponsePrivate::DescribeStreamSummaryResponsePrivate(
    DescribeStreamSummaryResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis DescribeStreamSummary response element from \a xml.
 */
void DescribeStreamSummaryResponsePrivate::parseDescribeStreamSummaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStreamSummaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
