// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
