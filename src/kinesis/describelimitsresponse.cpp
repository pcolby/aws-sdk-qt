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

#include "describelimitsresponse.h"
#include "describelimitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DescribeLimitsResponse
 * \brief The DescribeLimitsResponse class provides an interace for Kinesis DescribeLimits responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::describeLimits
 */

/*!
 * Constructs a DescribeLimitsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLimitsResponse::DescribeLimitsResponse(
        const DescribeLimitsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new DescribeLimitsResponsePrivate(this), parent)
{
    setRequest(new DescribeLimitsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLimitsRequest * DescribeLimitsResponse::request() const
{
    Q_D(const DescribeLimitsResponse);
    return static_cast<const DescribeLimitsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis DescribeLimits \a response.
 */
void DescribeLimitsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLimitsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::DescribeLimitsResponsePrivate
 * \brief The DescribeLimitsResponsePrivate class provides private implementation for DescribeLimitsResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DescribeLimitsResponsePrivate object with public implementation \a q.
 */
DescribeLimitsResponsePrivate::DescribeLimitsResponsePrivate(
    DescribeLimitsResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis DescribeLimits response element from \a xml.
 */
void DescribeLimitsResponsePrivate::parseDescribeLimitsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLimitsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
