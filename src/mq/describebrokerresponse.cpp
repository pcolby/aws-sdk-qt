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

#include "describebrokerresponse.h"
#include "describebrokerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/**
 * @class  DescribeBrokerResponse
 *
 * @brief  Handles MQ DescribeBroker responses.
 *
 * @see    MQClient::describeBroker
 */

/**
 * @brief  Constructs a new DescribeBrokerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeBrokerResponse::DescribeBrokerResponse(
        const DescribeBrokerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MQResponse(new DescribeBrokerResponsePrivate(this), parent)
{
    setRequest(new DescribeBrokerRequest(request));
    setReply(reply);
}

const DescribeBrokerRequest * DescribeBrokerResponse::request() const
{
    Q_D(const DescribeBrokerResponse);
    return static_cast<const DescribeBrokerRequest *>(d->request);
}

/**
 * @brief  Parse a MQ DescribeBroker response.
 *
 * @param  response  Response to parse.
 */
void DescribeBrokerResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeBrokerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeBrokerResponsePrivate
 *
 * @brief  Private implementation for DescribeBrokerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBrokerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeBrokerResponse instance.
 */
DescribeBrokerResponsePrivate::DescribeBrokerResponsePrivate(
    DescribeBrokerResponse * const q) : MQResponsePrivate(q)
{

}

/**
 * @brief  Parse an MQ DescribeBrokerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeBrokerResponsePrivate::DescribeBrokerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBrokerResponse"));
    /// @todo
}

} // namespace MQ
} // namespace QtAws
