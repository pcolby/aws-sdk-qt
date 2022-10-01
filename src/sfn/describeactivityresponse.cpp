// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeactivityresponse.h"
#include "describeactivityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sfn {

/*!
 * \class QtAws::Sfn::DescribeActivityResponse
 * \brief The DescribeActivityResponse class provides an interace for Sfn DescribeActivity responses.
 *
 * \inmodule QtAwsSfn
 *
 *  <fullname>AWS Step Functions</fullname>
 * 
 *  AWS Step Functions is a service that lets you coordinate the components of distributed applications and microservices
 *  using visual
 * 
 *  workflows>
 * 
 *  You can use Step Functions to build applications from individual components, each of which performs a discrete function,
 *  or <i>task</i>, allowing you to scale and change applications quickly. Step Functions provides a console that helps
 *  visualize the components of your application as a series of steps. Step Functions automatically triggers and tracks each
 *  step, and retries steps when there are errors, so your application executes predictably and in the right order every
 *  time. Step Functions logs the state of each step, so you can quickly diagnose and debug any
 * 
 *  issues>
 * 
 *  Step Functions manages operations and underlying infrastructure to ensure your application is available at any scale.
 *  You can run tasks on AWS, your own servers, or any system that has access to AWS. You can access and use Step Functions
 *  using the console, the AWS SDKs, or an HTTP API. For more information about Step Functions, see the <i> <a
 *  href="https://docs.aws.amazon.com/step-functions/latest/dg/welcome.html">AWS Step Functions Developer Guide</a>
 *
 * \sa SfnClient::describeActivity
 */

/*!
 * Constructs a DescribeActivityResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeActivityResponse::DescribeActivityResponse(
        const DescribeActivityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SfnResponse(new DescribeActivityResponsePrivate(this), parent)
{
    setRequest(new DescribeActivityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeActivityRequest * DescribeActivityResponse::request() const
{
    Q_D(const DescribeActivityResponse);
    return static_cast<const DescribeActivityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sfn DescribeActivity \a response.
 */
void DescribeActivityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeActivityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sfn::DescribeActivityResponsePrivate
 * \brief The DescribeActivityResponsePrivate class provides private implementation for DescribeActivityResponse.
 * \internal
 *
 * \inmodule QtAwsSfn
 */

/*!
 * Constructs a DescribeActivityResponsePrivate object with public implementation \a q.
 */
DescribeActivityResponsePrivate::DescribeActivityResponsePrivate(
    DescribeActivityResponse * const q) : SfnResponsePrivate(q)
{

}

/*!
 * Parses a Sfn DescribeActivity response element from \a xml.
 */
void DescribeActivityResponsePrivate::parseDescribeActivityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeActivityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sfn
} // namespace QtAws
