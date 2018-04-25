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

#include "getpublickeyconfigresponse.h"
#include "getpublickeyconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetPublicKeyConfigResponse
 * \brief The GetPublicKeyConfigResponse class provides an interace for CloudFront GetPublicKeyConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getPublicKeyConfig
 */

/*!
 * Constructs a GetPublicKeyConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetPublicKeyConfigResponse::GetPublicKeyConfigResponse(
        const GetPublicKeyConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetPublicKeyConfigResponsePrivate(this), parent)
{
    setRequest(new GetPublicKeyConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPublicKeyConfigRequest * GetPublicKeyConfigResponse::request() const
{
    Q_D(const GetPublicKeyConfigResponse);
    return static_cast<const GetPublicKeyConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetPublicKeyConfig \a response.
 */
void GetPublicKeyConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetPublicKeyConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetPublicKeyConfigResponsePrivate
 * \brief The GetPublicKeyConfigResponsePrivate class provides private implementation for GetPublicKeyConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetPublicKeyConfigResponsePrivate object with public implementation \a q.
 */
GetPublicKeyConfigResponsePrivate::GetPublicKeyConfigResponsePrivate(
    GetPublicKeyConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetPublicKeyConfig response element from \a xml.
 */
void GetPublicKeyConfigResponsePrivate::parseGetPublicKeyConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPublicKeyConfigResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
