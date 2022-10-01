// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlaunchprofileresponse.h"
#include "getlaunchprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetLaunchProfileResponse
 * \brief The GetLaunchProfileResponse class provides an interace for Nimble GetLaunchProfile responses.
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
 * \sa NimbleClient::getLaunchProfile
 */

/*!
 * Constructs a GetLaunchProfileResponse object for \a reply to \a request, with parent \a parent.
 */
GetLaunchProfileResponse::GetLaunchProfileResponse(
        const GetLaunchProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new GetLaunchProfileResponsePrivate(this), parent)
{
    setRequest(new GetLaunchProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLaunchProfileRequest * GetLaunchProfileResponse::request() const
{
    Q_D(const GetLaunchProfileResponse);
    return static_cast<const GetLaunchProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble GetLaunchProfile \a response.
 */
void GetLaunchProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLaunchProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::GetLaunchProfileResponsePrivate
 * \brief The GetLaunchProfileResponsePrivate class provides private implementation for GetLaunchProfileResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetLaunchProfileResponsePrivate object with public implementation \a q.
 */
GetLaunchProfileResponsePrivate::GetLaunchProfileResponsePrivate(
    GetLaunchProfileResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble GetLaunchProfile response element from \a xml.
 */
void GetLaunchProfileResponsePrivate::parseGetLaunchProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLaunchProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
