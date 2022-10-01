// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstreamingdistributionresponse.h"
#include "createstreamingdistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateStreamingDistributionResponse
 * \brief The CreateStreamingDistributionResponse class provides an interace for CloudFront CreateStreamingDistribution responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createStreamingDistribution
 */

/*!
 * Constructs a CreateStreamingDistributionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStreamingDistributionResponse::CreateStreamingDistributionResponse(
        const CreateStreamingDistributionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateStreamingDistributionResponsePrivate(this), parent)
{
    setRequest(new CreateStreamingDistributionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStreamingDistributionRequest * CreateStreamingDistributionResponse::request() const
{
    Q_D(const CreateStreamingDistributionResponse);
    return static_cast<const CreateStreamingDistributionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateStreamingDistribution \a response.
 */
void CreateStreamingDistributionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStreamingDistributionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateStreamingDistributionResponsePrivate
 * \brief The CreateStreamingDistributionResponsePrivate class provides private implementation for CreateStreamingDistributionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateStreamingDistributionResponsePrivate object with public implementation \a q.
 */
CreateStreamingDistributionResponsePrivate::CreateStreamingDistributionResponsePrivate(
    CreateStreamingDistributionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateStreamingDistribution response element from \a xml.
 */
void CreateStreamingDistributionResponsePrivate::parseCreateStreamingDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamingDistributionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
