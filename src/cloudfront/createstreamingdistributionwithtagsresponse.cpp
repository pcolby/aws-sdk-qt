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
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
