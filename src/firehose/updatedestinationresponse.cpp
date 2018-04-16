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

#include "updatedestinationresponse.h"
#include "updatedestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::UpdateDestinationResponse
 *
 * \brief The UpdateDestinationResponse class encapsulates Firehose UpdateDestination responses.
 *
 * \ingroup Firehose
 *
 *  <fullname>Amazon Kinesis Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Firehose is a fully managed service that delivers real-time streaming data to destinations such as Amazon
 *  Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), and Amazon
 *
 * \sa FirehoseClient::updateDestination
 */

/*!
 * @brief  Constructs a new UpdateDestinationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDestinationResponse::UpdateDestinationResponse(
        const UpdateDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new UpdateDestinationResponsePrivate(this), parent)
{
    setRequest(new UpdateDestinationRequest(request));
    setReply(reply);
}

const UpdateDestinationRequest * UpdateDestinationResponse::request() const
{
    Q_D(const UpdateDestinationResponse);
    return static_cast<const UpdateDestinationRequest *>(d->request);
}

/*!
 * @brief  Parse a Firehose UpdateDestination response.
 *
 * @param  response  Response to parse.
 */
void UpdateDestinationResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateDestinationResponsePrivate
 *
 * \brief Private implementation for UpdateDestinationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateDestinationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDestinationResponse instance.
 */
UpdateDestinationResponsePrivate::UpdateDestinationResponsePrivate(
    UpdateDestinationResponse * const q) : FirehoseResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Firehose UpdateDestinationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDestinationResponsePrivate::parseUpdateDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDestinationResponse"));
    /// @todo
}

} // namespace Firehose
} // namespace QtAws
