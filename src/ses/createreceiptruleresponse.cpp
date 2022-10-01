// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreceiptruleresponse.h"
#include "createreceiptruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::CreateReceiptRuleResponse
 * \brief The CreateReceiptRuleResponse class provides an interace for Ses CreateReceiptRule responses.
 *
 * \inmodule QtAwsSes
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
 * Parses a successful Ses CreateReceiptRule \a response.
 */
void CreateReceiptRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReceiptRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::CreateReceiptRuleResponsePrivate
 * \brief The CreateReceiptRuleResponsePrivate class provides private implementation for CreateReceiptRuleResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a CreateReceiptRuleResponsePrivate object with public implementation \a q.
 */
CreateReceiptRuleResponsePrivate::CreateReceiptRuleResponsePrivate(
    CreateReceiptRuleResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses CreateReceiptRule response element from \a xml.
 */
void CreateReceiptRuleResponsePrivate::parseCreateReceiptRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReceiptRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
