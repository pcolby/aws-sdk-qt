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

#include "checkifphonenumberisoptedoutresponse.h"
#include "checkifphonenumberisoptedoutresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/**
 * @class  CheckIfPhoneNumberIsOptedOutResponse
 *
 * @brief  Handles SNS CheckIfPhoneNumberIsOptedOut responses.
 *
 * @see    SNSClient::checkIfPhoneNumberIsOptedOut
 */

/**
 * @brief  Constructs a new CheckIfPhoneNumberIsOptedOutResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CheckIfPhoneNumberIsOptedOutResponse::CheckIfPhoneNumberIsOptedOutResponse(
        const CheckIfPhoneNumberIsOptedOutRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new CheckIfPhoneNumberIsOptedOutResponsePrivate(this), parent)
{
    setRequest(new CheckIfPhoneNumberIsOptedOutRequest(request));
    setReply(reply);
}

const CheckIfPhoneNumberIsOptedOutRequest * CheckIfPhoneNumberIsOptedOutResponse::request() const
{
    Q_D(const CheckIfPhoneNumberIsOptedOutResponse);
    return static_cast<const CheckIfPhoneNumberIsOptedOutRequest *>(d->request);
}

/**
 * @brief  Parse a SNS CheckIfPhoneNumberIsOptedOut response.
 *
 * @param  response  Response to parse.
 */
void CheckIfPhoneNumberIsOptedOutResponse::parseSuccess(QIODevice &response)
{
    Q_D(CheckIfPhoneNumberIsOptedOutResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CheckIfPhoneNumberIsOptedOutResponsePrivate
 *
 * @brief  Private implementation for CheckIfPhoneNumberIsOptedOutResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CheckIfPhoneNumberIsOptedOutResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CheckIfPhoneNumberIsOptedOutResponse instance.
 */
CheckIfPhoneNumberIsOptedOutResponsePrivate::CheckIfPhoneNumberIsOptedOutResponsePrivate(
    CheckIfPhoneNumberIsOptedOutResponse * const q) : SNSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SNS CheckIfPhoneNumberIsOptedOutResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CheckIfPhoneNumberIsOptedOutResponsePrivate::CheckIfPhoneNumberIsOptedOutResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CheckIfPhoneNumberIsOptedOutResponse"));
    /// @todo
}

} // namespace SNS
} // namespace QtAws
