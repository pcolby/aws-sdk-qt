// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemethodresponse.h"
#include "updatemethodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateMethodResponse
 * \brief The UpdateMethodResponse class provides an interace for ApiGateway UpdateMethod responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateMethod
 */

/*!
 * Constructs a UpdateMethodResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMethodResponse::UpdateMethodResponse(
        const UpdateMethodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateMethodResponsePrivate(this), parent)
{
    setRequest(new UpdateMethodRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMethodRequest * UpdateMethodResponse::request() const
{
    Q_D(const UpdateMethodResponse);
    return static_cast<const UpdateMethodRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateMethod \a response.
 */
void UpdateMethodResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMethodResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateMethodResponsePrivate
 * \brief The UpdateMethodResponsePrivate class provides private implementation for UpdateMethodResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateMethodResponsePrivate object with public implementation \a q.
 */
UpdateMethodResponsePrivate::UpdateMethodResponsePrivate(
    UpdateMethodResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateMethod response element from \a xml.
 */
void UpdateMethodResponsePrivate::parseUpdateMethodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMethodResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
