// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedistributionresponse.h"
#include "updatedistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateDistributionResponse
 * \brief The UpdateDistributionResponse class provides an interace for CloudFront UpdateDistribution responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateDistribution
 */

/*!
 * Constructs a UpdateDistributionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDistributionResponse::UpdateDistributionResponse(
        const UpdateDistributionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateDistributionResponsePrivate(this), parent)
{
    setRequest(new UpdateDistributionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDistributionRequest * UpdateDistributionResponse::request() const
{
    Q_D(const UpdateDistributionResponse);
    return static_cast<const UpdateDistributionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront UpdateDistribution \a response.
 */
void UpdateDistributionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDistributionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::UpdateDistributionResponsePrivate
 * \brief The UpdateDistributionResponsePrivate class provides private implementation for UpdateDistributionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateDistributionResponsePrivate object with public implementation \a q.
 */
UpdateDistributionResponsePrivate::UpdateDistributionResponsePrivate(
    UpdateDistributionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront UpdateDistribution response element from \a xml.
 */
void UpdateDistributionResponsePrivate::parseUpdateDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDistributionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
