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

#include "getstreamingdistributionconfigresponse.h"
#include "getstreamingdistributionconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetStreamingDistributionConfigResponse
 * \brief The GetStreamingDistributionConfigResponse class provides an interace for CloudFront GetStreamingDistributionConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getStreamingDistributionConfig
 */

/*!
 * Constructs a GetStreamingDistributionConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetStreamingDistributionConfigResponse::GetStreamingDistributionConfigResponse(
        const GetStreamingDistributionConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetStreamingDistributionConfigResponsePrivate(this), parent)
{
    setRequest(new GetStreamingDistributionConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStreamingDistributionConfigRequest * GetStreamingDistributionConfigResponse::request() const
{
    Q_D(const GetStreamingDistributionConfigResponse);
    return static_cast<const GetStreamingDistributionConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetStreamingDistributionConfig \a response.
 */
void GetStreamingDistributionConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStreamingDistributionConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetStreamingDistributionConfigResponsePrivate
 * \brief The GetStreamingDistributionConfigResponsePrivate class provides private implementation for GetStreamingDistributionConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetStreamingDistributionConfigResponsePrivate object with public implementation \a q.
 */
GetStreamingDistributionConfigResponsePrivate::GetStreamingDistributionConfigResponsePrivate(
    GetStreamingDistributionConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetStreamingDistributionConfig response element from \a xml.
 */
void GetStreamingDistributionConfigResponsePrivate::parseGetStreamingDistributionConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStreamingDistributionConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
