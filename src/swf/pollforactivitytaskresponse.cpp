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

#include "pollforactivitytaskresponse.h"
#include "pollforactivitytaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::PollForActivityTaskResponse
 *
 * \brief The PollForActivityTaskResponse class encapsulates SWF PollForActivityTask responses.
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
 * \sa SWFClient::pollForActivityTask
 */

/*!
 * @brief  Constructs a new PollForActivityTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PollForActivityTaskResponse::PollForActivityTaskResponse(
        const PollForActivityTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new PollForActivityTaskResponsePrivate(this), parent)
{
    setRequest(new PollForActivityTaskRequest(request));
    setReply(reply);
}

const PollForActivityTaskRequest * PollForActivityTaskResponse::request() const
{
    Q_D(const PollForActivityTaskResponse);
    return static_cast<const PollForActivityTaskRequest *>(d->request);
}

/*!
 * @brief  Parse a SWF PollForActivityTask response.
 *
 * @param  response  Response to parse.
 */
void PollForActivityTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(PollForActivityTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PollForActivityTaskResponsePrivate
 *
 * \brief Private implementation for PollForActivityTaskResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PollForActivityTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PollForActivityTaskResponse instance.
 */
PollForActivityTaskResponsePrivate::PollForActivityTaskResponsePrivate(
    PollForActivityTaskResponse * const q) : SWFResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SWF PollForActivityTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PollForActivityTaskResponsePrivate::parsePollForActivityTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PollForActivityTaskResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
