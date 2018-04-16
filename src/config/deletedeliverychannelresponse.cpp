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

#include "deletedeliverychannelresponse.h"
#include "deletedeliverychannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::DeleteDeliveryChannelResponse
 *
 * \brief The DeleteDeliveryChannelResponse class encapsulates ConfigService DeleteDeliveryChannel responses.
 *
 * \ingroup ConfigService
 *
 *  <fullname>AWS Config</fullname>
 * 
 *  AWS Config provides a way to keep track of the configurations of all the AWS resources associated with your AWS account.
 *  You can use AWS Config to get the current and historical configurations of each AWS resource and also to get information
 *  about the relationship between the resources. An AWS resource can be an Amazon Compute Cloud (Amazon EC2) instance, an
 *  Elastic Block Store (EBS) volume, an elastic network Interface (ENI), or a security group. For a complete list of
 *  resources currently supported by AWS Config, see <a
 *  href="http://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
 *  AWS
 * 
 *  Resources</a>>
 * 
 *  You can access and manage AWS Config through the AWS Management Console, the AWS Command Line Interface (AWS CLI), the
 *  AWS Config API, or the AWS SDKs for AWS Config. This reference guide contains documentation for the AWS Config API and
 *  the AWS CLI commands that you can use to manage AWS Config. The AWS Config API uses the Signature Version 4 protocol for
 *  signing requests. For more information about how to sign a request with this protocol, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a>.
 *  For detailed information about AWS Config features and their associated actions or commands, as well as how to work with
 *  AWS Management Console, see <a href="http://docs.aws.amazon.com/config/latest/developerguide/WhatIsConfig.html">What Is
 *  AWS Config</a> in the <i>AWS Config Developer
 * 
 *  Guide</i>> <ul> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> </ul> <ul> <li/>
 *  <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> </ul> <ul> <li> </li> <li/> <li/> <li/> <li/>
 *
 * \sa ConfigServiceClient::deleteDeliveryChannel
 */

/*!
 * @brief  Constructs a new DeleteDeliveryChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDeliveryChannelResponse::DeleteDeliveryChannelResponse(
        const DeleteDeliveryChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DeleteDeliveryChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteDeliveryChannelRequest(request));
    setReply(reply);
}

const DeleteDeliveryChannelRequest * DeleteDeliveryChannelResponse::request() const
{
    Q_D(const DeleteDeliveryChannelResponse);
    return static_cast<const DeleteDeliveryChannelRequest *>(d->request);
}

/*!
 * @brief  Parse a ConfigService DeleteDeliveryChannel response.
 *
 * @param  response  Response to parse.
 */
void DeleteDeliveryChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteDeliveryChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteDeliveryChannelResponsePrivate
 *
 * \brief Private implementation for DeleteDeliveryChannelResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteDeliveryChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDeliveryChannelResponse instance.
 */
DeleteDeliveryChannelResponsePrivate::DeleteDeliveryChannelResponsePrivate(
    DeleteDeliveryChannelResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ConfigService DeleteDeliveryChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDeliveryChannelResponsePrivate::parseDeleteDeliveryChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeliveryChannelResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
