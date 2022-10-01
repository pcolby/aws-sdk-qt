// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updaterequestvalidatorresponse.h"
#include "updaterequestvalidatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateRequestValidatorResponse
 * \brief The UpdateRequestValidatorResponse class provides an interace for ApiGateway UpdateRequestValidator responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateRequestValidator
 */

/*!
 * Constructs a UpdateRequestValidatorResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRequestValidatorResponse::UpdateRequestValidatorResponse(
        const UpdateRequestValidatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateRequestValidatorResponsePrivate(this), parent)
{
    setRequest(new UpdateRequestValidatorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRequestValidatorRequest * UpdateRequestValidatorResponse::request() const
{
    Q_D(const UpdateRequestValidatorResponse);
    return static_cast<const UpdateRequestValidatorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateRequestValidator \a response.
 */
void UpdateRequestValidatorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRequestValidatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateRequestValidatorResponsePrivate
 * \brief The UpdateRequestValidatorResponsePrivate class provides private implementation for UpdateRequestValidatorResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateRequestValidatorResponsePrivate object with public implementation \a q.
 */
UpdateRequestValidatorResponsePrivate::UpdateRequestValidatorResponsePrivate(
    UpdateRequestValidatorResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateRequestValidator response element from \a xml.
 */
void UpdateRequestValidatorResponsePrivate::parseUpdateRequestValidatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRequestValidatorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
