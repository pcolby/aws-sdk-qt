// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlaunchresponse.h"
#include "createlaunchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::CreateLaunchResponse
 * \brief The CreateLaunchResponse class provides an interace for Evidently CreateLaunch responses.
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
 * \sa EvidentlyClient::createLaunch
 */

/*!
 * Constructs a CreateLaunchResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLaunchResponse::CreateLaunchResponse(
        const CreateLaunchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new CreateLaunchResponsePrivate(this), parent)
{
    setRequest(new CreateLaunchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLaunchRequest * CreateLaunchResponse::request() const
{
    Q_D(const CreateLaunchResponse);
    return static_cast<const CreateLaunchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently CreateLaunch \a response.
 */
void CreateLaunchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLaunchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::CreateLaunchResponsePrivate
 * \brief The CreateLaunchResponsePrivate class provides private implementation for CreateLaunchResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a CreateLaunchResponsePrivate object with public implementation \a q.
 */
CreateLaunchResponsePrivate::CreateLaunchResponsePrivate(
    CreateLaunchResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently CreateLaunch response element from \a xml.
 */
void CreateLaunchResponsePrivate::parseCreateLaunchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLaunchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
