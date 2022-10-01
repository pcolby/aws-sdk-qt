// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstageresponse.h"
#include "createstageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::CreateStageResponse
 * \brief The CreateStageResponse class provides an interace for ApiGateway CreateStage responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::createStage
 */

/*!
 * Constructs a CreateStageResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStageResponse::CreateStageResponse(
        const CreateStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new CreateStageResponsePrivate(this), parent)
{
    setRequest(new CreateStageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStageRequest * CreateStageResponse::request() const
{
    Q_D(const CreateStageResponse);
    return static_cast<const CreateStageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway CreateStage \a response.
 */
void CreateStageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::CreateStageResponsePrivate
 * \brief The CreateStageResponsePrivate class provides private implementation for CreateStageResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a CreateStageResponsePrivate object with public implementation \a q.
 */
CreateStageResponsePrivate::CreateStageResponsePrivate(
    CreateStageResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway CreateStage response element from \a xml.
 */
void CreateStageResponsePrivate::parseCreateStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
