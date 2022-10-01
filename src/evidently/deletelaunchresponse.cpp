// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelaunchresponse.h"
#include "deletelaunchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::DeleteLaunchResponse
 * \brief The DeleteLaunchResponse class provides an interace for Evidently DeleteLaunch responses.
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
 * \sa EvidentlyClient::deleteLaunch
 */

/*!
 * Constructs a DeleteLaunchResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLaunchResponse::DeleteLaunchResponse(
        const DeleteLaunchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new DeleteLaunchResponsePrivate(this), parent)
{
    setRequest(new DeleteLaunchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLaunchRequest * DeleteLaunchResponse::request() const
{
    Q_D(const DeleteLaunchResponse);
    return static_cast<const DeleteLaunchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently DeleteLaunch \a response.
 */
void DeleteLaunchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLaunchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::DeleteLaunchResponsePrivate
 * \brief The DeleteLaunchResponsePrivate class provides private implementation for DeleteLaunchResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a DeleteLaunchResponsePrivate object with public implementation \a q.
 */
DeleteLaunchResponsePrivate::DeleteLaunchResponsePrivate(
    DeleteLaunchResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently DeleteLaunch response element from \a xml.
 */
void DeleteLaunchResponsePrivate::parseDeleteLaunchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLaunchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
