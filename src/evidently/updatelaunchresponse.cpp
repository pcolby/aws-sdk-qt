// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelaunchresponse.h"
#include "updatelaunchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::UpdateLaunchResponse
 * \brief The UpdateLaunchResponse class provides an interace for Evidently UpdateLaunch responses.
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
 * \sa EvidentlyClient::updateLaunch
 */

/*!
 * Constructs a UpdateLaunchResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLaunchResponse::UpdateLaunchResponse(
        const UpdateLaunchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new UpdateLaunchResponsePrivate(this), parent)
{
    setRequest(new UpdateLaunchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLaunchRequest * UpdateLaunchResponse::request() const
{
    Q_D(const UpdateLaunchResponse);
    return static_cast<const UpdateLaunchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently UpdateLaunch \a response.
 */
void UpdateLaunchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLaunchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::UpdateLaunchResponsePrivate
 * \brief The UpdateLaunchResponsePrivate class provides private implementation for UpdateLaunchResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a UpdateLaunchResponsePrivate object with public implementation \a q.
 */
UpdateLaunchResponsePrivate::UpdateLaunchResponsePrivate(
    UpdateLaunchResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently UpdateLaunch response element from \a xml.
 */
void UpdateLaunchResponsePrivate::parseUpdateLaunchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLaunchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
