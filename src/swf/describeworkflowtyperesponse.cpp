// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworkflowtyperesponse.h"
#include "describeworkflowtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::DescribeWorkflowTypeResponse
 * \brief The DescribeWorkflowTypeResponse class provides an interace for Swf DescribeWorkflowType responses.
 *
 * \inmodule QtAwsSwf
 *
 *  <fullname>Amazon Simple Workflow Service</fullname>
 * 
 *  The Amazon Simple Workflow Service (Amazon SWF) makes it easy to build applications that use Amazon's cloud to
 *  coordinate work across distributed components. In Amazon SWF, a <i>task</i> represents a logical unit of work that is
 *  performed by a component of your workflow. Coordinating tasks in a workflow involves managing intertask dependencies,
 *  scheduling, and concurrency in accordance with the logical flow of the
 * 
 *  application>
 * 
 *  Amazon SWF gives you full control over implementing tasks and coordinating them without worrying about underlying
 *  complexities such as tracking their progress and maintaining their
 * 
 *  state>
 * 
 *  This documentation serves as reference only. For a broader overview of the Amazon SWF programming model, see the <i> <a
 *  href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SwfClient::describeWorkflowType
 */

/*!
 * Constructs a DescribeWorkflowTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkflowTypeResponse::DescribeWorkflowTypeResponse(
        const DescribeWorkflowTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new DescribeWorkflowTypeResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkflowTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkflowTypeRequest * DescribeWorkflowTypeResponse::request() const
{
    Q_D(const DescribeWorkflowTypeResponse);
    return static_cast<const DescribeWorkflowTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf DescribeWorkflowType \a response.
 */
void DescribeWorkflowTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkflowTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::DescribeWorkflowTypeResponsePrivate
 * \brief The DescribeWorkflowTypeResponsePrivate class provides private implementation for DescribeWorkflowTypeResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a DescribeWorkflowTypeResponsePrivate object with public implementation \a q.
 */
DescribeWorkflowTypeResponsePrivate::DescribeWorkflowTypeResponsePrivate(
    DescribeWorkflowTypeResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf DescribeWorkflowType response element from \a xml.
 */
void DescribeWorkflowTypeResponsePrivate::parseDescribeWorkflowTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkflowTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
