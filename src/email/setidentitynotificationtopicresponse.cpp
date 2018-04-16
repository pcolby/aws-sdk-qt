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

#include "setidentitynotificationtopicresponse.h"
#include "setidentitynotificationtopicresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::SetIdentityNotificationTopicResponse
 *
 * \brief The SetIdentityNotificationTopicResponse class provides an interace for SES SetIdentityNotificationTopic responses.
 *
 * \ingroup SES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SESClient::setIdentityNotificationTopic
 */

/*!
 * @brief  Constructs a new SetIdentityNotificationTopicResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetIdentityNotificationTopicResponse::SetIdentityNotificationTopicResponse(
        const SetIdentityNotificationTopicRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new SetIdentityNotificationTopicResponsePrivate(this), parent)
{
    setRequest(new SetIdentityNotificationTopicRequest(request));
    setReply(reply);
}

const SetIdentityNotificationTopicRequest * SetIdentityNotificationTopicResponse::request() const
{
    Q_D(const SetIdentityNotificationTopicResponse);
    return static_cast<const SetIdentityNotificationTopicRequest *>(d->request);
}

/*!
 * @brief  Parse a SES SetIdentityNotificationTopic response.
 *
 * @param  response  Response to parse.
 */
void SetIdentityNotificationTopicResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetIdentityNotificationTopicResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class SetIdentityNotificationTopicResponsePrivate
 *
 * \brief Private implementation for SetIdentityNotificationTopicResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SetIdentityNotificationTopicResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetIdentityNotificationTopicResponse instance.
 */
SetIdentityNotificationTopicResponsePrivate::SetIdentityNotificationTopicResponsePrivate(
    SetIdentityNotificationTopicResponse * const q) : SESResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SES SetIdentityNotificationTopicResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetIdentityNotificationTopicResponsePrivate::parseSetIdentityNotificationTopicResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetIdentityNotificationTopicResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
