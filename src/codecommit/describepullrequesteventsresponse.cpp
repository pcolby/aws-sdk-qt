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

#include "describepullrequesteventsresponse.h"
#include "describepullrequesteventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  DescribePullRequestEventsResponse
 *
 * @brief  Handles CodeCommit DescribePullRequestEvents responses.
 *
 * @see    CodeCommitClient::describePullRequestEvents
 */

/**
 * @brief  Constructs a new DescribePullRequestEventsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePullRequestEventsResponse::DescribePullRequestEventsResponse(
        const DescribePullRequestEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new DescribePullRequestEventsResponsePrivate(this), parent)
{
    setRequest(new DescribePullRequestEventsRequest(request));
    setReply(reply);
}

const DescribePullRequestEventsRequest * DescribePullRequestEventsResponse::request() const
{
    Q_D(const DescribePullRequestEventsResponse);
    return static_cast<const DescribePullRequestEventsRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit DescribePullRequestEvents response.
 *
 * @param  response  Response to parse.
 */
void DescribePullRequestEventsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribePullRequestEventsResponsePrivate
 *
 * @brief  Private implementation for DescribePullRequestEventsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePullRequestEventsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribePullRequestEventsResponse instance.
 */
DescribePullRequestEventsResponsePrivate::DescribePullRequestEventsResponsePrivate(
    DescribePullRequestEventsResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit DescribePullRequestEventsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribePullRequestEventsResponsePrivate::DescribePullRequestEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePullRequestEventsResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
