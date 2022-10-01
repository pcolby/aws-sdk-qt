// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
