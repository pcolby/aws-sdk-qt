// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteintegrationresponseresponse.h"
#include "deleteintegrationresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteIntegrationResponseResponse
 * \brief The DeleteIntegrationResponseResponse class provides an interace for ApiGatewayV2 DeleteIntegrationResponse responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteIntegrationResponse
 */

/*!
 * Constructs a DeleteIntegrationResponseResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIntegrationResponseResponse::DeleteIntegrationResponseResponse(
        const DeleteIntegrationResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteIntegrationResponseResponsePrivate(this), parent)
{
    setRequest(new DeleteIntegrationResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIntegrationResponseRequest * DeleteIntegrationResponseResponse::request() const
{
    Q_D(const DeleteIntegrationResponseResponse);
    return static_cast<const DeleteIntegrationResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteIntegrationResponse \a response.
 */
void DeleteIntegrationResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIntegrationResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteIntegrationResponseResponsePrivate
 * \brief The DeleteIntegrationResponseResponsePrivate class provides private implementation for DeleteIntegrationResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteIntegrationResponseResponsePrivate object with public implementation \a q.
 */
DeleteIntegrationResponseResponsePrivate::DeleteIntegrationResponseResponsePrivate(
    DeleteIntegrationResponseResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteIntegrationResponse response element from \a xml.
 */
void DeleteIntegrationResponseResponsePrivate::parseDeleteIntegrationResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIntegrationResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
