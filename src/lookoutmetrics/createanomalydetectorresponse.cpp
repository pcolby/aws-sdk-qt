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

#include "createanomalydetectorresponse.h"
#include "createanomalydetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::CreateAnomalyDetectorResponse
 * \brief The CreateAnomalyDetectorResponse class provides an interace for LookoutMetrics CreateAnomalyDetector responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::createAnomalyDetector
 */

/*!
 * Constructs a CreateAnomalyDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAnomalyDetectorResponse::CreateAnomalyDetectorResponse(
        const CreateAnomalyDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new CreateAnomalyDetectorResponsePrivate(this), parent)
{
    setRequest(new CreateAnomalyDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAnomalyDetectorRequest * CreateAnomalyDetectorResponse::request() const
{
    return static_cast<const CreateAnomalyDetectorRequest *>(LookoutMetricsResponse::request());
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics CreateAnomalyDetector \a response.
 */
void CreateAnomalyDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAnomalyDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::CreateAnomalyDetectorResponsePrivate
 * \brief The CreateAnomalyDetectorResponsePrivate class provides private implementation for CreateAnomalyDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a CreateAnomalyDetectorResponsePrivate object with public implementation \a q.
 */
CreateAnomalyDetectorResponsePrivate::CreateAnomalyDetectorResponsePrivate(
    CreateAnomalyDetectorResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics CreateAnomalyDetector response element from \a xml.
 */
void CreateAnomalyDetectorResponsePrivate::parseCreateAnomalyDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAnomalyDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
