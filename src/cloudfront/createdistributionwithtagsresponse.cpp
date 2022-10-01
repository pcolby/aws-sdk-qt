// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(CreateDistributionWithTagsResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
