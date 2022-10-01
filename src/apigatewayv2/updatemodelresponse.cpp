// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemodelresponse.h"
#include "updatemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateModelResponse
 * \brief The UpdateModelResponse class provides an interace for ApiGatewayV2 UpdateModel responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateModel
 */

/*!
 * Constructs a UpdateModelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateModelResponse::UpdateModelResponse(
        const UpdateModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new UpdateModelResponsePrivate(this), parent)
{
    setRequest(new UpdateModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateModelRequest * UpdateModelResponse::request() const
{
    Q_D(const UpdateModelResponse);
    return static_cast<const UpdateModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 UpdateModel \a response.
 */
void UpdateModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateModelResponsePrivate
 * \brief The UpdateModelResponsePrivate class provides private implementation for UpdateModelResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateModelResponsePrivate object with public implementation \a q.
 */
UpdateModelResponsePrivate::UpdateModelResponsePrivate(
    UpdateModelResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 UpdateModel response element from \a xml.
 */
void UpdateModelResponsePrivate::parseUpdateModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
