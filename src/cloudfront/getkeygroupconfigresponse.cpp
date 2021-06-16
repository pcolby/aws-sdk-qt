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

#include "getkeygroupconfigresponse.h"
#include "getkeygroupconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetKeyGroupConfigResponse
 * \brief The GetKeyGroupConfigResponse class provides an interace for CloudFront GetKeyGroupConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getKeyGroupConfig
 */

/*!
 * Constructs a GetKeyGroupConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetKeyGroupConfigResponse::GetKeyGroupConfigResponse(
        const GetKeyGroupConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetKeyGroupConfigResponsePrivate(this), parent)
{
    setRequest(new GetKeyGroupConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetKeyGroupConfigRequest * GetKeyGroupConfigResponse::request() const
{
    Q_D(const GetKeyGroupConfigResponse);
    return static_cast<const GetKeyGroupConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetKeyGroupConfig \a response.
 */
void GetKeyGroupConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetKeyGroupConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetKeyGroupConfigResponsePrivate
 * \brief The GetKeyGroupConfigResponsePrivate class provides private implementation for GetKeyGroupConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetKeyGroupConfigResponsePrivate object with public implementation \a q.
 */
GetKeyGroupConfigResponsePrivate::GetKeyGroupConfigResponsePrivate(
    GetKeyGroupConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetKeyGroupConfig response element from \a xml.
 */
void GetKeyGroupConfigResponsePrivate::parseGetKeyGroupConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetKeyGroupConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
