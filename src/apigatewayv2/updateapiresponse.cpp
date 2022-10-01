// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapiresponse.h"
#include "updateapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateApiResponse
 * \brief The UpdateApiResponse class provides an interace for ApiGatewayV2 UpdateApi responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateApi
 */

/*!
 * Constructs a UpdateApiResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApiResponse::UpdateApiResponse(
        const UpdateApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new UpdateApiResponsePrivate(this), parent)
{
    setRequest(new UpdateApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApiRequest * UpdateApiResponse::request() const
{
    Q_D(const UpdateApiResponse);
    return static_cast<const UpdateApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 UpdateApi \a response.
 */
void UpdateApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateApiResponsePrivate
 * \brief The UpdateApiResponsePrivate class provides private implementation for UpdateApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateApiResponsePrivate object with public implementation \a q.
 */
UpdateApiResponsePrivate::UpdateApiResponsePrivate(
    UpdateApiResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 UpdateApi response element from \a xml.
 */
void UpdateApiResponsePrivate::parseUpdateApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
