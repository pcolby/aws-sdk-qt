// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describealertresponse.h"
#include "describealertresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DescribeAlertResponse
 * \brief The DescribeAlertResponse class provides an interace for LookoutMetrics DescribeAlert responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::describeAlert
 */

/*!
 * Constructs a DescribeAlertResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAlertResponse::DescribeAlertResponse(
        const DescribeAlertRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new DescribeAlertResponsePrivate(this), parent)
{
    setRequest(new DescribeAlertRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAlertRequest * DescribeAlertResponse::request() const
{
    Q_D(const DescribeAlertResponse);
    return static_cast<const DescribeAlertRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics DescribeAlert \a response.
 */
void DescribeAlertResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAlertResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::DescribeAlertResponsePrivate
 * \brief The DescribeAlertResponsePrivate class provides private implementation for DescribeAlertResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DescribeAlertResponsePrivate object with public implementation \a q.
 */
DescribeAlertResponsePrivate::DescribeAlertResponsePrivate(
    DescribeAlertResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics DescribeAlert response element from \a xml.
 */
void DescribeAlertResponsePrivate::parseDescribeAlertResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAlertResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
