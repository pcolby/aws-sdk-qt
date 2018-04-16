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

#include "updatestreamingdistributionresponse.h"
#include "updatestreamingdistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateStreamingDistributionResponse
 *
 * \brief The UpdateStreamingDistributionResponse class encapsulates CloudFront UpdateStreamingDistribution responses.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateStreamingDistribution
 */

/*!
 * @brief  Constructs a new UpdateStreamingDistributionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateStreamingDistributionResponse::UpdateStreamingDistributionResponse(
        const UpdateStreamingDistributionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateStreamingDistributionResponsePrivate(this), parent)
{
    setRequest(new UpdateStreamingDistributionRequest(request));
    setReply(reply);
}

const UpdateStreamingDistributionRequest * UpdateStreamingDistributionResponse::request() const
{
    Q_D(const UpdateStreamingDistributionResponse);
    return static_cast<const UpdateStreamingDistributionRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFront UpdateStreamingDistribution response.
 *
 * @param  response  Response to parse.
 */
void UpdateStreamingDistributionResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateStreamingDistributionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateStreamingDistributionResponsePrivate
 *
 * \brief Private implementation for UpdateStreamingDistributionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateStreamingDistributionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateStreamingDistributionResponse instance.
 */
UpdateStreamingDistributionResponsePrivate::UpdateStreamingDistributionResponsePrivate(
    UpdateStreamingDistributionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFront UpdateStreamingDistributionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateStreamingDistributionResponsePrivate::parseUpdateStreamingDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStreamingDistributionResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
