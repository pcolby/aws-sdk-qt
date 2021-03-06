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

#include "describecontactflowresponse.h"
#include "describecontactflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DescribeContactFlowResponse
 * \brief The DescribeContactFlowResponse class provides an interace for Connect DescribeContactFlow responses.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an AWS service by using an endpoint. For a list of Amazon Connect endpoints, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with contact flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::describeContactFlow
 */

/*!
 * Constructs a DescribeContactFlowResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeContactFlowResponse::DescribeContactFlowResponse(
        const DescribeContactFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new DescribeContactFlowResponsePrivate(this), parent)
{
    setRequest(new DescribeContactFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeContactFlowRequest * DescribeContactFlowResponse::request() const
{
    Q_D(const DescribeContactFlowResponse);
    return static_cast<const DescribeContactFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect DescribeContactFlow \a response.
 */
void DescribeContactFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeContactFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::DescribeContactFlowResponsePrivate
 * \brief The DescribeContactFlowResponsePrivate class provides private implementation for DescribeContactFlowResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DescribeContactFlowResponsePrivate object with public implementation \a q.
 */
DescribeContactFlowResponsePrivate::DescribeContactFlowResponsePrivate(
    DescribeContactFlowResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect DescribeContactFlow response element from \a xml.
 */
void DescribeContactFlowResponsePrivate::parseDescribeContactFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeContactFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
