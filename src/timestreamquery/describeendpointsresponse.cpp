// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeendpointsresponse.h"
#include "describeendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamQuery {

/*!
 * \class QtAws::TimestreamQuery::DescribeEndpointsResponse
 * \brief The DescribeEndpointsResponse class provides an interace for TimestreamQuery DescribeEndpoints responses.
 *
 * \inmodule QtAwsTimestreamQuery
 *
 *  <fullname>Amazon Timestream Query </fullname>
 *
 * \sa TimestreamQueryClient::describeEndpoints
 */

/*!
 * Constructs a DescribeEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEndpointsResponse::DescribeEndpointsResponse(
        const DescribeEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamQueryResponse(new DescribeEndpointsResponsePrivate(this), parent)
{
    setRequest(new DescribeEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEndpointsRequest * DescribeEndpointsResponse::request() const
{
    Q_D(const DescribeEndpointsResponse);
    return static_cast<const DescribeEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamQuery DescribeEndpoints \a response.
 */
void DescribeEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamQuery::DescribeEndpointsResponsePrivate
 * \brief The DescribeEndpointsResponsePrivate class provides private implementation for DescribeEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamQuery
 */

/*!
 * Constructs a DescribeEndpointsResponsePrivate object with public implementation \a q.
 */
DescribeEndpointsResponsePrivate::DescribeEndpointsResponsePrivate(
    DescribeEndpointsResponse * const q) : TimestreamQueryResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamQuery DescribeEndpoints response element from \a xml.
 */
void DescribeEndpointsResponsePrivate::parseDescribeEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamQuery
} // namespace QtAws
