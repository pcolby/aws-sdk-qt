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

#include "createplatformapplicationresponse.h"
#include "createplatformapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::CreatePlatformApplicationResponse
 *
 * \brief The CreatePlatformApplicationResponse class provides an interace for SNS CreatePlatformApplication responses.
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
 * \sa SNSClient::createPlatformApplication
 */

/*!
 * @brief  Constructs a new CreatePlatformApplicationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePlatformApplicationResponse::CreatePlatformApplicationResponse(
        const CreatePlatformApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new CreatePlatformApplicationResponsePrivate(this), parent)
{
    setRequest(new CreatePlatformApplicationRequest(request));
    setReply(reply);
}

const CreatePlatformApplicationRequest * CreatePlatformApplicationResponse::request() const
{
    Q_D(const CreatePlatformApplicationResponse);
    return static_cast<const CreatePlatformApplicationRequest *>(d->request);
}

/*!
 * @brief  Parse a SNS CreatePlatformApplication response.
 *
 * @param  response  Response to parse.
 */
void CreatePlatformApplicationResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreatePlatformApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreatePlatformApplicationResponsePrivate
 *
 * \brief Private implementation for CreatePlatformApplicationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreatePlatformApplicationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePlatformApplicationResponse instance.
 */
CreatePlatformApplicationResponsePrivate::CreatePlatformApplicationResponsePrivate(
    CreatePlatformApplicationResponse * const q) : SNSResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SNS CreatePlatformApplicationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePlatformApplicationResponsePrivate::parseCreatePlatformApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePlatformApplicationResponse"));
    /// @todo
}

} // namespace SNS
} // namespace QtAws
