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

#include "deletepublickeyresponse.h"
#include "deletepublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeletePublicKeyResponse
 * \brief The DeletePublicKeyResponse class provides an interace for CloudFront DeletePublicKey responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deletePublicKey
 */

/*!
 * Constructs a DeletePublicKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePublicKeyResponse::DeletePublicKeyResponse(
        const DeletePublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeletePublicKeyResponsePrivate(this), parent)
{
    setRequest(new DeletePublicKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePublicKeyRequest * DeletePublicKeyResponse::request() const
{
    Q_D(const DeletePublicKeyResponse);
    return static_cast<const DeletePublicKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DeletePublicKey \a response.
 */
void DeletePublicKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeletePublicKeyResponsePrivate
 * \brief The DeletePublicKeyResponsePrivate class provides private implementation for DeletePublicKeyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeletePublicKeyResponsePrivate object with public implementation \a q.
 */
DeletePublicKeyResponsePrivate::DeletePublicKeyResponsePrivate(
    DeletePublicKeyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeletePublicKey response element from \a xml.
 */
void DeletePublicKeyResponsePrivate::parseDeletePublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePublicKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
