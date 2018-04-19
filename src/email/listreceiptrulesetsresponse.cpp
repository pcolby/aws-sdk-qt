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

#include "listreceiptrulesetsresponse.h"
#include "listreceiptrulesetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::ListReceiptRuleSetsResponse
 * \brief The ListReceiptRuleSetsResponse class provides an interace for SES ListReceiptRuleSets responses.
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
 * \sa SESClient::listReceiptRuleSets
 */

/*!
 * Constructs a ListReceiptRuleSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListReceiptRuleSetsResponse::ListReceiptRuleSetsResponse(
        const ListReceiptRuleSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new ListReceiptRuleSetsResponsePrivate(this), parent)
{
    setRequest(new ListReceiptRuleSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReceiptRuleSetsRequest * ListReceiptRuleSetsResponse::request() const
{
    Q_D(const ListReceiptRuleSetsResponse);
    return static_cast<const ListReceiptRuleSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SES ListReceiptRuleSets \a response.
 */
void ListReceiptRuleSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListReceiptRuleSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::ListReceiptRuleSetsResponsePrivate
 * \brief The ListReceiptRuleSetsResponsePrivate class provides private implementation for ListReceiptRuleSetsResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a ListReceiptRuleSetsResponsePrivate object with public implementation \a q.
 */
ListReceiptRuleSetsResponsePrivate::ListReceiptRuleSetsResponsePrivate(
    ListReceiptRuleSetsResponse * const q) : SESResponsePrivate(q)
{

}

/*!
 * Parses a SES ListReceiptRuleSets response element from \a xml.
 */
void ListReceiptRuleSetsResponsePrivate::parseListReceiptRuleSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReceiptRuleSetsResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
