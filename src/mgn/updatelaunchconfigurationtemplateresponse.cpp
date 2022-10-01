// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelaunchconfigurationtemplateresponse.h"
#include "updatelaunchconfigurationtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::UpdateLaunchConfigurationTemplateResponse
 * \brief The UpdateLaunchConfigurationTemplateResponse class provides an interace for Mgn UpdateLaunchConfigurationTemplate responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::updateLaunchConfigurationTemplate
 */

/*!
 * Constructs a UpdateLaunchConfigurationTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLaunchConfigurationTemplateResponse::UpdateLaunchConfigurationTemplateResponse(
        const UpdateLaunchConfigurationTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new UpdateLaunchConfigurationTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateLaunchConfigurationTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLaunchConfigurationTemplateRequest * UpdateLaunchConfigurationTemplateResponse::request() const
{
    Q_D(const UpdateLaunchConfigurationTemplateResponse);
    return static_cast<const UpdateLaunchConfigurationTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn UpdateLaunchConfigurationTemplate \a response.
 */
void UpdateLaunchConfigurationTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLaunchConfigurationTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::UpdateLaunchConfigurationTemplateResponsePrivate
 * \brief The UpdateLaunchConfigurationTemplateResponsePrivate class provides private implementation for UpdateLaunchConfigurationTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a UpdateLaunchConfigurationTemplateResponsePrivate object with public implementation \a q.
 */
UpdateLaunchConfigurationTemplateResponsePrivate::UpdateLaunchConfigurationTemplateResponsePrivate(
    UpdateLaunchConfigurationTemplateResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn UpdateLaunchConfigurationTemplate response element from \a xml.
 */
void UpdateLaunchConfigurationTemplateResponsePrivate::parseUpdateLaunchConfigurationTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLaunchConfigurationTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
