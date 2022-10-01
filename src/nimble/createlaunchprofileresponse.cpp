// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlaunchprofileresponse.h"
#include "createlaunchprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::CreateLaunchProfileResponse
 * \brief The CreateLaunchProfileResponse class provides an interace for Nimble CreateLaunchProfile responses.
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
 * \sa NimbleClient::createLaunchProfile
 */

/*!
 * Constructs a CreateLaunchProfileResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLaunchProfileResponse::CreateLaunchProfileResponse(
        const CreateLaunchProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new CreateLaunchProfileResponsePrivate(this), parent)
{
    setRequest(new CreateLaunchProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLaunchProfileRequest * CreateLaunchProfileResponse::request() const
{
    Q_D(const CreateLaunchProfileResponse);
    return static_cast<const CreateLaunchProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble CreateLaunchProfile \a response.
 */
void CreateLaunchProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLaunchProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::CreateLaunchProfileResponsePrivate
 * \brief The CreateLaunchProfileResponsePrivate class provides private implementation for CreateLaunchProfileResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a CreateLaunchProfileResponsePrivate object with public implementation \a q.
 */
CreateLaunchProfileResponsePrivate::CreateLaunchProfileResponsePrivate(
    CreateLaunchProfileResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble CreateLaunchProfile response element from \a xml.
 */
void CreateLaunchProfileResponsePrivate::parseCreateLaunchProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLaunchProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
