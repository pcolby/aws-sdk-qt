// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterouterequestparameterresponse.h"
#include "deleterouterequestparameterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteRequestParameterResponse
 * \brief The DeleteRouteRequestParameterResponse class provides an interace for ApiGatewayV2 DeleteRouteRequestParameter responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteRouteRequestParameter
 */

/*!
 * Constructs a DeleteRouteRequestParameterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRouteRequestParameterResponse::DeleteRouteRequestParameterResponse(
        const DeleteRouteRequestParameterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteRouteRequestParameterResponsePrivate(this), parent)
{
    setRequest(new DeleteRouteRequestParameterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRouteRequestParameterRequest * DeleteRouteRequestParameterResponse::request() const
{
    Q_D(const DeleteRouteRequestParameterResponse);
    return static_cast<const DeleteRouteRequestParameterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteRouteRequestParameter \a response.
 */
void DeleteRouteRequestParameterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRouteRequestParameterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteRequestParameterResponsePrivate
 * \brief The DeleteRouteRequestParameterResponsePrivate class provides private implementation for DeleteRouteRequestParameterResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteRouteRequestParameterResponsePrivate object with public implementation \a q.
 */
DeleteRouteRequestParameterResponsePrivate::DeleteRouteRequestParameterResponsePrivate(
    DeleteRouteRequestParameterResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteRouteRequestParameter response element from \a xml.
 */
void DeleteRouteRequestParameterResponsePrivate::parseDeleteRouteRequestParameterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRouteRequestParameterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
