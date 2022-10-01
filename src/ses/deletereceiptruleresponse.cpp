// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereceiptruleresponse.h"
#include "deletereceiptruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteReceiptRuleResponse
 * \brief The DeleteReceiptRuleResponse class provides an interace for Ses DeleteReceiptRule responses.
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
 * \sa SesClient::deleteReceiptRule
 */

/*!
 * Constructs a DeleteReceiptRuleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReceiptRuleResponse::DeleteReceiptRuleResponse(
        const DeleteReceiptRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new DeleteReceiptRuleResponsePrivate(this), parent)
{
    setRequest(new DeleteReceiptRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReceiptRuleRequest * DeleteReceiptRuleResponse::request() const
{
    Q_D(const DeleteReceiptRuleResponse);
    return static_cast<const DeleteReceiptRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses DeleteReceiptRule \a response.
 */
void DeleteReceiptRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReceiptRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::DeleteReceiptRuleResponsePrivate
 * \brief The DeleteReceiptRuleResponsePrivate class provides private implementation for DeleteReceiptRuleResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteReceiptRuleResponsePrivate object with public implementation \a q.
 */
DeleteReceiptRuleResponsePrivate::DeleteReceiptRuleResponsePrivate(
    DeleteReceiptRuleResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses DeleteReceiptRule response element from \a xml.
 */
void DeleteReceiptRuleResponsePrivate::parseDeleteReceiptRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReceiptRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
