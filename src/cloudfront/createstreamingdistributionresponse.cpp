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

#include "createstreamingdistributionresponse.h"
#include "createstreamingdistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateStreamingDistributionResponse
 *
 * \brief The CreateStreamingDistributionResponse class encapsulates CloudFront CreateStreamingDistribution responses.
 *
 * \ingroup CloudFront
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
 * @brief  Constructs a new CreateStreamingDistributionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const CreateStreamingDistributionRequest * CreateStreamingDistributionResponse::request() const
{
    Q_D(const CreateStreamingDistributionResponse);
    return static_cast<const CreateStreamingDistributionRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFront CreateStreamingDistribution response.
 *
 * @param  response  Response to parse.
 */
void CreateStreamingDistributionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateStreamingDistributionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateStreamingDistributionResponsePrivate
 *
 * \brief Private implementation for CreateStreamingDistributionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateStreamingDistributionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateStreamingDistributionResponse instance.
 */
CreateStreamingDistributionResponsePrivate::CreateStreamingDistributionResponsePrivate(
    CreateStreamingDistributionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFront CreateStreamingDistributionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateStreamingDistributionResponsePrivate::parseCreateStreamingDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamingDistributionResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
