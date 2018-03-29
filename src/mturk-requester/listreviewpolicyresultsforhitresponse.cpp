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

#include "listreviewpolicyresultsforhitresponse.h"
#include "listreviewpolicyresultsforhitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/**
 * @class  ListReviewPolicyResultsForHITResponse
 *
 * @brief  Handles MTurk ListReviewPolicyResultsForHIT responses.
 *
 * @see    MTurkClient::listReviewPolicyResultsForHIT
 */

/**
 * @brief  Constructs a new ListReviewPolicyResultsForHITResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListReviewPolicyResultsForHITResponse::ListReviewPolicyResultsForHITResponse(
        const ListReviewPolicyResultsForHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListReviewPolicyResultsForHITResponsePrivate(this), parent)
{
    setRequest(new ListReviewPolicyResultsForHITRequest(request));
    setReply(reply);
}

const ListReviewPolicyResultsForHITRequest * ListReviewPolicyResultsForHITResponse::request() const
{
    Q_D(const ListReviewPolicyResultsForHITResponse);
    return static_cast<const ListReviewPolicyResultsForHITRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk ListReviewPolicyResultsForHIT response.
 *
 * @param  response  Response to parse.
 */
void ListReviewPolicyResultsForHITResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListReviewPolicyResultsForHITResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListReviewPolicyResultsForHITResponsePrivate
 *
 * @brief  Private implementation for ListReviewPolicyResultsForHITResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListReviewPolicyResultsForHITResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListReviewPolicyResultsForHITResponse instance.
 */
ListReviewPolicyResultsForHITResponsePrivate::ListReviewPolicyResultsForHITResponsePrivate(
    ListReviewPolicyResultsForHITResponse * const q) : MTurkResponsePrivate(q)
{

}

/**
 * @brief  Parse an MTurk ListReviewPolicyResultsForHITResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListReviewPolicyResultsForHITResponsePrivate::ListReviewPolicyResultsForHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReviewPolicyResultsForHITResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
