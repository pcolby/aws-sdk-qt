// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedevendpointresponse.h"
#include "updatedevendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateDevEndpointResponse
 * \brief The UpdateDevEndpointResponse class provides an interace for Glue UpdateDevEndpoint responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateDevEndpoint
 */

/*!
 * Constructs a UpdateDevEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDevEndpointResponse::UpdateDevEndpointResponse(
        const UpdateDevEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateDevEndpointResponsePrivate(this), parent)
{
    setRequest(new UpdateDevEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDevEndpointRequest * UpdateDevEndpointResponse::request() const
{
    Q_D(const UpdateDevEndpointResponse);
    return static_cast<const UpdateDevEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateDevEndpoint \a response.
 */
void UpdateDevEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDevEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateDevEndpointResponsePrivate
 * \brief The UpdateDevEndpointResponsePrivate class provides private implementation for UpdateDevEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateDevEndpointResponsePrivate object with public implementation \a q.
 */
UpdateDevEndpointResponsePrivate::UpdateDevEndpointResponsePrivate(
    UpdateDevEndpointResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateDevEndpoint response element from \a xml.
 */
void UpdateDevEndpointResponsePrivate::parseUpdateDevEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDevEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
