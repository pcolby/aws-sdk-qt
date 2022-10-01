// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createexperimentresponse.h"
#include "createexperimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::CreateExperimentResponse
 * \brief The CreateExperimentResponse class provides an interace for Evidently CreateExperiment responses.
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
 * \sa EvidentlyClient::createExperiment
 */

/*!
 * Constructs a CreateExperimentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateExperimentResponse::CreateExperimentResponse(
        const CreateExperimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new CreateExperimentResponsePrivate(this), parent)
{
    setRequest(new CreateExperimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateExperimentRequest * CreateExperimentResponse::request() const
{
    Q_D(const CreateExperimentResponse);
    return static_cast<const CreateExperimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently CreateExperiment \a response.
 */
void CreateExperimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateExperimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::CreateExperimentResponsePrivate
 * \brief The CreateExperimentResponsePrivate class provides private implementation for CreateExperimentResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a CreateExperimentResponsePrivate object with public implementation \a q.
 */
CreateExperimentResponsePrivate::CreateExperimentResponsePrivate(
    CreateExperimentResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently CreateExperiment response element from \a xml.
 */
void CreateExperimentResponsePrivate::parseCreateExperimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateExperimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
