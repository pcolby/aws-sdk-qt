/*
    Copyright 2013-2021 Paul Colby

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

#include "createreceiptruleresponse.h"
#include "createreceiptruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::CreateReceiptRuleResponse
 * \brief The CreateReceiptRuleResponse class provides an interace for SES CreateReceiptRule responses.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::createReceiptRule
 */

/*!
 * Constructs a CreateReceiptRuleResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReceiptRuleResponse::CreateReceiptRuleResponse(
        const CreateReceiptRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new CreateReceiptRuleResponsePrivate(this), parent)
{
    setRequest(new CreateReceiptRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReceiptRuleRequest * CreateReceiptRuleResponse::request() const
{
    Q_D(const CreateReceiptRuleResponse);
    return static_cast<const CreateReceiptRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SES CreateReceiptRule \a response.
 */
void CreateReceiptRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReceiptRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::CreateReceiptRuleResponsePrivate
 * \brief The CreateReceiptRuleResponsePrivate class provides private implementation for CreateReceiptRuleResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a CreateReceiptRuleResponsePrivate object with public implementation \a q.
 */
CreateReceiptRuleResponsePrivate::CreateReceiptRuleResponsePrivate(
    CreateReceiptRuleResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a SES CreateReceiptRule response element from \a xml.
 */
void CreateReceiptRuleResponsePrivate::parseCreateReceiptRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReceiptRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SES
} // namespace QtAws
