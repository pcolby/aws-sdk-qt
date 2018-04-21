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

#include "updatereceiptruleresponse.h"
#include "updatereceiptruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::UpdateReceiptRuleResponse
 * \brief The UpdateReceiptRuleResponse class provides an interace for SES UpdateReceiptRule responses.
 *
 * \inmodule QtAwsSES
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
 * \sa SesClient::updateReceiptRule
 */

/*!
 * Constructs a UpdateReceiptRuleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateReceiptRuleResponse::UpdateReceiptRuleResponse(
        const UpdateReceiptRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new UpdateReceiptRuleResponsePrivate(this), parent)
{
    setRequest(new UpdateReceiptRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateReceiptRuleRequest * UpdateReceiptRuleResponse::request() const
{
    Q_D(const UpdateReceiptRuleResponse);
    return static_cast<const UpdateReceiptRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SES UpdateReceiptRule \a response.
 */
void UpdateReceiptRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateReceiptRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::UpdateReceiptRuleResponsePrivate
 * \brief The UpdateReceiptRuleResponsePrivate class provides private implementation for UpdateReceiptRuleResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a UpdateReceiptRuleResponsePrivate object with public implementation \a q.
 */
UpdateReceiptRuleResponsePrivate::UpdateReceiptRuleResponsePrivate(
    UpdateReceiptRuleResponse * const q) : SESResponsePrivate(q)
{

}

/*!
 * Parses a SES UpdateReceiptRule response element from \a xml.
 */
void UpdateReceiptRuleResponsePrivate::parseUpdateReceiptRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateReceiptRuleResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
