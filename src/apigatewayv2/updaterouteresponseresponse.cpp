// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updaterouteresponseresponse.h"
#include "updaterouteresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateRouteResponseResponse
 * \brief The UpdateRouteResponseResponse class provides an interace for ApiGatewayV2 UpdateRouteResponse responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateRouteResponse
 */

/*!
 * Constructs a UpdateRouteResponseResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRouteResponseResponse::UpdateRouteResponseResponse(
        const UpdateRouteResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new UpdateRouteResponseResponsePrivate(this), parent)
{
    setRequest(new UpdateRouteResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRouteResponseRequest * UpdateRouteResponseResponse::request() const
{
    Q_D(const UpdateRouteResponseResponse);
    return static_cast<const UpdateRouteResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 UpdateRouteResponse \a response.
 */
void UpdateRouteResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRouteResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateRouteResponseResponsePrivate
 * \brief The UpdateRouteResponseResponsePrivate class provides private implementation for UpdateRouteResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateRouteResponseResponsePrivate object with public implementation \a q.
 */
UpdateRouteResponseResponsePrivate::UpdateRouteResponseResponsePrivate(
    UpdateRouteResponseResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 UpdateRouteResponse response element from \a xml.
 */
void UpdateRouteResponseResponsePrivate::parseUpdateRouteResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRouteResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
