// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
