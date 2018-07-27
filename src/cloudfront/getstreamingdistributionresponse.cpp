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

#include "getstreamingdistributionresponse.h"
#include "getstreamingdistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetStreamingDistributionResponse
 * \brief The GetStreamingDistributionResponse class provides an interace for CloudFront GetStreamingDistribution responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getStreamingDistribution
 */

/*!
 * Constructs a GetStreamingDistributionResponse object for \a reply to \a request, with parent \a parent.
 */
GetStreamingDistributionResponse::GetStreamingDistributionResponse(
        const GetStreamingDistributionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetStreamingDistributionResponsePrivate(this), parent)
{
    setRequest(new GetStreamingDistributionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStreamingDistributionRequest * GetStreamingDistributionResponse::request() const
{
    Q_D(const GetStreamingDistributionResponse);
    return static_cast<const GetStreamingDistributionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetStreamingDistribution \a response.
 */
void GetStreamingDistributionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStreamingDistributionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetStreamingDistributionResponsePrivate
 * \brief The GetStreamingDistributionResponsePrivate class provides private implementation for GetStreamingDistributionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetStreamingDistributionResponsePrivate object with public implementation \a q.
 */
GetStreamingDistributionResponsePrivate::GetStreamingDistributionResponsePrivate(
    GetStreamingDistributionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetStreamingDistribution response element from \a xml.
 */
void GetStreamingDistributionResponsePrivate::parseGetStreamingDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStreamingDistributionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
