// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteusageplankeyresponse.h"
#include "deleteusageplankeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteUsagePlanKeyResponse
 * \brief The DeleteUsagePlanKeyResponse class provides an interace for ApiGateway DeleteUsagePlanKey responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteUsagePlanKey
 */

/*!
 * Constructs a DeleteUsagePlanKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUsagePlanKeyResponse::DeleteUsagePlanKeyResponse(
        const DeleteUsagePlanKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteUsagePlanKeyResponsePrivate(this), parent)
{
    setRequest(new DeleteUsagePlanKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUsagePlanKeyRequest * DeleteUsagePlanKeyResponse::request() const
{
    Q_D(const DeleteUsagePlanKeyResponse);
    return static_cast<const DeleteUsagePlanKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteUsagePlanKey \a response.
 */
void DeleteUsagePlanKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUsagePlanKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteUsagePlanKeyResponsePrivate
 * \brief The DeleteUsagePlanKeyResponsePrivate class provides private implementation for DeleteUsagePlanKeyResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteUsagePlanKeyResponsePrivate object with public implementation \a q.
 */
DeleteUsagePlanKeyResponsePrivate::DeleteUsagePlanKeyResponsePrivate(
    DeleteUsagePlanKeyResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteUsagePlanKey response element from \a xml.
 */
void DeleteUsagePlanKeyResponsePrivate::parseDeleteUsagePlanKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUsagePlanKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
