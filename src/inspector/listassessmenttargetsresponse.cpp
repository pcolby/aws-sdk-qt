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

#include "listassessmenttargetsresponse.h"
#include "listassessmenttargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/**
 * @class  ListAssessmentTargetsResponse
 *
 * @brief  Handles Inspector ListAssessmentTargets responses.
 *
 * @see    InspectorClient::listAssessmentTargets
 */

/**
 * @brief  Constructs a new ListAssessmentTargetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAssessmentTargetsResponse::ListAssessmentTargetsResponse(
        const ListAssessmentTargetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new ListAssessmentTargetsResponsePrivate(this), parent)
{
    setRequest(new ListAssessmentTargetsRequest(request));
    setReply(reply);
}

const ListAssessmentTargetsRequest * ListAssessmentTargetsResponse::request() const
{
    Q_D(const ListAssessmentTargetsResponse);
    return static_cast<const ListAssessmentTargetsRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector ListAssessmentTargets response.
 *
 * @param  response  Response to parse.
 */
void ListAssessmentTargetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAssessmentTargetsResponsePrivate
 *
 * @brief  Private implementation for ListAssessmentTargetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAssessmentTargetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAssessmentTargetsResponse instance.
 */
ListAssessmentTargetsResponsePrivate::ListAssessmentTargetsResponsePrivate(
    ListAssessmentTargetsQueueResponse * const q) : ListAssessmentTargetsPrivate(q)
{

}

/**
 * @brief  Parse an Inspector ListAssessmentTargetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAssessmentTargetsResponsePrivate::ListAssessmentTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssessmentTargetsResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
