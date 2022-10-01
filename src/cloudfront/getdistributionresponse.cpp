// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdistributionresponse.h"
#include "getdistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetDistributionResponse
 * \brief The GetDistributionResponse class provides an interace for CloudFront GetDistribution responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getDistribution
 */

/*!
 * Constructs a GetDistributionResponse object for \a reply to \a request, with parent \a parent.
 */
GetDistributionResponse::GetDistributionResponse(
        const GetDistributionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetDistributionResponsePrivate(this), parent)
{
    setRequest(new GetDistributionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDistributionRequest * GetDistributionResponse::request() const
{
    Q_D(const GetDistributionResponse);
    return static_cast<const GetDistributionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetDistribution \a response.
 */
void GetDistributionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDistributionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetDistributionResponsePrivate
 * \brief The GetDistributionResponsePrivate class provides private implementation for GetDistributionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetDistributionResponsePrivate object with public implementation \a q.
 */
GetDistributionResponsePrivate::GetDistributionResponsePrivate(
    GetDistributionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetDistribution response element from \a xml.
 */
void GetDistributionResponsePrivate::parseGetDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDistributionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
