// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelaunchconfigurationresponse.h"
#include "updatelaunchconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::UpdateLaunchConfigurationResponse
 * \brief The UpdateLaunchConfigurationResponse class provides an interace for Mgn UpdateLaunchConfiguration responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::updateLaunchConfiguration
 */

/*!
 * Constructs a UpdateLaunchConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLaunchConfigurationResponse::UpdateLaunchConfigurationResponse(
        const UpdateLaunchConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new UpdateLaunchConfigurationResponsePrivate(this), parent)
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
 * Parses a successful Mgn UpdateLaunchConfiguration \a response.
 */
void UpdateLaunchConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLaunchConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::UpdateLaunchConfigurationResponsePrivate
 * \brief The UpdateLaunchConfigurationResponsePrivate class provides private implementation for UpdateLaunchConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a UpdateLaunchConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateLaunchConfigurationResponsePrivate::UpdateLaunchConfigurationResponsePrivate(
    UpdateLaunchConfigurationResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn UpdateLaunchConfiguration response element from \a xml.
 */
void UpdateLaunchConfigurationResponsePrivate::parseUpdateLaunchConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLaunchConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
