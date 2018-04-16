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

#include "countpendingdecisiontasksresponse.h"
#include "countpendingdecisiontasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::CountPendingDecisionTasksResponse
 *
 * \brief The CountPendingDecisionTasksResponse class provides an interace for SWF CountPendingDecisionTasks responses.
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
 * \sa SWFClient::countPendingDecisionTasks
 */

/*!
 * @brief  Constructs a new CountPendingDecisionTasksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CountPendingDecisionTasksResponse::CountPendingDecisionTasksResponse(
        const CountPendingDecisionTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new CountPendingDecisionTasksResponsePrivate(this), parent)
{
    setRequest(new CountPendingDecisionTasksRequest(request));
    setReply(reply);
}

const CountPendingDecisionTasksRequest * CountPendingDecisionTasksResponse::request() const
{
    Q_D(const CountPendingDecisionTasksResponse);
    return static_cast<const CountPendingDecisionTasksRequest *>(d->request);
}

/*!
 * @brief  Parse a SWF CountPendingDecisionTasks response.
 *
 * @param  response  Response to parse.
 */
void CountPendingDecisionTasksResponse::parseSuccess(QIODevice &response)
{
    Q_D(CountPendingDecisionTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CountPendingDecisionTasksResponsePrivate
 *
 * \brief Private implementation for CountPendingDecisionTasksResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CountPendingDecisionTasksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CountPendingDecisionTasksResponse instance.
 */
CountPendingDecisionTasksResponsePrivate::CountPendingDecisionTasksResponsePrivate(
    CountPendingDecisionTasksResponse * const q) : SWFResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SWF CountPendingDecisionTasksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CountPendingDecisionTasksResponsePrivate::parseCountPendingDecisionTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CountPendingDecisionTasksResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
