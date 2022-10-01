// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestageresponse.h"
#include "deletestageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteStageResponse
 * \brief The DeleteStageResponse class provides an interace for ApiGatewayV2 DeleteStage responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteStage
 */

/*!
 * Constructs a DeleteStageResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStageResponse::DeleteStageResponse(
        const DeleteStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteStageResponsePrivate(this), parent)
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
 * Parses a successful ApiGatewayV2 DeleteStage \a response.
 */
void DeleteStageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteStageResponsePrivate
 * \brief The DeleteStageResponsePrivate class provides private implementation for DeleteStageResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteStageResponsePrivate object with public implementation \a q.
 */
DeleteStageResponsePrivate::DeleteStageResponsePrivate(
    DeleteStageResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteStage response element from \a xml.
 */
void DeleteStageResponsePrivate::parseDeleteStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
