/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateaccountsendingenabledresponse.h"
#include "updateaccountsendingenabledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::UpdateAccountSendingEnabledResponse
 * \brief The UpdateAccountSendingEnabledResponse class provides an interace for SES UpdateAccountSendingEnabled responses.
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
 * \sa SesClient::updateAccountSendingEnabled
 */

/*!
 * Constructs a UpdateAccountSendingEnabledResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAccountSendingEnabledResponse::UpdateAccountSendingEnabledResponse(
        const UpdateAccountSendingEnabledRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new UpdateAccountSendingEnabledResponsePrivate(this), parent)
{
    setRequest(new UpdateAccountSendingEnabledRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAccountSendingEnabledRequest * UpdateAccountSendingEnabledResponse::request() const
{
    Q_D(const UpdateAccountSendingEnabledResponse);
    return static_cast<const UpdateAccountSendingEnabledRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SES UpdateAccountSendingEnabled \a response.
 */
void UpdateAccountSendingEnabledResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAccountSendingEnabledResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::UpdateAccountSendingEnabledResponsePrivate
 * \brief The UpdateAccountSendingEnabledResponsePrivate class provides private implementation for UpdateAccountSendingEnabledResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a UpdateAccountSendingEnabledResponsePrivate object with public implementation \a q.
 */
UpdateAccountSendingEnabledResponsePrivate::UpdateAccountSendingEnabledResponsePrivate(
    UpdateAccountSendingEnabledResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a SES UpdateAccountSendingEnabled response element from \a xml.
 */
void UpdateAccountSendingEnabledResponsePrivate::parseUpdateAccountSendingEnabledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAccountSendingEnabledResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
