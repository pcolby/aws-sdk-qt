/*
    Copyright 2013-2018 Paul Colby

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

#include "describedimensionkeysresponse.h"
#include "describedimensionkeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PI {

/*!
 * \class QtAws::PI::DescribeDimensionKeysResponse
 * \brief The DescribeDimensionKeysResponse class provides an interace for PI DescribeDimensionKeys responses.
 *
 * \inmodule QtAwsPI
 *
 *  AWS Performance Insights enables you to monitor and explore different dimensions of database load based on data captured
 *  from a running RDS instance. The guide provides detailed information about Performance Insights data types, parameters
 *  and errors. For more information about Performance Insights capabilities see <a
 *  href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using Amazon RDS Performance
 *  Insights </a> in the <i>Amazon RDS User
 * 
 *  Guide</i>>
 * 
 *  The AWS Performance Insights API provides visibility into the performance of your RDS instance, when Performance
 *  Insights is enabled for supported engine types. While Amazon CloudWatch provides the authoritative source for AWS
 *  service vended monitoring metrics, AWS Performance Insights offers a domain-specific view of database load measured as
 *  Average Active Sessions and provided to API consumers as a 2-dimensional time-series dataset. The time dimension of the
 *  data provides DB load data for each time point in the queried time range, and each time point decomposes overall load in
 *  relation to the requested dimensions, such as SQL, Wait-event, User or Host, measured at that time
 *
 * \sa PiClient::describeDimensionKeys
 */

/*!
 * Constructs a DescribeDimensionKeysResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDimensionKeysResponse::DescribeDimensionKeysResponse(
        const DescribeDimensionKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PiResponse(new DescribeDimensionKeysResponsePrivate(this), parent)
{
    setRequest(new DescribeDimensionKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDimensionKeysRequest * DescribeDimensionKeysResponse::request() const
{
    Q_D(const DescribeDimensionKeysResponse);
    return static_cast<const DescribeDimensionKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PI DescribeDimensionKeys \a response.
 */
void DescribeDimensionKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDimensionKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PI::DescribeDimensionKeysResponsePrivate
 * \brief The DescribeDimensionKeysResponsePrivate class provides private implementation for DescribeDimensionKeysResponse.
 * \internal
 *
 * \inmodule QtAwsPI
 */

/*!
 * Constructs a DescribeDimensionKeysResponsePrivate object with public implementation \a q.
 */
DescribeDimensionKeysResponsePrivate::DescribeDimensionKeysResponsePrivate(
    DescribeDimensionKeysResponse * const q) : PiResponsePrivate(q)
{

}

/*!
 * Parses a PI DescribeDimensionKeys response element from \a xml.
 */
void DescribeDimensionKeysResponsePrivate::parseDescribeDimensionKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDimensionKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PI
} // namespace QtAws
