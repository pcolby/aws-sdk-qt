// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsampledataresponse.h"
#include "getsampledataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::GetSampleDataResponse
 * \brief The GetSampleDataResponse class provides an interace for LookoutMetrics GetSampleData responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::getSampleData
 */

/*!
 * Constructs a GetSampleDataResponse object for \a reply to \a request, with parent \a parent.
 */
GetSampleDataResponse::GetSampleDataResponse(
        const GetSampleDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new GetSampleDataResponsePrivate(this), parent)
{
    setRequest(new GetSampleDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSampleDataRequest * GetSampleDataResponse::request() const
{
    Q_D(const GetSampleDataResponse);
    return static_cast<const GetSampleDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics GetSampleData \a response.
 */
void GetSampleDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSampleDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::GetSampleDataResponsePrivate
 * \brief The GetSampleDataResponsePrivate class provides private implementation for GetSampleDataResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a GetSampleDataResponsePrivate object with public implementation \a q.
 */
GetSampleDataResponsePrivate::GetSampleDataResponsePrivate(
    GetSampleDataResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics GetSampleData response element from \a xml.
 */
void GetSampleDataResponsePrivate::parseGetSampleDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSampleDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
