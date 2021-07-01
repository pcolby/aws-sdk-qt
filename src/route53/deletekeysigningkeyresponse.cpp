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

#include "deletekeysigningkeyresponse.h"
#include "deletekeysigningkeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteKeySigningKeyResponse
 * \brief The DeleteKeySigningKeyResponse class provides an interace for Route53 DeleteKeySigningKey responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::deleteKeySigningKey
 */

/*!
 * Constructs a DeleteKeySigningKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteKeySigningKeyResponse::DeleteKeySigningKeyResponse(
        const DeleteKeySigningKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteKeySigningKeyResponsePrivate(this), parent)
{
    setRequest(new DeleteKeySigningKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteKeySigningKeyRequest * DeleteKeySigningKeyResponse::request() const
{
    Q_D(const DeleteKeySigningKeyResponse);
    return static_cast<const DeleteKeySigningKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 DeleteKeySigningKey \a response.
 */
void DeleteKeySigningKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteKeySigningKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::DeleteKeySigningKeyResponsePrivate
 * \brief The DeleteKeySigningKeyResponsePrivate class provides private implementation for DeleteKeySigningKeyResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteKeySigningKeyResponsePrivate object with public implementation \a q.
 */
DeleteKeySigningKeyResponsePrivate::DeleteKeySigningKeyResponsePrivate(
    DeleteKeySigningKeyResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 DeleteKeySigningKey response element from \a xml.
 */
void DeleteKeySigningKeyResponsePrivate::parseDeleteKeySigningKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteKeySigningKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
