/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateendpointsbatchresponse.h"
#include "updateendpointsbatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateEndpointsBatchResponse
 * \brief The UpdateEndpointsBatchResponse class provides an interace for Pinpoint UpdateEndpointsBatch responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::updateEndpointsBatch
 */

/*!
 * Constructs a UpdateEndpointsBatchResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEndpointsBatchResponse::UpdateEndpointsBatchResponse(
        const UpdateEndpointsBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateEndpointsBatchResponsePrivate(this), parent)
{
    setRequest(new UpdateEndpointsBatchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEndpointsBatchRequest * UpdateEndpointsBatchResponse::request() const
{
    Q_D(const UpdateEndpointsBatchResponse);
    return static_cast<const UpdateEndpointsBatchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateEndpointsBatch \a response.
 */
void UpdateEndpointsBatchResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateEndpointsBatchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateEndpointsBatchResponsePrivate
 * \brief The UpdateEndpointsBatchResponsePrivate class provides private implementation for UpdateEndpointsBatchResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateEndpointsBatchResponsePrivate object with public implementation \a q.
 */
UpdateEndpointsBatchResponsePrivate::UpdateEndpointsBatchResponsePrivate(
    UpdateEndpointsBatchResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateEndpointsBatch response element from \a xml.
 */
void UpdateEndpointsBatchResponsePrivate::parseUpdateEndpointsBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEndpointsBatchResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
