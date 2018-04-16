/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "terminateworkflowexecutionresponse.h"
#include "terminateworkflowexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::TerminateWorkflowExecutionResponse
 *
 * \brief The TerminateWorkflowExecutionResponse class encapsulates SWF TerminateWorkflowExecution responses.
 *
 * \ingroup SWF
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
 *  href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SWFClient::terminateWorkflowExecution
 */

/*!
 * @brief  Constructs a new TerminateWorkflowExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TerminateWorkflowExecutionResponse::TerminateWorkflowExecutionResponse(
        const TerminateWorkflowExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new TerminateWorkflowExecutionResponsePrivate(this), parent)
{
    setRequest(new TerminateWorkflowExecutionRequest(request));
    setReply(reply);
}

const TerminateWorkflowExecutionRequest * TerminateWorkflowExecutionResponse::request() const
{
    Q_D(const TerminateWorkflowExecutionResponse);
    return static_cast<const TerminateWorkflowExecutionRequest *>(d->request);
}

/*!
 * @brief  Parse a SWF TerminateWorkflowExecution response.
 *
 * @param  response  Response to parse.
 */
void TerminateWorkflowExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(TerminateWorkflowExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class TerminateWorkflowExecutionResponsePrivate
 *
 * \brief Private implementation for TerminateWorkflowExecutionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new TerminateWorkflowExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TerminateWorkflowExecutionResponse instance.
 */
TerminateWorkflowExecutionResponsePrivate::TerminateWorkflowExecutionResponsePrivate(
    TerminateWorkflowExecutionResponse * const q) : SWFResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SWF TerminateWorkflowExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TerminateWorkflowExecutionResponsePrivate::parseTerminateWorkflowExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateWorkflowExecutionResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
