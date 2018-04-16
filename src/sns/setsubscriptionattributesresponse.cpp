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

#include "setsubscriptionattributesresponse.h"
#include "setsubscriptionattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::SetSubscriptionAttributesResponse
 *
 * \brief The SetSubscriptionAttributesResponse class encapsulates SNS SetSubscriptionAttributes responses.
 *
 * \ingroup SNS
 *
 *  <fullname>Amazon Simple Notification Service</fullname>
 * 
 *  Amazon Simple Notification Service (Amazon SNS) is a web service that enables you to build distributed web-enabled
 *  applications. Applications can use Amazon SNS to easily push real-time notification messages to interested subscribers
 *  over multiple delivery protocols. For more information about this product see <a
 *  href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. For detailed information about Amazon SNS features and
 *  their associated API calls, see the <a href="http://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer Guide</a>.
 * 
 *  </p
 * 
 *  We also provide SDKs that enable you to access Amazon SNS from your preferred programming language. The SDKs contain
 *  functionality that automatically takes care of tasks such as: cryptographically signing your service requests, retrying
 *  requests, and handling error responses. For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools
 *  for Amazon Web Services</a>.
 *
 * \sa SNSClient::setSubscriptionAttributes
 */

/*!
 * @brief  Constructs a new SetSubscriptionAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetSubscriptionAttributesResponse::SetSubscriptionAttributesResponse(
        const SetSubscriptionAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new SetSubscriptionAttributesResponsePrivate(this), parent)
{
    setRequest(new SetSubscriptionAttributesRequest(request));
    setReply(reply);
}

const SetSubscriptionAttributesRequest * SetSubscriptionAttributesResponse::request() const
{
    Q_D(const SetSubscriptionAttributesResponse);
    return static_cast<const SetSubscriptionAttributesRequest *>(d->request);
}

/*!
 * @brief  Parse a SNS SetSubscriptionAttributes response.
 *
 * @param  response  Response to parse.
 */
void SetSubscriptionAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetSubscriptionAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class SetSubscriptionAttributesResponsePrivate
 *
 * \brief Private implementation for SetSubscriptionAttributesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SetSubscriptionAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetSubscriptionAttributesResponse instance.
 */
SetSubscriptionAttributesResponsePrivate::SetSubscriptionAttributesResponsePrivate(
    SetSubscriptionAttributesResponse * const q) : SNSResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SNS SetSubscriptionAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetSubscriptionAttributesResponsePrivate::parseSetSubscriptionAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetSubscriptionAttributesResponse"));
    /// @todo
}

} // namespace SNS
} // namespace QtAws
