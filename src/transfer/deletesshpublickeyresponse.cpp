/*
    Copyright 2013-2019 Paul Colby

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

#include "deletesshpublickeyresponse.h"
#include "deletesshpublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DeleteSshPublicKeyResponse
 * \brief The DeleteSshPublicKeyResponse class provides an interace for Transfer DeleteSshPublicKey responses.
 *
 * \inmodule QtAwsTransfer
 *
 *
 * \sa TransferClient::deleteSshPublicKey
 */

/*!
 * Constructs a DeleteSshPublicKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSshPublicKeyResponse::DeleteSshPublicKeyResponse(
        const DeleteSshPublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DeleteSshPublicKeyResponsePrivate(this), parent)
{
    setRequest(new DeleteSshPublicKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSshPublicKeyRequest * DeleteSshPublicKeyResponse::request() const
{
    Q_D(const DeleteSshPublicKeyResponse);
    return static_cast<const DeleteSshPublicKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DeleteSshPublicKey \a response.
 */
void DeleteSshPublicKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSshPublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DeleteSshPublicKeyResponsePrivate
 * \brief The DeleteSshPublicKeyResponsePrivate class provides private implementation for DeleteSshPublicKeyResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DeleteSshPublicKeyResponsePrivate object with public implementation \a q.
 */
DeleteSshPublicKeyResponsePrivate::DeleteSshPublicKeyResponsePrivate(
    DeleteSshPublicKeyResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DeleteSshPublicKey response element from \a xml.
 */
void DeleteSshPublicKeyResponsePrivate::parseDeleteSshPublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSshPublicKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
