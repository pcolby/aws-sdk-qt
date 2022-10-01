// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconnectionresponse.h"
#include "deleteconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayManagement {

/*!
 * \class QtAws::ApiGatewayManagement::DeleteConnectionResponse
 * \brief The DeleteConnectionResponse class provides an interace for ApiGatewayManagement DeleteConnection responses.
 *
 * \inmodule QtAwsApiGatewayManagement
 *
 *  The Amazon API Gateway Management API allows you to directly manage runtime aspects of your deployed APIs. To use it,
 *  you must explicitly set the SDK's endpoint to point to the endpoint of your deployed API. The endpoint will be of the
 *  form https://{api-id}.execute-api.{region}.amazonaws.com/{stage}, or will be the endpoint corresponding to your API's
 *  custom domain and base path, if
 *
 * \sa ApiGatewayManagementClient::deleteConnection
 */

/*!
 * Constructs a DeleteConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConnectionResponse::DeleteConnectionResponse(
        const DeleteConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayManagementResponse(new DeleteConnectionResponsePrivate(this), parent)
{
    setRequest(new DeleteConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConnectionRequest * DeleteConnectionResponse::request() const
{
    Q_D(const DeleteConnectionResponse);
    return static_cast<const DeleteConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayManagement DeleteConnection \a response.
 */
void DeleteConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayManagement::DeleteConnectionResponsePrivate
 * \brief The DeleteConnectionResponsePrivate class provides private implementation for DeleteConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayManagement
 */

/*!
 * Constructs a DeleteConnectionResponsePrivate object with public implementation \a q.
 */
DeleteConnectionResponsePrivate::DeleteConnectionResponsePrivate(
    DeleteConnectionResponse * const q) : ApiGatewayManagementResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayManagement DeleteConnection response element from \a xml.
 */
void DeleteConnectionResponsePrivate::parseDeleteConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayManagement
} // namespace QtAws
