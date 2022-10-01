// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeexplainabilityresponse.h"
#include "describeexplainabilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeExplainabilityResponse
 * \brief The DescribeExplainabilityResponse class provides an interace for Forecast DescribeExplainability responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeExplainability
 */

/*!
 * Constructs a DescribeExplainabilityResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeExplainabilityResponse::DescribeExplainabilityResponse(
        const DescribeExplainabilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DescribeExplainabilityResponsePrivate(this), parent)
{
    setRequest(new DescribeExplainabilityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeExplainabilityRequest * DescribeExplainabilityResponse::request() const
{
    Q_D(const DescribeExplainabilityResponse);
    return static_cast<const DescribeExplainabilityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DescribeExplainability \a response.
 */
void DescribeExplainabilityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeExplainabilityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DescribeExplainabilityResponsePrivate
 * \brief The DescribeExplainabilityResponsePrivate class provides private implementation for DescribeExplainabilityResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeExplainabilityResponsePrivate object with public implementation \a q.
 */
DescribeExplainabilityResponsePrivate::DescribeExplainabilityResponsePrivate(
    DescribeExplainabilityResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DescribeExplainability response element from \a xml.
 */
void DescribeExplainabilityResponsePrivate::parseDescribeExplainabilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeExplainabilityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
