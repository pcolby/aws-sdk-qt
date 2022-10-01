// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelresponse.h"
#include "deletemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteModelResponse
 * \brief The DeleteModelResponse class provides an interace for ApiGateway DeleteModel responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteModel
 */

/*!
 * Constructs a DeleteModelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteModelResponse::DeleteModelResponse(
        const DeleteModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteModelResponsePrivate(this), parent)
{
    setRequest(new DeleteModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteModelRequest * DeleteModelResponse::request() const
{
    Q_D(const DeleteModelResponse);
    return static_cast<const DeleteModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteModel \a response.
 */
void DeleteModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteModelResponsePrivate
 * \brief The DeleteModelResponsePrivate class provides private implementation for DeleteModelResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteModelResponsePrivate object with public implementation \a q.
 */
DeleteModelResponsePrivate::DeleteModelResponsePrivate(
    DeleteModelResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteModel response element from \a xml.
 */
void DeleteModelResponsePrivate::parseDeleteModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
