// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebasepathmappingresponse.h"
#include "deletebasepathmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteBasePathMappingResponse
 * \brief The DeleteBasePathMappingResponse class provides an interace for ApiGateway DeleteBasePathMapping responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteBasePathMapping
 */

/*!
 * Constructs a DeleteBasePathMappingResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBasePathMappingResponse::DeleteBasePathMappingResponse(
        const DeleteBasePathMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteBasePathMappingResponsePrivate(this), parent)
{
    setRequest(new DeleteBasePathMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBasePathMappingRequest * DeleteBasePathMappingResponse::request() const
{
    Q_D(const DeleteBasePathMappingResponse);
    return static_cast<const DeleteBasePathMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteBasePathMapping \a response.
 */
void DeleteBasePathMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBasePathMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteBasePathMappingResponsePrivate
 * \brief The DeleteBasePathMappingResponsePrivate class provides private implementation for DeleteBasePathMappingResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteBasePathMappingResponsePrivate object with public implementation \a q.
 */
DeleteBasePathMappingResponsePrivate::DeleteBasePathMappingResponsePrivate(
    DeleteBasePathMappingResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteBasePathMapping response element from \a xml.
 */
void DeleteBasePathMappingResponsePrivate::parseDeleteBasePathMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBasePathMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
