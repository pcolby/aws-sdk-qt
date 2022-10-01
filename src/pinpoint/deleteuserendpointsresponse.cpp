// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserendpointsresponse.h"
#include "deleteuserendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteUserEndpointsResponse
 * \brief The DeleteUserEndpointsResponse class provides an interace for Pinpoint DeleteUserEndpoints responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteUserEndpoints
 */

/*!
 * Constructs a DeleteUserEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUserEndpointsResponse::DeleteUserEndpointsResponse(
        const DeleteUserEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteUserEndpointsResponsePrivate(this), parent)
{
    setRequest(new DeleteUserEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUserEndpointsRequest * DeleteUserEndpointsResponse::request() const
{
    Q_D(const DeleteUserEndpointsResponse);
    return static_cast<const DeleteUserEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteUserEndpoints \a response.
 */
void DeleteUserEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUserEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteUserEndpointsResponsePrivate
 * \brief The DeleteUserEndpointsResponsePrivate class provides private implementation for DeleteUserEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteUserEndpointsResponsePrivate object with public implementation \a q.
 */
DeleteUserEndpointsResponsePrivate::DeleteUserEndpointsResponsePrivate(
    DeleteUserEndpointsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteUserEndpoints response element from \a xml.
 */
void DeleteUserEndpointsResponsePrivate::parseDeleteUserEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
