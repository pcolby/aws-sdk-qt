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

#include "getpublickeyresponse.h"
#include "getpublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetPublicKeyResponse
 * \brief The GetPublicKeyResponse class provides an interace for CloudFront GetPublicKey responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getPublicKey
 */

/*!
 * Constructs a GetPublicKeyResponse object for \a reply to \a request, with parent \a parent.
 */
GetPublicKeyResponse::GetPublicKeyResponse(
        const GetPublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetPublicKeyResponsePrivate(this), parent)
{
    setRequest(new GetPublicKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPublicKeyRequest * GetPublicKeyResponse::request() const
{
    Q_D(const GetPublicKeyResponse);
    return static_cast<const GetPublicKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetPublicKey \a response.
 */
void GetPublicKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetPublicKeyResponsePrivate
 * \brief The GetPublicKeyResponsePrivate class provides private implementation for GetPublicKeyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetPublicKeyResponsePrivate object with public implementation \a q.
 */
GetPublicKeyResponsePrivate::GetPublicKeyResponsePrivate(
    GetPublicKeyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetPublicKey response element from \a xml.
 */
void GetPublicKeyResponsePrivate::parseGetPublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPublicKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
