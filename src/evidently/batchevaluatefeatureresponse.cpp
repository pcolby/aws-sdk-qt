// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchevaluatefeatureresponse.h"
#include "batchevaluatefeatureresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::BatchEvaluateFeatureResponse
 * \brief The BatchEvaluateFeatureResponse class provides an interace for Evidently BatchEvaluateFeature responses.
 *
 * \inmodule QtAwsEvidently
 *
 *  You can use Amazon CloudWatch Evidently to safely validate new features by serving them to a specified percentage of
 *  your users while you roll out the feature. You can monitor the performance of the new feature to help you decide when to
 *  ramp up traffic to your users. This helps you reduce risk and identify unintended consequences before you fully launch
 *  the
 * 
 *  feature>
 * 
 *  You can also conduct A/B experiments to make feature design decisions based on evidence and data. An experiment can test
 *  as many as five variations at once. Evidently collects experiment data and analyzes it using statistical methods. It
 *  also provides clear recommendations about which variations perform better. You can test both user-facing features and
 *  backend
 *
 * \sa EvidentlyClient::batchEvaluateFeature
 */

/*!
 * Constructs a BatchEvaluateFeatureResponse object for \a reply to \a request, with parent \a parent.
 */
BatchEvaluateFeatureResponse::BatchEvaluateFeatureResponse(
        const BatchEvaluateFeatureRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new BatchEvaluateFeatureResponsePrivate(this), parent)
{
    setRequest(new BatchEvaluateFeatureRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchEvaluateFeatureRequest * BatchEvaluateFeatureResponse::request() const
{
    Q_D(const BatchEvaluateFeatureResponse);
    return static_cast<const BatchEvaluateFeatureRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently BatchEvaluateFeature \a response.
 */
void BatchEvaluateFeatureResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchEvaluateFeatureResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::BatchEvaluateFeatureResponsePrivate
 * \brief The BatchEvaluateFeatureResponsePrivate class provides private implementation for BatchEvaluateFeatureResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a BatchEvaluateFeatureResponsePrivate object with public implementation \a q.
 */
BatchEvaluateFeatureResponsePrivate::BatchEvaluateFeatureResponsePrivate(
    BatchEvaluateFeatureResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently BatchEvaluateFeature response element from \a xml.
 */
void BatchEvaluateFeatureResponsePrivate::parseBatchEvaluateFeatureResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchEvaluateFeatureResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
