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

#include "getdistributionconfigresponse.h"
#include "getdistributionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetDistributionConfigResponse
 * \brief The GetDistributionConfigResponse class provides an interace for CloudFront GetDistributionConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getDistributionConfig
 */

/*!
 * Constructs a GetDistributionConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetDistributionConfigResponse::GetDistributionConfigResponse(
        const GetDistributionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetDistributionConfigResponsePrivate(this), parent)
{
    setRequest(new GetDistributionConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDistributionConfigRequest * GetDistributionConfigResponse::request() const
{
    Q_D(const GetDistributionConfigResponse);
    return static_cast<const GetDistributionConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetDistributionConfig \a response.
 */
void GetDistributionConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDistributionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetDistributionConfigResponsePrivate
 * \brief The GetDistributionConfigResponsePrivate class provides private implementation for GetDistributionConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetDistributionConfigResponsePrivate object with public implementation \a q.
 */
GetDistributionConfigResponsePrivate::GetDistributionConfigResponsePrivate(
    GetDistributionConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetDistributionConfig response element from \a xml.
 */
void GetDistributionConfigResponsePrivate::parseGetDistributionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDistributionConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
