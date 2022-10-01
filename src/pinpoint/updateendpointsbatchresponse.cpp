// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Doc Engage API - Amazon Pinpoint
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
    //Q_D(UpdateEndpointsBatchResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
