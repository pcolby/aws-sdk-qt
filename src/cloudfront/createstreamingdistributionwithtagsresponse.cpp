// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstreamingdistributionwithtagsresponse.h"
#include "createstreamingdistributionwithtagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateStreamingDistributionWithTagsResponse
 * \brief The CreateStreamingDistributionWithTagsResponse class provides an interace for CloudFront CreateStreamingDistributionWithTags responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createStreamingDistributionWithTags
 */

/*!
 * Constructs a CreateStreamingDistributionWithTagsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStreamingDistributionWithTagsResponse::CreateStreamingDistributionWithTagsResponse(
        const CreateStreamingDistributionWithTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateStreamingDistributionWithTagsResponsePrivate(this), parent)
{
    setRequest(new CreateStreamingDistributionWithTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStreamingDistributionWithTagsRequest * CreateStreamingDistributionWithTagsResponse::request() const
{
    Q_D(const CreateStreamingDistributionWithTagsResponse);
    return static_cast<const CreateStreamingDistributionWithTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateStreamingDistributionWithTags \a response.
 */
void CreateStreamingDistributionWithTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStreamingDistributionWithTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateStreamingDistributionWithTagsResponsePrivate
 * \brief The CreateStreamingDistributionWithTagsResponsePrivate class provides private implementation for CreateStreamingDistributionWithTagsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateStreamingDistributionWithTagsResponsePrivate object with public implementation \a q.
 */
CreateStreamingDistributionWithTagsResponsePrivate::CreateStreamingDistributionWithTagsResponsePrivate(
    CreateStreamingDistributionWithTagsResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateStreamingDistributionWithTags response element from \a xml.
 */
void CreateStreamingDistributionWithTagsResponsePrivate::parseCreateStreamingDistributionWithTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamingDistributionWithTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
