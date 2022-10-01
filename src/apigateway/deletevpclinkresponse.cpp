// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevpclinkresponse.h"
#include "deletevpclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteVpcLinkResponse
 * \brief The DeleteVpcLinkResponse class provides an interace for ApiGateway DeleteVpcLink responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteVpcLink
 */

/*!
 * Constructs a DeleteVpcLinkResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVpcLinkResponse::DeleteVpcLinkResponse(
        const DeleteVpcLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteVpcLinkResponsePrivate(this), parent)
{
    setRequest(new DeleteVpcLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVpcLinkRequest * DeleteVpcLinkResponse::request() const
{
    Q_D(const DeleteVpcLinkResponse);
    return static_cast<const DeleteVpcLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteVpcLink \a response.
 */
void DeleteVpcLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVpcLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteVpcLinkResponsePrivate
 * \brief The DeleteVpcLinkResponsePrivate class provides private implementation for DeleteVpcLinkResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteVpcLinkResponsePrivate object with public implementation \a q.
 */
DeleteVpcLinkResponsePrivate::DeleteVpcLinkResponsePrivate(
    DeleteVpcLinkResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteVpcLink response element from \a xml.
 */
void DeleteVpcLinkResponsePrivate::parseDeleteVpcLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpcLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
