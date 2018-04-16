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

#include "setactivereceiptrulesetresponse.h"
#include "setactivereceiptrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::SetActiveReceiptRuleSetResponse
 *
 * \brief The SetActiveReceiptRuleSetResponse class encapsulates SES SetActiveReceiptRuleSet responses.
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
 * \sa SESClient::setActiveReceiptRuleSet
 */

/*!
 * @brief  Constructs a new SetActiveReceiptRuleSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetActiveReceiptRuleSetResponse::SetActiveReceiptRuleSetResponse(
        const SetActiveReceiptRuleSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new SetActiveReceiptRuleSetResponsePrivate(this), parent)
{
    setRequest(new SetActiveReceiptRuleSetRequest(request));
    setReply(reply);
}

const SetActiveReceiptRuleSetRequest * SetActiveReceiptRuleSetResponse::request() const
{
    Q_D(const SetActiveReceiptRuleSetResponse);
    return static_cast<const SetActiveReceiptRuleSetRequest *>(d->request);
}

/*!
 * @brief  Parse a SES SetActiveReceiptRuleSet response.
 *
 * @param  response  Response to parse.
 */
void SetActiveReceiptRuleSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetActiveReceiptRuleSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class SetActiveReceiptRuleSetResponsePrivate
 *
 * \brief Private implementation for SetActiveReceiptRuleSetResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SetActiveReceiptRuleSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetActiveReceiptRuleSetResponse instance.
 */
SetActiveReceiptRuleSetResponsePrivate::SetActiveReceiptRuleSetResponsePrivate(
    SetActiveReceiptRuleSetResponse * const q) : SESResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SES SetActiveReceiptRuleSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetActiveReceiptRuleSetResponsePrivate::parseSetActiveReceiptRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetActiveReceiptRuleSetResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
