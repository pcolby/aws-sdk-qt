// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getexperimentresponse.h"
#include "getexperimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::GetExperimentResponse
 * \brief The GetExperimentResponse class provides an interace for Evidently GetExperiment responses.
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
 * \sa EvidentlyClient::getExperiment
 */

/*!
 * Constructs a GetExperimentResponse object for \a reply to \a request, with parent \a parent.
 */
GetExperimentResponse::GetExperimentResponse(
        const GetExperimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new GetExperimentResponsePrivate(this), parent)
{
    setRequest(new GetExperimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExperimentRequest * GetExperimentResponse::request() const
{
    Q_D(const GetExperimentResponse);
    return static_cast<const GetExperimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently GetExperiment \a response.
 */
void GetExperimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExperimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::GetExperimentResponsePrivate
 * \brief The GetExperimentResponsePrivate class provides private implementation for GetExperimentResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a GetExperimentResponsePrivate object with public implementation \a q.
 */
GetExperimentResponsePrivate::GetExperimentResponsePrivate(
    GetExperimentResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently GetExperiment response element from \a xml.
 */
void GetExperimentResponsePrivate::parseGetExperimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExperimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
