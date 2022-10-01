// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepartnereventsourceresponse.h"
#include "describepartnereventsourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::DescribePartnerEventSourceResponse
 * \brief The DescribePartnerEventSourceResponse class provides an interace for EventBridge DescribePartnerEventSource responses.
 *
 * \inmodule QtAwsEventBridge
 *
 *  Amazon EventBridge helps you to respond to state changes in your Amazon Web Services resources. When your resources
 *  change state, they automatically send events to an event stream. You can create rules that match selected events in the
 *  stream and route them to targets to take action. You can also use rules to take action on a predetermined schedule. For
 *  example, you can configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance enters
 *  the running
 * 
 *  state> </li> <li>
 * 
 *  Direct specific API records from CloudTrail to an Amazon Kinesis data stream for detailed analysis of potential security
 *  or availability
 * 
 *  risks> </li> <li>
 * 
 *  Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 * 
 *  volume> </li> </ul>
 * 
 *  For more information about the features of Amazon EventBridge, see the <a
 *  href="https://docs.aws.amazon.com/eventbridge/latest/userguide">Amazon EventBridge User
 *
 * \sa EventBridgeClient::describePartnerEventSource
 */

/*!
 * Constructs a DescribePartnerEventSourceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePartnerEventSourceResponse::DescribePartnerEventSourceResponse(
        const DescribePartnerEventSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EventBridgeResponse(new DescribePartnerEventSourceResponsePrivate(this), parent)
{
    setRequest(new DescribePartnerEventSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePartnerEventSourceRequest * DescribePartnerEventSourceResponse::request() const
{
    Q_D(const DescribePartnerEventSourceResponse);
    return static_cast<const DescribePartnerEventSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EventBridge DescribePartnerEventSource \a response.
 */
void DescribePartnerEventSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePartnerEventSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EventBridge::DescribePartnerEventSourceResponsePrivate
 * \brief The DescribePartnerEventSourceResponsePrivate class provides private implementation for DescribePartnerEventSourceResponse.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a DescribePartnerEventSourceResponsePrivate object with public implementation \a q.
 */
DescribePartnerEventSourceResponsePrivate::DescribePartnerEventSourceResponsePrivate(
    DescribePartnerEventSourceResponse * const q) : EventBridgeResponsePrivate(q)
{

}

/*!
 * Parses a EventBridge DescribePartnerEventSource response element from \a xml.
 */
void DescribePartnerEventSourceResponsePrivate::parseDescribePartnerEventSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePartnerEventSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EventBridge
} // namespace QtAws
