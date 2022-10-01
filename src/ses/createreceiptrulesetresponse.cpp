// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreceiptrulesetresponse.h"
#include "createreceiptrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::CreateReceiptRuleSetResponse
 * \brief The CreateReceiptRuleSetResponse class provides an interace for Ses CreateReceiptRuleSet responses.
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
 * \sa SesClient::createReceiptRuleSet
 */

/*!
 * Constructs a CreateReceiptRuleSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReceiptRuleSetResponse::CreateReceiptRuleSetResponse(
        const CreateReceiptRuleSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new CreateReceiptRuleSetResponsePrivate(this), parent)
{
    setRequest(new CreateReceiptRuleSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReceiptRuleSetRequest * CreateReceiptRuleSetResponse::request() const
{
    Q_D(const CreateReceiptRuleSetResponse);
    return static_cast<const CreateReceiptRuleSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses CreateReceiptRuleSet \a response.
 */
void CreateReceiptRuleSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReceiptRuleSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::CreateReceiptRuleSetResponsePrivate
 * \brief The CreateReceiptRuleSetResponsePrivate class provides private implementation for CreateReceiptRuleSetResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a CreateReceiptRuleSetResponsePrivate object with public implementation \a q.
 */
CreateReceiptRuleSetResponsePrivate::CreateReceiptRuleSetResponsePrivate(
    CreateReceiptRuleSetResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses CreateReceiptRuleSet response element from \a xml.
 */
void CreateReceiptRuleSetResponsePrivate::parseCreateReceiptRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReceiptRuleSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
