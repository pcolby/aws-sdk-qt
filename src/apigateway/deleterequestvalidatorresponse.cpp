// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterequestvalidatorresponse.h"
#include "deleterequestvalidatorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteRequestValidatorResponse
 * \brief The DeleteRequestValidatorResponse class provides an interace for ApiGateway DeleteRequestValidator responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteRequestValidator
 */

/*!
 * Constructs a DeleteRequestValidatorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRequestValidatorResponse::DeleteRequestValidatorResponse(
        const DeleteRequestValidatorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteRequestValidatorResponsePrivate(this), parent)
{
    setRequest(new DeleteRequestValidatorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRequestValidatorRequest * DeleteRequestValidatorResponse::request() const
{
    Q_D(const DeleteRequestValidatorResponse);
    return static_cast<const DeleteRequestValidatorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteRequestValidator \a response.
 */
void DeleteRequestValidatorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRequestValidatorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteRequestValidatorResponsePrivate
 * \brief The DeleteRequestValidatorResponsePrivate class provides private implementation for DeleteRequestValidatorResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteRequestValidatorResponsePrivate object with public implementation \a q.
 */
DeleteRequestValidatorResponsePrivate::DeleteRequestValidatorResponsePrivate(
    DeleteRequestValidatorResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteRequestValidator response element from \a xml.
 */
void DeleteRequestValidatorResponsePrivate::parseDeleteRequestValidatorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRequestValidatorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
