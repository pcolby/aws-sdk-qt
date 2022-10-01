// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoplaunchresponse.h"
#include "stoplaunchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::StopLaunchResponse
 * \brief The StopLaunchResponse class provides an interace for Evidently StopLaunch responses.
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
 * \sa EvidentlyClient::stopLaunch
 */

/*!
 * Constructs a StopLaunchResponse object for \a reply to \a request, with parent \a parent.
 */
StopLaunchResponse::StopLaunchResponse(
        const StopLaunchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new StopLaunchResponsePrivate(this), parent)
{
    setRequest(new StopLaunchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopLaunchRequest * StopLaunchResponse::request() const
{
    Q_D(const StopLaunchResponse);
    return static_cast<const StopLaunchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently StopLaunch \a response.
 */
void StopLaunchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopLaunchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::StopLaunchResponsePrivate
 * \brief The StopLaunchResponsePrivate class provides private implementation for StopLaunchResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a StopLaunchResponsePrivate object with public implementation \a q.
 */
StopLaunchResponsePrivate::StopLaunchResponsePrivate(
    StopLaunchResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently StopLaunch response element from \a xml.
 */
void StopLaunchResponsePrivate::parseStopLaunchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopLaunchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
