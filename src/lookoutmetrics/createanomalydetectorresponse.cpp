// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const CreateAnomalyDetectorResponse);
    return static_cast<const CreateAnomalyDetectorRequest *>(d->request);
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
