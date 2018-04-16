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

#include "listassessmentrunagentsresponse.h"
#include "listassessmentrunagentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListAssessmentRunAgentsResponse
 *
 * \brief The ListAssessmentRunAgentsResponse class provides an interace for Inspector ListAssessmentRunAgents responses.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listAssessmentRunAgents
 */

/*!
 * @brief  Constructs a new ListAssessmentRunAgentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAssessmentRunAgentsResponse::ListAssessmentRunAgentsResponse(
        const ListAssessmentRunAgentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new ListAssessmentRunAgentsResponsePrivate(this), parent)
{
    setRequest(new ListAssessmentRunAgentsRequest(request));
    setReply(reply);
}

const ListAssessmentRunAgentsRequest * ListAssessmentRunAgentsResponse::request() const
{
    Q_D(const ListAssessmentRunAgentsResponse);
    return static_cast<const ListAssessmentRunAgentsRequest *>(d->request);
}

/*!
 * @brief  Parse a Inspector ListAssessmentRunAgents response.
 *
 * @param  response  Response to parse.
 */
void ListAssessmentRunAgentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListAssessmentRunAgentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListAssessmentRunAgentsResponsePrivate
 *
 * \brief Private implementation for ListAssessmentRunAgentsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListAssessmentRunAgentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAssessmentRunAgentsResponse instance.
 */
ListAssessmentRunAgentsResponsePrivate::ListAssessmentRunAgentsResponsePrivate(
    ListAssessmentRunAgentsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Inspector ListAssessmentRunAgentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAssessmentRunAgentsResponsePrivate::parseListAssessmentRunAgentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssessmentRunAgentsResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
