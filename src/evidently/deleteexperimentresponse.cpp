// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteexperimentresponse.h"
#include "deleteexperimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::DeleteExperimentResponse
 * \brief The DeleteExperimentResponse class provides an interace for Evidently DeleteExperiment responses.
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
 * \sa EvidentlyClient::deleteExperiment
 */

/*!
 * Constructs a DeleteExperimentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteExperimentResponse::DeleteExperimentResponse(
        const DeleteExperimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new DeleteExperimentResponsePrivate(this), parent)
{
    setRequest(new DeleteExperimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteExperimentRequest * DeleteExperimentResponse::request() const
{
    Q_D(const DeleteExperimentResponse);
    return static_cast<const DeleteExperimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently DeleteExperiment \a response.
 */
void DeleteExperimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteExperimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::DeleteExperimentResponsePrivate
 * \brief The DeleteExperimentResponsePrivate class provides private implementation for DeleteExperimentResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a DeleteExperimentResponsePrivate object with public implementation \a q.
 */
DeleteExperimentResponsePrivate::DeleteExperimentResponsePrivate(
    DeleteExperimentResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently DeleteExperiment response element from \a xml.
 */
void DeleteExperimentResponsePrivate::parseDeleteExperimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteExperimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
