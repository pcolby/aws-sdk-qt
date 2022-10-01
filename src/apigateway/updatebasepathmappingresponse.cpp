// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebasepathmappingresponse.h"
#include "updatebasepathmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateBasePathMappingResponse
 * \brief The UpdateBasePathMappingResponse class provides an interace for ApiGateway UpdateBasePathMapping responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateBasePathMapping
 */

/*!
 * Constructs a UpdateBasePathMappingResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBasePathMappingResponse::UpdateBasePathMappingResponse(
        const UpdateBasePathMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateBasePathMappingResponsePrivate(this), parent)
{
    setRequest(new UpdateBasePathMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBasePathMappingRequest * UpdateBasePathMappingResponse::request() const
{
    Q_D(const UpdateBasePathMappingResponse);
    return static_cast<const UpdateBasePathMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateBasePathMapping \a response.
 */
void UpdateBasePathMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBasePathMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateBasePathMappingResponsePrivate
 * \brief The UpdateBasePathMappingResponsePrivate class provides private implementation for UpdateBasePathMappingResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateBasePathMappingResponsePrivate object with public implementation \a q.
 */
UpdateBasePathMappingResponsePrivate::UpdateBasePathMappingResponsePrivate(
    UpdateBasePathMappingResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateBasePathMapping response element from \a xml.
 */
void UpdateBasePathMappingResponsePrivate::parseUpdateBasePathMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBasePathMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
