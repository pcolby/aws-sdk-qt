// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "evaluatefeatureresponse.h"
#include "evaluatefeatureresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::EvaluateFeatureResponse
 * \brief The EvaluateFeatureResponse class provides an interace for Evidently EvaluateFeature responses.
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
 * \sa EvidentlyClient::evaluateFeature
 */

/*!
 * Constructs a EvaluateFeatureResponse object for \a reply to \a request, with parent \a parent.
 */
EvaluateFeatureResponse::EvaluateFeatureResponse(
        const EvaluateFeatureRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new EvaluateFeatureResponsePrivate(this), parent)
{
    setRequest(new EvaluateFeatureRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EvaluateFeatureRequest * EvaluateFeatureResponse::request() const
{
    Q_D(const EvaluateFeatureResponse);
    return static_cast<const EvaluateFeatureRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently EvaluateFeature \a response.
 */
void EvaluateFeatureResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EvaluateFeatureResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::EvaluateFeatureResponsePrivate
 * \brief The EvaluateFeatureResponsePrivate class provides private implementation for EvaluateFeatureResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a EvaluateFeatureResponsePrivate object with public implementation \a q.
 */
EvaluateFeatureResponsePrivate::EvaluateFeatureResponsePrivate(
    EvaluateFeatureResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently EvaluateFeature response element from \a xml.
 */
void EvaluateFeatureResponsePrivate::parseEvaluateFeatureResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EvaluateFeatureResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
