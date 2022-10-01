// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const CreateMetricSetResponse);
    return static_cast<const CreateMetricSetRequest *>(d->request);
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
