/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
 *
 * \brief The CreateDistributionWithTagsResponse class provides an interace for CloudFront CreateDistributionWithTags responses.
 *
 * \ingroup CloudFront
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
 * @brief  Constructs a new CreateDistributionWithTagsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const CreateDistributionWithTagsRequest * CreateDistributionWithTagsResponse::request() const
{
    Q_D(const CreateDistributionWithTagsResponse);
    return static_cast<const CreateDistributionWithTagsRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFront CreateDistributionWithTags response.
 *
 * @param  response  Response to parse.
 */
void CreateDistributionWithTagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDistributionWithTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateDistributionWithTagsResponsePrivate
 *
 * \brief Private implementation for CreateDistributionWithTagsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateDistributionWithTagsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDistributionWithTagsResponse instance.
 */
CreateDistributionWithTagsResponsePrivate::CreateDistributionWithTagsResponsePrivate(
    CreateDistributionWithTagsResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFront CreateDistributionWithTagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDistributionWithTagsResponsePrivate::parseCreateDistributionWithTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDistributionWithTagsResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
