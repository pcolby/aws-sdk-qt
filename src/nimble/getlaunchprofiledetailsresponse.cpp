// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlaunchprofiledetailsresponse.h"
#include "getlaunchprofiledetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetLaunchProfileDetailsResponse
 * \brief The GetLaunchProfileDetailsResponse class provides an interace for Nimble GetLaunchProfileDetails responses.
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
 * \sa NimbleClient::getLaunchProfileDetails
 */

/*!
 * Constructs a GetLaunchProfileDetailsResponse object for \a reply to \a request, with parent \a parent.
 */
GetLaunchProfileDetailsResponse::GetLaunchProfileDetailsResponse(
        const GetLaunchProfileDetailsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new GetLaunchProfileDetailsResponsePrivate(this), parent)
{
    setRequest(new GetLaunchProfileDetailsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLaunchProfileDetailsRequest * GetLaunchProfileDetailsResponse::request() const
{
    Q_D(const GetLaunchProfileDetailsResponse);
    return static_cast<const GetLaunchProfileDetailsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble GetLaunchProfileDetails \a response.
 */
void GetLaunchProfileDetailsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLaunchProfileDetailsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::GetLaunchProfileDetailsResponsePrivate
 * \brief The GetLaunchProfileDetailsResponsePrivate class provides private implementation for GetLaunchProfileDetailsResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetLaunchProfileDetailsResponsePrivate object with public implementation \a q.
 */
GetLaunchProfileDetailsResponsePrivate::GetLaunchProfileDetailsResponsePrivate(
    GetLaunchProfileDetailsResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble GetLaunchProfileDetails response element from \a xml.
 */
void GetLaunchProfileDetailsResponsePrivate::parseGetLaunchProfileDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLaunchProfileDetailsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
