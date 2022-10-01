// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateendpointresponse.h"
#include "updateendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateEndpointResponse
 * \brief The UpdateEndpointResponse class provides an interace for Pinpoint UpdateEndpoint responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateEndpoint
 */

/*!
 * Constructs a UpdateEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEndpointResponse::UpdateEndpointResponse(
        const UpdateEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateEndpointResponsePrivate(this), parent)
{
    setRequest(new UpdateEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEndpointRequest * UpdateEndpointResponse::request() const
{
    Q_D(const UpdateEndpointResponse);
    return static_cast<const UpdateEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateEndpoint \a response.
 */
void UpdateEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateEndpointResponsePrivate
 * \brief The UpdateEndpointResponsePrivate class provides private implementation for UpdateEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateEndpointResponsePrivate object with public implementation \a q.
 */
UpdateEndpointResponsePrivate::UpdateEndpointResponsePrivate(
    UpdateEndpointResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateEndpoint response element from \a xml.
 */
void UpdateEndpointResponsePrivate::parseUpdateEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
