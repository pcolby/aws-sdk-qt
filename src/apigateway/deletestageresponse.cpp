// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestageresponse.h"
#include "deletestageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteStageResponse
 * \brief The DeleteStageResponse class provides an interace for ApiGateway DeleteStage responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteStage
 */

/*!
 * Constructs a DeleteStageResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStageResponse::DeleteStageResponse(
        const DeleteStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new DeleteStageResponsePrivate(this), parent)
{
    setRequest(new DeleteStageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStageRequest * DeleteStageResponse::request() const
{
    Q_D(const DeleteStageResponse);
    return static_cast<const DeleteStageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway DeleteStage \a response.
 */
void DeleteStageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::DeleteStageResponsePrivate
 * \brief The DeleteStageResponsePrivate class provides private implementation for DeleteStageResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteStageResponsePrivate object with public implementation \a q.
 */
DeleteStageResponsePrivate::DeleteStageResponsePrivate(
    DeleteStageResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway DeleteStage response element from \a xml.
 */
void DeleteStageResponsePrivate::parseDeleteStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
