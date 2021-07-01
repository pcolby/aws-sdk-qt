/*
    Copyright 2013-2021 Paul Colby

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

#include "activatekeysigningkeyresponse.h"
#include "activatekeysigningkeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ActivateKeySigningKeyResponse
 * \brief The ActivateKeySigningKeyResponse class provides an interace for Route53 ActivateKeySigningKey responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::activateKeySigningKey
 */

/*!
 * Constructs a ActivateKeySigningKeyResponse object for \a reply to \a request, with parent \a parent.
 */
ActivateKeySigningKeyResponse::ActivateKeySigningKeyResponse(
        const ActivateKeySigningKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ActivateKeySigningKeyResponsePrivate(this), parent)
{
    setRequest(new ActivateKeySigningKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ActivateKeySigningKeyRequest * ActivateKeySigningKeyResponse::request() const
{
    Q_D(const ActivateKeySigningKeyResponse);
    return static_cast<const ActivateKeySigningKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ActivateKeySigningKey \a response.
 */
void ActivateKeySigningKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ActivateKeySigningKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ActivateKeySigningKeyResponsePrivate
 * \brief The ActivateKeySigningKeyResponsePrivate class provides private implementation for ActivateKeySigningKeyResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ActivateKeySigningKeyResponsePrivate object with public implementation \a q.
 */
ActivateKeySigningKeyResponsePrivate::ActivateKeySigningKeyResponsePrivate(
    ActivateKeySigningKeyResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ActivateKeySigningKey response element from \a xml.
 */
void ActivateKeySigningKeyResponsePrivate::parseActivateKeySigningKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ActivateKeySigningKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
