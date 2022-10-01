// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereceiptfilterresponse.h"
#include "deletereceiptfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteReceiptFilterResponse
 * \brief The DeleteReceiptFilterResponse class provides an interace for Ses DeleteReceiptFilter responses.
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
 * \sa SesClient::deleteReceiptFilter
 */

/*!
 * Constructs a DeleteReceiptFilterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReceiptFilterResponse::DeleteReceiptFilterResponse(
        const DeleteReceiptFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new DeleteReceiptFilterResponsePrivate(this), parent)
{
    setRequest(new DeleteReceiptFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReceiptFilterRequest * DeleteReceiptFilterResponse::request() const
{
    Q_D(const DeleteReceiptFilterResponse);
    return static_cast<const DeleteReceiptFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses DeleteReceiptFilter \a response.
 */
void DeleteReceiptFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReceiptFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::DeleteReceiptFilterResponsePrivate
 * \brief The DeleteReceiptFilterResponsePrivate class provides private implementation for DeleteReceiptFilterResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteReceiptFilterResponsePrivate object with public implementation \a q.
 */
DeleteReceiptFilterResponsePrivate::DeleteReceiptFilterResponsePrivate(
    DeleteReceiptFilterResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses DeleteReceiptFilter response element from \a xml.
 */
void DeleteReceiptFilterResponsePrivate::parseDeleteReceiptFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReceiptFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
