// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestreamingdistributionresponse.h"
#include "deletestreamingdistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteStreamingDistributionResponse
 * \brief The DeleteStreamingDistributionResponse class provides an interace for CloudFront DeleteStreamingDistribution responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteStreamingDistribution
 */

/*!
 * Constructs a DeleteStreamingDistributionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStreamingDistributionResponse::DeleteStreamingDistributionResponse(
        const DeleteStreamingDistributionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteStreamingDistributionResponsePrivate(this), parent)
{
    setRequest(new DeleteStreamingDistributionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStreamingDistributionRequest * DeleteStreamingDistributionResponse::request() const
{
    Q_D(const DeleteStreamingDistributionResponse);
    return static_cast<const DeleteStreamingDistributionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DeleteStreamingDistribution \a response.
 */
void DeleteStreamingDistributionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStreamingDistributionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeleteStreamingDistributionResponsePrivate
 * \brief The DeleteStreamingDistributionResponsePrivate class provides private implementation for DeleteStreamingDistributionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteStreamingDistributionResponsePrivate object with public implementation \a q.
 */
DeleteStreamingDistributionResponsePrivate::DeleteStreamingDistributionResponsePrivate(
    DeleteStreamingDistributionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeleteStreamingDistribution response element from \a xml.
 */
void DeleteStreamingDistributionResponsePrivate::parseDeleteStreamingDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStreamingDistributionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
