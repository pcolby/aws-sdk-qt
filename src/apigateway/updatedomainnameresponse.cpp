// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainnameresponse.h"
#include "updatedomainnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::UpdateDomainNameResponse
 * \brief The UpdateDomainNameResponse class provides an interace for ApiGateway UpdateDomainName responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::updateDomainName
 */

/*!
 * Constructs a UpdateDomainNameResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDomainNameResponse::UpdateDomainNameResponse(
        const UpdateDomainNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new UpdateDomainNameResponsePrivate(this), parent)
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
 * Parses a successful ApiGateway UpdateDomainName \a response.
 */
void UpdateDomainNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDomainNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::UpdateDomainNameResponsePrivate
 * \brief The UpdateDomainNameResponsePrivate class provides private implementation for UpdateDomainNameResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a UpdateDomainNameResponsePrivate object with public implementation \a q.
 */
UpdateDomainNameResponsePrivate::UpdateDomainNameResponsePrivate(
    UpdateDomainNameResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway UpdateDomainName response element from \a xml.
 */
void UpdateDomainNameResponsePrivate::parseUpdateDomainNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainNameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws
