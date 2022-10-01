// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteroutesettingsresponse.h"
#include "deleteroutesettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteSettingsResponse
 * \brief The DeleteRouteSettingsResponse class provides an interace for ApiGatewayV2 DeleteRouteSettings responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteRouteSettings
 */

/*!
 * Constructs a DeleteRouteSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRouteSettingsResponse::DeleteRouteSettingsResponse(
        const DeleteRouteSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteRouteSettingsResponsePrivate(this), parent)
{
    setRequest(new DeleteRouteSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRouteSettingsRequest * DeleteRouteSettingsResponse::request() const
{
    Q_D(const DeleteRouteSettingsResponse);
    return static_cast<const DeleteRouteSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteRouteSettings \a response.
 */
void DeleteRouteSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRouteSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteSettingsResponsePrivate
 * \brief The DeleteRouteSettingsResponsePrivate class provides private implementation for DeleteRouteSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteRouteSettingsResponsePrivate object with public implementation \a q.
 */
DeleteRouteSettingsResponsePrivate::DeleteRouteSettingsResponsePrivate(
    DeleteRouteSettingsResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteRouteSettings response element from \a xml.
 */
void DeleteRouteSettingsResponsePrivate::parseDeleteRouteSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRouteSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
