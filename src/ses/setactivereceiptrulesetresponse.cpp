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

#include "setactivereceiptrulesetresponse.h"
#include "setactivereceiptrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::SetActiveReceiptRuleSetResponse
 * \brief The SetActiveReceiptRuleSetResponse class provides an interace for SES SetActiveReceiptRuleSet responses.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::setActiveReceiptRuleSet
 */

/*!
 * Constructs a SetActiveReceiptRuleSetResponse object for \a reply to \a request, with parent \a parent.
 */
SetActiveReceiptRuleSetResponse::SetActiveReceiptRuleSetResponse(
        const SetActiveReceiptRuleSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new SetActiveReceiptRuleSetResponsePrivate(this), parent)
{
    setRequest(new SetActiveReceiptRuleSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetActiveReceiptRuleSetRequest * SetActiveReceiptRuleSetResponse::request() const
{
    Q_D(const SetActiveReceiptRuleSetResponse);
    return static_cast<const SetActiveReceiptRuleSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SES SetActiveReceiptRuleSet \a response.
 */
void SetActiveReceiptRuleSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetActiveReceiptRuleSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::SetActiveReceiptRuleSetResponsePrivate
 * \brief The SetActiveReceiptRuleSetResponsePrivate class provides private implementation for SetActiveReceiptRuleSetResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a SetActiveReceiptRuleSetResponsePrivate object with public implementation \a q.
 */
SetActiveReceiptRuleSetResponsePrivate::SetActiveReceiptRuleSetResponsePrivate(
    SetActiveReceiptRuleSetResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a SES SetActiveReceiptRuleSet response element from \a xml.
 */
void SetActiveReceiptRuleSetResponsePrivate::parseSetActiveReceiptRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetActiveReceiptRuleSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SES
} // namespace QtAws
