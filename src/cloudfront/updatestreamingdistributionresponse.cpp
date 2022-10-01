// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestreamingdistributionresponse.h"
#include "updatestreamingdistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateStreamingDistributionResponse
 * \brief The UpdateStreamingDistributionResponse class provides an interace for CloudFront UpdateStreamingDistribution responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateStreamingDistribution
 */

/*!
 * Constructs a UpdateStreamingDistributionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStreamingDistributionResponse::UpdateStreamingDistributionResponse(
        const UpdateStreamingDistributionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateStreamingDistributionResponsePrivate(this), parent)
{
    setRequest(new UpdateStreamingDistributionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStreamingDistributionRequest * UpdateStreamingDistributionResponse::request() const
{
    Q_D(const UpdateStreamingDistributionResponse);
    return static_cast<const UpdateStreamingDistributionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront UpdateStreamingDistribution \a response.
 */
void UpdateStreamingDistributionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStreamingDistributionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::UpdateStreamingDistributionResponsePrivate
 * \brief The UpdateStreamingDistributionResponsePrivate class provides private implementation for UpdateStreamingDistributionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateStreamingDistributionResponsePrivate object with public implementation \a q.
 */
UpdateStreamingDistributionResponsePrivate::UpdateStreamingDistributionResponsePrivate(
    UpdateStreamingDistributionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront UpdateStreamingDistribution response element from \a xml.
 */
void UpdateStreamingDistributionResponsePrivate::parseUpdateStreamingDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStreamingDistributionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
