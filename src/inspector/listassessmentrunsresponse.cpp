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

#include "listassessmentrunsresponse.h"
#include "listassessmentrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/**
 * @class  ListAssessmentRunsResponse
 *
 * @brief  Handles Inspector ListAssessmentRuns responses.
 *
 * @see    InspectorClient::listAssessmentRuns
 */

/**
 * @brief  Constructs a new ListAssessmentRunsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAssessmentRunsResponse::ListAssessmentRunsResponse(
        const ListAssessmentRunsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new ListAssessmentRunsResponsePrivate(this), parent)
{
    setRequest(new ListAssessmentRunsRequest(request));
    setReply(reply);
}

const ListAssessmentRunsRequest * ListAssessmentRunsResponse::request() const
{
    Q_D(const ListAssessmentRunsResponse);
    return static_cast<const ListAssessmentRunsRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector ListAssessmentRuns response.
 *
 * @param  response  Response to parse.
 */
void ListAssessmentRunsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListAssessmentRunsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAssessmentRunsResponsePrivate
 *
 * @brief  Private implementation for ListAssessmentRunsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAssessmentRunsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAssessmentRunsResponse instance.
 */
ListAssessmentRunsResponsePrivate::ListAssessmentRunsResponsePrivate(
    ListAssessmentRunsResponse * const q) : InspectorResponsePrivate(q)
{

}

/**
 * @brief  Parse an Inspector ListAssessmentRunsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAssessmentRunsResponsePrivate::ListAssessmentRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssessmentRunsResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
