// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
