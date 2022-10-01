// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresourceresponse.h"
#include "createresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateResourceResponse
 * \brief The CreateResourceResponse class provides an interace for ApiGateway CreateResource responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createResource
 */

/*!
 * Constructs a CreateResourceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateResourceResponse::CreateResourceResponse(
        const CreateResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new CreateResourceResponsePrivate(this), parent)
{
    setRequest(new CreateResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateResourceRequest * CreateResourceResponse::request() const
{
    Q_D(const CreateResourceResponse);
    return static_cast<const CreateResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway CreateResource \a response.
 */
void CreateResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::CreateResourceResponsePrivate
 * \brief The CreateResourceResponsePrivate class provides private implementation for CreateResourceResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateResourceResponsePrivate object with public implementation \a q.
 */
CreateResourceResponsePrivate::CreateResourceResponsePrivate(
    CreateResourceResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway CreateResource response element from \a xml.
 */
void CreateResourceResponsePrivate::parseCreateResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
