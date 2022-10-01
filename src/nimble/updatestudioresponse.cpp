// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestudioresponse.h"
#include "updatestudioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::UpdateStudioResponse
 * \brief The UpdateStudioResponse class provides an interace for Nimble UpdateStudio responses.
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
 * \sa NimbleClient::updateStudio
 */

/*!
 * Constructs a UpdateStudioResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStudioResponse::UpdateStudioResponse(
        const UpdateStudioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new UpdateStudioResponsePrivate(this), parent)
{
    setRequest(new UpdateStudioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStudioRequest * UpdateStudioResponse::request() const
{
    Q_D(const UpdateStudioResponse);
    return static_cast<const UpdateStudioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble UpdateStudio \a response.
 */
void UpdateStudioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStudioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::UpdateStudioResponsePrivate
 * \brief The UpdateStudioResponsePrivate class provides private implementation for UpdateStudioResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a UpdateStudioResponsePrivate object with public implementation \a q.
 */
UpdateStudioResponsePrivate::UpdateStudioResponsePrivate(
    UpdateStudioResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble UpdateStudio response element from \a xml.
 */
void UpdateStudioResponsePrivate::parseUpdateStudioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStudioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
