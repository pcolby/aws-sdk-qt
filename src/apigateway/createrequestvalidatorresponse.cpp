// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrequestvalidatorresponse.h"
#include "createrequestvalidatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateRequestValidatorResponse
 * \brief The CreateRequestValidatorResponse class provides an interace for ApiGateway CreateRequestValidator responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createRequestValidator
 */

/*!
 * Constructs a CreateRequestValidatorResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRequestValidatorResponse::CreateRequestValidatorResponse(
        const CreateRequestValidatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new CreateRequestValidatorResponsePrivate(this), parent)
{
    setRequest(new CreateRequestValidatorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRequestValidatorRequest * CreateRequestValidatorResponse::request() const
{
    Q_D(const CreateRequestValidatorResponse);
    return static_cast<const CreateRequestValidatorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway CreateRequestValidator \a response.
 */
void CreateRequestValidatorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRequestValidatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::CreateRequestValidatorResponsePrivate
 * \brief The CreateRequestValidatorResponsePrivate class provides private implementation for CreateRequestValidatorResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateRequestValidatorResponsePrivate object with public implementation \a q.
 */
CreateRequestValidatorResponsePrivate::CreateRequestValidatorResponsePrivate(
    CreateRequestValidatorResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway CreateRequestValidator response element from \a xml.
 */
void CreateRequestValidatorResponsePrivate::parseCreateRequestValidatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRequestValidatorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
