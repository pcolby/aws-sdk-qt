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

#include "countopenworkflowexecutionsresponse.h"
#include "countopenworkflowexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/**
 * @class  CountOpenWorkflowExecutionsResponse
 *
 * @brief  Handles SWF CountOpenWorkflowExecutions responses.
 *
 * @see    SWFClient::countOpenWorkflowExecutions
 */

/**
 * @brief  Constructs a new CountOpenWorkflowExecutionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CountOpenWorkflowExecutionsResponse::CountOpenWorkflowExecutionsResponse(
        const CountOpenWorkflowExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new CountOpenWorkflowExecutionsResponsePrivate(this), parent)
{
    setRequest(new CountOpenWorkflowExecutionsRequest(request));
    setReply(reply);
}

const CountOpenWorkflowExecutionsRequest * CountOpenWorkflowExecutionsResponse::request() const
{
    Q_D(const CountOpenWorkflowExecutionsResponse);
    return static_cast<const CountOpenWorkflowExecutionsRequest *>(d->request);
}

/**
 * @brief  Parse a SWF CountOpenWorkflowExecutions response.
 *
 * @param  response  Response to parse.
 */
void CountOpenWorkflowExecutionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(CountOpenWorkflowExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CountOpenWorkflowExecutionsResponsePrivate
 *
 * @brief  Private implementation for CountOpenWorkflowExecutionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CountOpenWorkflowExecutionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CountOpenWorkflowExecutionsResponse instance.
 */
CountOpenWorkflowExecutionsResponsePrivate::CountOpenWorkflowExecutionsResponsePrivate(
    CountOpenWorkflowExecutionsResponse * const q) : SWFResponsePrivate(q)
{

}

/**
 * @brief  Parse an SWF CountOpenWorkflowExecutionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CountOpenWorkflowExecutionsResponsePrivate::CountOpenWorkflowExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CountOpenWorkflowExecutionsResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
