// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlaunchconfigurationresponse.h"
#include "getlaunchconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::GetLaunchConfigurationResponse
 * \brief The GetLaunchConfigurationResponse class provides an interace for Drs GetLaunchConfiguration responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::getLaunchConfiguration
 */

/*!
 * Constructs a GetLaunchConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetLaunchConfigurationResponse::GetLaunchConfigurationResponse(
        const GetLaunchConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new GetLaunchConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetLaunchConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLaunchConfigurationRequest * GetLaunchConfigurationResponse::request() const
{
    Q_D(const GetLaunchConfigurationResponse);
    return static_cast<const GetLaunchConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs GetLaunchConfiguration \a response.
 */
void GetLaunchConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLaunchConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::GetLaunchConfigurationResponsePrivate
 * \brief The GetLaunchConfigurationResponsePrivate class provides private implementation for GetLaunchConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a GetLaunchConfigurationResponsePrivate object with public implementation \a q.
 */
GetLaunchConfigurationResponsePrivate::GetLaunchConfigurationResponsePrivate(
    GetLaunchConfigurationResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs GetLaunchConfiguration response element from \a xml.
 */
void GetLaunchConfigurationResponsePrivate::parseGetLaunchConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLaunchConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
