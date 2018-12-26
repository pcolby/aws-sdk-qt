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

#include "describeflowresponse.h"
#include "describeflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::DescribeFlowResponse
 * \brief The DescribeFlowResponse class provides an interace for MediaConnect DescribeFlow responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::describeFlow
 */

/*!
 * Constructs a DescribeFlowResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFlowResponse::DescribeFlowResponse(
        const DescribeFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new DescribeFlowResponsePrivate(this), parent)
{
    setRequest(new DescribeFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFlowRequest * DescribeFlowResponse::request() const
{
    Q_D(const DescribeFlowResponse);
    return static_cast<const DescribeFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect DescribeFlow \a response.
 */
void DescribeFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::DescribeFlowResponsePrivate
 * \brief The DescribeFlowResponsePrivate class provides private implementation for DescribeFlowResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a DescribeFlowResponsePrivate object with public implementation \a q.
 */
DescribeFlowResponsePrivate::DescribeFlowResponsePrivate(
    DescribeFlowResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect DescribeFlow response element from \a xml.
 */
void DescribeFlowResponsePrivate::parseDescribeFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
