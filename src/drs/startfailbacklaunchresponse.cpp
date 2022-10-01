// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startfailbacklaunchresponse.h"
#include "startfailbacklaunchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::StartFailbackLaunchResponse
 * \brief The StartFailbackLaunchResponse class provides an interace for Drs StartFailbackLaunch responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::startFailbackLaunch
 */

/*!
 * Constructs a StartFailbackLaunchResponse object for \a reply to \a request, with parent \a parent.
 */
StartFailbackLaunchResponse::StartFailbackLaunchResponse(
        const StartFailbackLaunchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new StartFailbackLaunchResponsePrivate(this), parent)
{
    setRequest(new StartFailbackLaunchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartFailbackLaunchRequest * StartFailbackLaunchResponse::request() const
{
    Q_D(const StartFailbackLaunchResponse);
    return static_cast<const StartFailbackLaunchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs StartFailbackLaunch \a response.
 */
void StartFailbackLaunchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartFailbackLaunchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::StartFailbackLaunchResponsePrivate
 * \brief The StartFailbackLaunchResponsePrivate class provides private implementation for StartFailbackLaunchResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a StartFailbackLaunchResponsePrivate object with public implementation \a q.
 */
StartFailbackLaunchResponsePrivate::StartFailbackLaunchResponsePrivate(
    StartFailbackLaunchResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs StartFailbackLaunch response element from \a xml.
 */
void StartFailbackLaunchResponsePrivate::parseStartFailbackLaunchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartFailbackLaunchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
