// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateauthorizerresponse.h"
#include "updateauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateAuthorizerResponse
 * \brief The UpdateAuthorizerResponse class provides an interace for ApiGatewayV2 UpdateAuthorizer responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateAuthorizer
 */

/*!
 * Constructs a UpdateAuthorizerResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAuthorizerResponse::UpdateAuthorizerResponse(
        const UpdateAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new UpdateAuthorizerResponsePrivate(this), parent)
{
    setRequest(new UpdateAuthorizerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAuthorizerRequest * UpdateAuthorizerResponse::request() const
{
    Q_D(const UpdateAuthorizerResponse);
    return static_cast<const UpdateAuthorizerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 UpdateAuthorizer \a response.
 */
void UpdateAuthorizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAuthorizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateAuthorizerResponsePrivate
 * \brief The UpdateAuthorizerResponsePrivate class provides private implementation for UpdateAuthorizerResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateAuthorizerResponsePrivate object with public implementation \a q.
 */
UpdateAuthorizerResponsePrivate::UpdateAuthorizerResponsePrivate(
    UpdateAuthorizerResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 UpdateAuthorizer response element from \a xml.
 */
void UpdateAuthorizerResponsePrivate::parseUpdateAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAuthorizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
