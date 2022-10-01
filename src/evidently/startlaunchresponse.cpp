// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startlaunchresponse.h"
#include "startlaunchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::StartLaunchResponse
 * \brief The StartLaunchResponse class provides an interace for Evidently StartLaunch responses.
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
 * \sa EvidentlyClient::startLaunch
 */

/*!
 * Constructs a StartLaunchResponse object for \a reply to \a request, with parent \a parent.
 */
StartLaunchResponse::StartLaunchResponse(
        const StartLaunchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new StartLaunchResponsePrivate(this), parent)
{
    setRequest(new StartLaunchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartLaunchRequest * StartLaunchResponse::request() const
{
    Q_D(const StartLaunchResponse);
    return static_cast<const StartLaunchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently StartLaunch \a response.
 */
void StartLaunchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartLaunchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::StartLaunchResponsePrivate
 * \brief The StartLaunchResponsePrivate class provides private implementation for StartLaunchResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a StartLaunchResponsePrivate object with public implementation \a q.
 */
StartLaunchResponsePrivate::StartLaunchResponsePrivate(
    StartLaunchResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently StartLaunch response element from \a xml.
 */
void StartLaunchResponsePrivate::parseStartLaunchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartLaunchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
