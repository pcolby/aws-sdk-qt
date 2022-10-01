// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapplicationsettingsresponse.h"
#include "updateapplicationsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApplicationSettingsResponse
 * \brief The UpdateApplicationSettingsResponse class provides an interace for Pinpoint UpdateApplicationSettings responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateApplicationSettings
 */

/*!
 * Constructs a UpdateApplicationSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApplicationSettingsResponse::UpdateApplicationSettingsResponse(
        const UpdateApplicationSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateApplicationSettingsResponsePrivate(this), parent)
{
    setRequest(new UpdateApplicationSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApplicationSettingsRequest * UpdateApplicationSettingsResponse::request() const
{
    Q_D(const UpdateApplicationSettingsResponse);
    return static_cast<const UpdateApplicationSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateApplicationSettings \a response.
 */
void UpdateApplicationSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApplicationSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateApplicationSettingsResponsePrivate
 * \brief The UpdateApplicationSettingsResponsePrivate class provides private implementation for UpdateApplicationSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApplicationSettingsResponsePrivate object with public implementation \a q.
 */
UpdateApplicationSettingsResponsePrivate::UpdateApplicationSettingsResponsePrivate(
    UpdateApplicationSettingsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateApplicationSettings response element from \a xml.
 */
void UpdateApplicationSettingsResponsePrivate::parseUpdateApplicationSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApplicationSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
