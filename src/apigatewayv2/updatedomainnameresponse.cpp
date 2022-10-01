// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainnameresponse.h"
#include "updatedomainnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateDomainNameResponse
 * \brief The UpdateDomainNameResponse class provides an interace for ApiGatewayV2 UpdateDomainName responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateDomainName
 */

/*!
 * Constructs a UpdateDomainNameResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDomainNameResponse::UpdateDomainNameResponse(
        const UpdateDomainNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new UpdateDomainNameResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainNameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDomainNameRequest * UpdateDomainNameResponse::request() const
{
    Q_D(const UpdateDomainNameResponse);
    return static_cast<const UpdateDomainNameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 UpdateDomainName \a response.
 */
void UpdateDomainNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDomainNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateDomainNameResponsePrivate
 * \brief The UpdateDomainNameResponsePrivate class provides private implementation for UpdateDomainNameResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateDomainNameResponsePrivate object with public implementation \a q.
 */
UpdateDomainNameResponsePrivate::UpdateDomainNameResponsePrivate(
    UpdateDomainNameResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 UpdateDomainName response element from \a xml.
 */
void UpdateDomainNameResponsePrivate::parseUpdateDomainNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainNameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws
