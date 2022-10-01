// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterouteresponse.h"
#include "deleterouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteResponse
 * \brief The DeleteRouteResponse class provides an interace for ApiGatewayV2 DeleteRoute responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteRoute
 */

/*!
 * Constructs a DeleteRouteResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRouteResponse::DeleteRouteResponse(
        const DeleteRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteRouteResponsePrivate(this), parent)
{
    setRequest(new DeleteRouteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRouteRequest * DeleteRouteResponse::request() const
{
    Q_D(const DeleteRouteResponse);
    return static_cast<const DeleteRouteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteRoute \a response.
 */
void DeleteRouteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRouteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteResponsePrivate
 * \brief The DeleteRouteResponsePrivate class provides private implementation for DeleteRouteResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteRouteResponsePrivate object with public implementation \a q.
 */
DeleteRouteResponsePrivate::DeleteRouteResponsePrivate(
    DeleteRouteResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteRoute response element from \a xml.
 */
void DeleteRouteResponsePrivate::parseDeleteRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRouteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
