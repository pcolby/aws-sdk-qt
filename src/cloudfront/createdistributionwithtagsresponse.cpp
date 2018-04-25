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

#include "createdistributionwithtagsresponse.h"
#include "createdistributionwithtagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateDistributionWithTagsResponse
 * \brief The CreateDistributionWithTagsResponse class provides an interace for CloudFront CreateDistributionWithTags responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createDistributionWithTags
 */

/*!
 * Constructs a CreateDistributionWithTagsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDistributionWithTagsResponse::CreateDistributionWithTagsResponse(
        const CreateDistributionWithTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateDistributionWithTagsResponsePrivate(this), parent)
{
    setRequest(new CreateDistributionWithTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDistributionWithTagsRequest * CreateDistributionWithTagsResponse::request() const
{
    Q_D(const CreateDistributionWithTagsResponse);
    return static_cast<const CreateDistributionWithTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateDistributionWithTags \a response.
 */
void CreateDistributionWithTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDistributionWithTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateDistributionWithTagsResponsePrivate
 * \brief The CreateDistributionWithTagsResponsePrivate class provides private implementation for CreateDistributionWithTagsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateDistributionWithTagsResponsePrivate object with public implementation \a q.
 */
CreateDistributionWithTagsResponsePrivate::CreateDistributionWithTagsResponsePrivate(
    CreateDistributionWithTagsResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateDistributionWithTags response element from \a xml.
 */
void CreateDistributionWithTagsResponsePrivate::parseCreateDistributionWithTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDistributionWithTagsResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
