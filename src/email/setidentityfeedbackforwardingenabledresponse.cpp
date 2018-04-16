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

#include "setidentityfeedbackforwardingenabledresponse.h"
#include "setidentityfeedbackforwardingenabledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::SetIdentityFeedbackForwardingEnabledResponse
 *
 * \brief The SetIdentityFeedbackForwardingEnabledResponse class encapsulates SES SetIdentityFeedbackForwardingEnabled responses.
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
 * \sa SESClient::setIdentityFeedbackForwardingEnabled
 */

/*!
 * @brief  Constructs a new SetIdentityFeedbackForwardingEnabledResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetIdentityFeedbackForwardingEnabledResponse::SetIdentityFeedbackForwardingEnabledResponse(
        const SetIdentityFeedbackForwardingEnabledRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new SetIdentityFeedbackForwardingEnabledResponsePrivate(this), parent)
{
    setRequest(new SetIdentityFeedbackForwardingEnabledRequest(request));
    setReply(reply);
}

const SetIdentityFeedbackForwardingEnabledRequest * SetIdentityFeedbackForwardingEnabledResponse::request() const
{
    Q_D(const SetIdentityFeedbackForwardingEnabledResponse);
    return static_cast<const SetIdentityFeedbackForwardingEnabledRequest *>(d->request);
}

/*!
 * @brief  Parse a SES SetIdentityFeedbackForwardingEnabled response.
 *
 * @param  response  Response to parse.
 */
void SetIdentityFeedbackForwardingEnabledResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetIdentityFeedbackForwardingEnabledResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class SetIdentityFeedbackForwardingEnabledResponsePrivate
 *
 * \brief Private implementation for SetIdentityFeedbackForwardingEnabledResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SetIdentityFeedbackForwardingEnabledResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetIdentityFeedbackForwardingEnabledResponse instance.
 */
SetIdentityFeedbackForwardingEnabledResponsePrivate::SetIdentityFeedbackForwardingEnabledResponsePrivate(
    SetIdentityFeedbackForwardingEnabledResponse * const q) : SESResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SES SetIdentityFeedbackForwardingEnabledResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetIdentityFeedbackForwardingEnabledResponsePrivate::parseSetIdentityFeedbackForwardingEnabledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetIdentityFeedbackForwardingEnabledResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
