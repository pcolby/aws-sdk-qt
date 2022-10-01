// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlaunchresponse.h"
#include "getlaunchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::GetLaunchResponse
 * \brief The GetLaunchResponse class provides an interace for Evidently GetLaunch responses.
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
 * \sa EvidentlyClient::getLaunch
 */

/*!
 * Constructs a GetLaunchResponse object for \a reply to \a request, with parent \a parent.
 */
GetLaunchResponse::GetLaunchResponse(
        const GetLaunchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new GetLaunchResponsePrivate(this), parent)
{
    setRequest(new GetLaunchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLaunchRequest * GetLaunchResponse::request() const
{
    Q_D(const GetLaunchResponse);
    return static_cast<const GetLaunchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently GetLaunch \a response.
 */
void GetLaunchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLaunchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::GetLaunchResponsePrivate
 * \brief The GetLaunchResponsePrivate class provides private implementation for GetLaunchResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a GetLaunchResponsePrivate object with public implementation \a q.
 */
GetLaunchResponsePrivate::GetLaunchResponsePrivate(
    GetLaunchResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently GetLaunch response element from \a xml.
 */
void GetLaunchResponsePrivate::parseGetLaunchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLaunchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
