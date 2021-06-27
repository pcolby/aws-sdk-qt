/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getanomalygroupresponse.h"
#include "getanomalygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::GetAnomalyGroupResponse
 * \brief The GetAnomalyGroupResponse class provides an interace for LookoutMetrics GetAnomalyGroup responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::getAnomalyGroup
 */

/*!
 * Constructs a GetAnomalyGroupResponse object for \a reply to \a request, with parent \a parent.
 */
GetAnomalyGroupResponse::GetAnomalyGroupResponse(
        const GetAnomalyGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new GetAnomalyGroupResponsePrivate(this), parent)
{
    setRequest(new GetAnomalyGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAnomalyGroupRequest * GetAnomalyGroupResponse::request() const
{
    return static_cast<const GetAnomalyGroupRequest *>(LookoutMetricsResponse::request());
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics GetAnomalyGroup \a response.
 */
void GetAnomalyGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAnomalyGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::GetAnomalyGroupResponsePrivate
 * \brief The GetAnomalyGroupResponsePrivate class provides private implementation for GetAnomalyGroupResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a GetAnomalyGroupResponsePrivate object with public implementation \a q.
 */
GetAnomalyGroupResponsePrivate::GetAnomalyGroupResponsePrivate(
    GetAnomalyGroupResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics GetAnomalyGroup response element from \a xml.
 */
void GetAnomalyGroupResponsePrivate::parseGetAnomalyGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAnomalyGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
