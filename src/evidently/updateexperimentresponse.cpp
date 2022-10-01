// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateexperimentresponse.h"
#include "updateexperimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::UpdateExperimentResponse
 * \brief The UpdateExperimentResponse class provides an interace for Evidently UpdateExperiment responses.
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
 * \sa EvidentlyClient::updateExperiment
 */

/*!
 * Constructs a UpdateExperimentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateExperimentResponse::UpdateExperimentResponse(
        const UpdateExperimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new UpdateExperimentResponsePrivate(this), parent)
{
    setRequest(new UpdateExperimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateExperimentRequest * UpdateExperimentResponse::request() const
{
    Q_D(const UpdateExperimentResponse);
    return static_cast<const UpdateExperimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently UpdateExperiment \a response.
 */
void UpdateExperimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateExperimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::UpdateExperimentResponsePrivate
 * \brief The UpdateExperimentResponsePrivate class provides private implementation for UpdateExperimentResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a UpdateExperimentResponsePrivate object with public implementation \a q.
 */
UpdateExperimentResponsePrivate::UpdateExperimentResponsePrivate(
    UpdateExperimentResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently UpdateExperiment response element from \a xml.
 */
void UpdateExperimentResponsePrivate::parseUpdateExperimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateExperimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
