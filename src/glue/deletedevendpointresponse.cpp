// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedevendpointresponse.h"
#include "deletedevendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteDevEndpointResponse
 * \brief The DeleteDevEndpointResponse class provides an interace for Glue DeleteDevEndpoint responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteDevEndpoint
 */

/*!
 * Constructs a DeleteDevEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDevEndpointResponse::DeleteDevEndpointResponse(
        const DeleteDevEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteDevEndpointResponsePrivate(this), parent)
{
    setRequest(new DeleteDevEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDevEndpointRequest * DeleteDevEndpointResponse::request() const
{
    Q_D(const DeleteDevEndpointResponse);
    return static_cast<const DeleteDevEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteDevEndpoint \a response.
 */
void DeleteDevEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDevEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteDevEndpointResponsePrivate
 * \brief The DeleteDevEndpointResponsePrivate class provides private implementation for DeleteDevEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteDevEndpointResponsePrivate object with public implementation \a q.
 */
DeleteDevEndpointResponsePrivate::DeleteDevEndpointResponsePrivate(
    DeleteDevEndpointResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteDevEndpoint response element from \a xml.
 */
void DeleteDevEndpointResponsePrivate::parseDeleteDevEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDevEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
