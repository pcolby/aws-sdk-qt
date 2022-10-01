// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapimappingresponse.h"
#include "updateapimappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateApiMappingResponse
 * \brief The UpdateApiMappingResponse class provides an interace for ApiGatewayV2 UpdateApiMapping responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateApiMapping
 */

/*!
 * Constructs a UpdateApiMappingResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApiMappingResponse::UpdateApiMappingResponse(
        const UpdateApiMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new UpdateApiMappingResponsePrivate(this), parent)
{
    setRequest(new UpdateApiMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApiMappingRequest * UpdateApiMappingResponse::request() const
{
    Q_D(const UpdateApiMappingResponse);
    return static_cast<const UpdateApiMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 UpdateApiMapping \a response.
 */
void UpdateApiMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApiMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateApiMappingResponsePrivate
 * \brief The UpdateApiMappingResponsePrivate class provides private implementation for UpdateApiMappingResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateApiMappingResponsePrivate object with public implementation \a q.
 */
UpdateApiMappingResponsePrivate::UpdateApiMappingResponsePrivate(
    UpdateApiMappingResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 UpdateApiMapping response element from \a xml.
 */
void UpdateApiMappingResponsePrivate::parseUpdateApiMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApiMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
