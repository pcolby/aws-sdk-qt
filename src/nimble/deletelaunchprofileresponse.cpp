// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelaunchprofileresponse.h"
#include "deletelaunchprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::DeleteLaunchProfileResponse
 * \brief The DeleteLaunchProfileResponse class provides an interace for Nimble DeleteLaunchProfile responses.
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
 * \sa NimbleClient::deleteLaunchProfile
 */

/*!
 * Constructs a DeleteLaunchProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLaunchProfileResponse::DeleteLaunchProfileResponse(
        const DeleteLaunchProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new DeleteLaunchProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteLaunchProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLaunchProfileRequest * DeleteLaunchProfileResponse::request() const
{
    Q_D(const DeleteLaunchProfileResponse);
    return static_cast<const DeleteLaunchProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble DeleteLaunchProfile \a response.
 */
void DeleteLaunchProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLaunchProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::DeleteLaunchProfileResponsePrivate
 * \brief The DeleteLaunchProfileResponsePrivate class provides private implementation for DeleteLaunchProfileResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a DeleteLaunchProfileResponsePrivate object with public implementation \a q.
 */
DeleteLaunchProfileResponsePrivate::DeleteLaunchProfileResponsePrivate(
    DeleteLaunchProfileResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble DeleteLaunchProfile response element from \a xml.
 */
void DeleteLaunchProfileResponsePrivate::parseDeleteLaunchProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLaunchProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
