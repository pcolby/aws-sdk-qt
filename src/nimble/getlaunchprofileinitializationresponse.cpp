// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlaunchprofileinitializationresponse.h"
#include "getlaunchprofileinitializationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::GetLaunchProfileInitializationResponse
 * \brief The GetLaunchProfileInitializationResponse class provides an interace for Nimble GetLaunchProfileInitialization responses.
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
 * \sa NimbleClient::getLaunchProfileInitialization
 */

/*!
 * Constructs a GetLaunchProfileInitializationResponse object for \a reply to \a request, with parent \a parent.
 */
GetLaunchProfileInitializationResponse::GetLaunchProfileInitializationResponse(
        const GetLaunchProfileInitializationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new GetLaunchProfileInitializationResponsePrivate(this), parent)
{
    setRequest(new GetLaunchProfileInitializationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLaunchProfileInitializationRequest * GetLaunchProfileInitializationResponse::request() const
{
    Q_D(const GetLaunchProfileInitializationResponse);
    return static_cast<const GetLaunchProfileInitializationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble GetLaunchProfileInitialization \a response.
 */
void GetLaunchProfileInitializationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLaunchProfileInitializationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::GetLaunchProfileInitializationResponsePrivate
 * \brief The GetLaunchProfileInitializationResponsePrivate class provides private implementation for GetLaunchProfileInitializationResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a GetLaunchProfileInitializationResponsePrivate object with public implementation \a q.
 */
GetLaunchProfileInitializationResponsePrivate::GetLaunchProfileInitializationResponsePrivate(
    GetLaunchProfileInitializationResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble GetLaunchProfileInitialization response element from \a xml.
 */
void GetLaunchProfileInitializationResponsePrivate::parseGetLaunchProfileInitializationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLaunchProfileInitializationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
