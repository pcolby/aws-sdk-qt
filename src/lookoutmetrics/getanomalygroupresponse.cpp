// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const GetAnomalyGroupResponse);
    return static_cast<const GetAnomalyGroupRequest *>(d->request);
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
