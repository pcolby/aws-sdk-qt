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

#include "createmetricsetresponse.h"
#include "createmetricsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::CreateMetricSetResponse
 * \brief The CreateMetricSetResponse class provides an interace for LookoutMetrics CreateMetricSet responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::createMetricSet
 */

/*!
 * Constructs a CreateMetricSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMetricSetResponse::CreateMetricSetResponse(
        const CreateMetricSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new CreateMetricSetResponsePrivate(this), parent)
{
    setRequest(new CreateMetricSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMetricSetRequest * CreateMetricSetResponse::request() const
{
    return static_cast<const CreateMetricSetRequest *>(LookoutMetricsResponse::request());
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics CreateMetricSet \a response.
 */
void CreateMetricSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMetricSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::CreateMetricSetResponsePrivate
 * \brief The CreateMetricSetResponsePrivate class provides private implementation for CreateMetricSetResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a CreateMetricSetResponsePrivate object with public implementation \a q.
 */
CreateMetricSetResponsePrivate::CreateMetricSetResponsePrivate(
    CreateMetricSetResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics CreateMetricSet response element from \a xml.
 */
void CreateMetricSetResponsePrivate::parseCreateMetricSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMetricSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
