/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "importapikeysresponse.h"
#include "importapikeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::ImportApiKeysResponse
 * \brief The ImportApiKeysResponse class provides an interace for APIGateway ImportApiKeys responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::importApiKeys
 */

/*!
 * Constructs a ImportApiKeysResponse object for \a reply to \a request, with parent \a parent.
 */
ImportApiKeysResponse::ImportApiKeysResponse(
        const ImportApiKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new ImportApiKeysResponsePrivate(this), parent)
{
    setRequest(new ImportApiKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportApiKeysRequest * ImportApiKeysResponse::request() const
{
    Q_D(const ImportApiKeysResponse);
    return static_cast<const ImportApiKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful APIGateway ImportApiKeys \a response.
 */
void ImportApiKeysResponse::parseSuccess(QIODevice &response)
{
    Q_D(ImportApiKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::ImportApiKeysResponsePrivate
 * \brief The ImportApiKeysResponsePrivate class provides private implementation for ImportApiKeysResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a ImportApiKeysResponsePrivate object with public implementation \a q.
 */
ImportApiKeysResponsePrivate::ImportApiKeysResponsePrivate(
    ImportApiKeysResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway ImportApiKeys response element from \a xml.
 */
void ImportApiKeysResponsePrivate::parseImportApiKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportApiKeysResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
