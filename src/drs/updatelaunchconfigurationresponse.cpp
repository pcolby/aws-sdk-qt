// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelaunchconfigurationresponse.h"
#include "updatelaunchconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::UpdateLaunchConfigurationResponse
 * \brief The UpdateLaunchConfigurationResponse class provides an interace for Drs UpdateLaunchConfiguration responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::updateLaunchConfiguration
 */

/*!
 * Constructs a UpdateLaunchConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLaunchConfigurationResponse::UpdateLaunchConfigurationResponse(
        const UpdateLaunchConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new UpdateLaunchConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateLaunchConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLaunchConfigurationRequest * UpdateLaunchConfigurationResponse::request() const
{
    Q_D(const UpdateLaunchConfigurationResponse);
    return static_cast<const UpdateLaunchConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs UpdateLaunchConfiguration \a response.
 */
void UpdateLaunchConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLaunchConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::UpdateLaunchConfigurationResponsePrivate
 * \brief The UpdateLaunchConfigurationResponsePrivate class provides private implementation for UpdateLaunchConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a UpdateLaunchConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateLaunchConfigurationResponsePrivate::UpdateLaunchConfigurationResponsePrivate(
    UpdateLaunchConfigurationResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs UpdateLaunchConfiguration response element from \a xml.
 */
void UpdateLaunchConfigurationResponsePrivate::parseUpdateLaunchConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLaunchConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
