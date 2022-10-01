// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresourceresponse.h"
#include "updateresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateResourceResponse
 * \brief The UpdateResourceResponse class provides an interace for ApiGateway UpdateResource responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateResource
 */

/*!
 * Constructs a UpdateResourceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateResourceResponse::UpdateResourceResponse(
        const UpdateResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateResourceResponsePrivate(this), parent)
{
    setRequest(new UpdateResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateResourceRequest * UpdateResourceResponse::request() const
{
    Q_D(const UpdateResourceResponse);
    return static_cast<const UpdateResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateResource \a response.
 */
void UpdateResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateResourceResponsePrivate
 * \brief The UpdateResourceResponsePrivate class provides private implementation for UpdateResourceResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateResourceResponsePrivate object with public implementation \a q.
 */
UpdateResourceResponsePrivate::UpdateResourceResponsePrivate(
    UpdateResourceResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateResource response element from \a xml.
 */
void UpdateResourceResponsePrivate::parseUpdateResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
