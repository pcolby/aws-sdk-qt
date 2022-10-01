// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestudiocomponentresponse.h"
#include "updatestudiocomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::UpdateStudioComponentResponse
 * \brief The UpdateStudioComponentResponse class provides an interace for Nimble UpdateStudioComponent responses.
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
 * \sa NimbleClient::updateStudioComponent
 */

/*!
 * Constructs a UpdateStudioComponentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStudioComponentResponse::UpdateStudioComponentResponse(
        const UpdateStudioComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new UpdateStudioComponentResponsePrivate(this), parent)
{
    setRequest(new UpdateStudioComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStudioComponentRequest * UpdateStudioComponentResponse::request() const
{
    Q_D(const UpdateStudioComponentResponse);
    return static_cast<const UpdateStudioComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble UpdateStudioComponent \a response.
 */
void UpdateStudioComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStudioComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::UpdateStudioComponentResponsePrivate
 * \brief The UpdateStudioComponentResponsePrivate class provides private implementation for UpdateStudioComponentResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a UpdateStudioComponentResponsePrivate object with public implementation \a q.
 */
UpdateStudioComponentResponsePrivate::UpdateStudioComponentResponsePrivate(
    UpdateStudioComponentResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble UpdateStudioComponent response element from \a xml.
 */
void UpdateStudioComponentResponsePrivate::parseUpdateStudioComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStudioComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
