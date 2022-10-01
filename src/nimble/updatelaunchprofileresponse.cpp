// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelaunchprofileresponse.h"
#include "updatelaunchprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::UpdateLaunchProfileResponse
 * \brief The UpdateLaunchProfileResponse class provides an interace for Nimble UpdateLaunchProfile responses.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::updateLaunchProfile
 */

/*!
 * Constructs a UpdateLaunchProfileResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLaunchProfileResponse::UpdateLaunchProfileResponse(
        const UpdateLaunchProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new UpdateLaunchProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateLaunchProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLaunchProfileRequest * UpdateLaunchProfileResponse::request() const
{
    Q_D(const UpdateLaunchProfileResponse);
    return static_cast<const UpdateLaunchProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble UpdateLaunchProfile \a response.
 */
void UpdateLaunchProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLaunchProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::UpdateLaunchProfileResponsePrivate
 * \brief The UpdateLaunchProfileResponsePrivate class provides private implementation for UpdateLaunchProfileResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a UpdateLaunchProfileResponsePrivate object with public implementation \a q.
 */
UpdateLaunchProfileResponsePrivate::UpdateLaunchProfileResponsePrivate(
    UpdateLaunchProfileResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble UpdateLaunchProfile response element from \a xml.
 */
void UpdateLaunchProfileResponsePrivate::parseUpdateLaunchProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLaunchProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
