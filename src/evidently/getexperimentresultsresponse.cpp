// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getexperimentresultsresponse.h"
#include "getexperimentresultsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::GetExperimentResultsResponse
 * \brief The GetExperimentResultsResponse class provides an interace for Evidently GetExperimentResults responses.
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
 * \sa EvidentlyClient::getExperimentResults
 */

/*!
 * Constructs a GetExperimentResultsResponse object for \a reply to \a request, with parent \a parent.
 */
GetExperimentResultsResponse::GetExperimentResultsResponse(
        const GetExperimentResultsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new GetExperimentResultsResponsePrivate(this), parent)
{
    setRequest(new GetExperimentResultsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExperimentResultsRequest * GetExperimentResultsResponse::request() const
{
    Q_D(const GetExperimentResultsResponse);
    return static_cast<const GetExperimentResultsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently GetExperimentResults \a response.
 */
void GetExperimentResultsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExperimentResultsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::GetExperimentResultsResponsePrivate
 * \brief The GetExperimentResultsResponsePrivate class provides private implementation for GetExperimentResultsResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a GetExperimentResultsResponsePrivate object with public implementation \a q.
 */
GetExperimentResultsResponsePrivate::GetExperimentResultsResponsePrivate(
    GetExperimentResultsResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently GetExperimentResults response element from \a xml.
 */
void GetExperimentResultsResponsePrivate::parseGetExperimentResultsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExperimentResultsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
