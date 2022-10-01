// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestageresponse.h"
#include "updatestageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateStageResponse
 * \brief The UpdateStageResponse class provides an interace for ApiGateway UpdateStage responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateStage
 */

/*!
 * Constructs a UpdateStageResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStageResponse::UpdateStageResponse(
        const UpdateStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateStageResponsePrivate(this), parent)
{
    setRequest(new UpdateStageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStageRequest * UpdateStageResponse::request() const
{
    Q_D(const UpdateStageResponse);
    return static_cast<const UpdateStageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway UpdateStage \a response.
 */
void UpdateStageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateStageResponsePrivate
 * \brief The UpdateStageResponsePrivate class provides private implementation for UpdateStageResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateStageResponsePrivate object with public implementation \a q.
 */
UpdateStageResponsePrivate::UpdateStageResponsePrivate(
    UpdateStageResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateStage response element from \a xml.
 */
void UpdateStageResponsePrivate::parseUpdateStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
